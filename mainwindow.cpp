#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>

int flag_connection = 0;
int flag_data = 0;
int prev_connection = 0;
int disconnection_count = 0;
int noreceive_count = 0;

int count1 = 0;
int count5 = 0;
int count10 = 0;
int dis_count1 = 0;
int dis_count5 = 0;
int dis_count10 = 0;

void SetLEColor(QLineEdit *le, QString color){
    le->setStyleSheet("QLineEdit{background-color:"+color+"}");
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    lan2can = new RBLAN2CAN();
    timer = new QTimer();

    connect(timer,SIGNAL(timeout()),this,SLOT(onTimer()));
    timer->start(500);

    ui->TE_LOG->append(QDateTime::currentDateTime().toString("[yyyy-MM-dd] hh:mm:ss")+"  program start.. ");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onTimer()
{
    if(lan2can->get_lan2can_sock1connection()==1){
        SetLEColor(ui->LE_CONNECTION,"green");
        if(prev_connection == 0){
            if(flag_connection == 1){
                if(disconnection_count > 20){
                    dis_count10++;
                }else if(disconnection_count > 10){
                    dis_count5++;
                }else if(disconnection_count > 2){
                    dis_count1++;
                }
            }
            ui->TE_LOG->append(QDateTime::currentDateTime().toString("[yyyy-MM-dd] hh:mm:ss")+"  connected ");
        }
        flag_connection = 1;
        disconnection_count = 0;

    }else{
        SetLEColor(ui->LE_CONNECTION,"red");
        disconnection_count++;
        if(prev_connection == 1)
            ui->TE_LOG->append(QDateTime::currentDateTime().toString("[yyyy-MM-dd] hh:mm:ss")+"  disconnected ");
    }
    prev_connection = lan2can->get_lan2can_sock1connection();






    if(lan2can->recv_success_cnt > 0){
        if(flag_data == 1){
            if(noreceive_count > 100){
                count10++;
            }else if(noreceive_count > 50){
                count5++;
            }else if(noreceive_count > 10){
                count1++;
            }
            ui->TE_LOG->append(QDateTime::currentDateTime().toString("[yyyy-MM-dd] hh:mm:ss")+"  data received again ");
            flag_data = 0;
            noreceive_count = 0;
        }
    }

    noreceive_count = lan2can->recv_fail_cnt;
    if(noreceive_count > 50){//5second
        if(flag_data == 0){
            ui->TE_LOG->append(QDateTime::currentDateTime().toString("[yyyy-MM-dd] hh:mm:ss")+"  didn't received ");
            lan2can->recv_success_cnt = 0;
        }
        flag_data = 1;
    }

    ui->LE_COUNT_1->setText(QString().sprintf("%d",count1));
    ui->LE_COUNT_5->setText(QString().sprintf("%d",count5));
    ui->LE_COUNT_10->setText(QString().sprintf("%d",count10));
    ui->LE_COUNT_DIS_1->setText(QString().sprintf("%d",dis_count1));
    ui->LE_COUNT_DIS_5->setText(QString().sprintf("%d",dis_count5));
    ui->LE_COUNT_DIS_10->setText(QString().sprintf("%d",dis_count10));


    ui->LE_FAIL_CNT->setText(QString().sprintf("%d",lan2can->recv_fail_cnt));
    ui->LE_SUCCESS_CNT->setText(QString().sprintf("%d",lan2can->recv_success_cnt));
}
