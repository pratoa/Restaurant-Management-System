#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "tableclick.h"
#include <QApplication>
#include <QDebug>
#include <string>
#include <QString>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


        ui->Table1->setFixedHeight(60);
        ui->Table1->setFixedWidth(70);
        //
        ui->Table2->setFixedHeight(60);
        ui->Table2->setFixedWidth(70);
        //
        ui->Table3->setFixedHeight(60);
        ui->Table3->setFixedWidth(70);
        //
        ui->Table4->setFixedHeight(60);
        ui->Table4->setFixedWidth(70);
        //
        ui->Table5->setFixedHeight(60);
        ui->Table5->setFixedWidth(70);
        //
        ui->Table6->setFixedHeight(60);
        ui->Table6->setFixedWidth(70);
        //
        ui->Table7->setFixedHeight(60);
        ui->Table7->setFixedWidth(70);
        //
        ui->Table8->setFixedHeight(60);
        ui->Table8->setFixedWidth(70);
                                                //set button to be circular
        ui->Seat1->setText("Seat 1");
        ui->Seat1->setFixedHeight(200);
        ui->Seat1->setFixedWidth(200);
        QRect *rect = new QRect(0,0,30,30);
        qDebug() << rect->size();
        qDebug() << ui->Seat1->size();
        QRegion* region = new QRegion(*rect,QRegion::Ellipse);
        qDebug() << region->boundingRect().size();
        ui->Seat1->setMask(*region);

        //
                                                //set button to be circular
        ui->Seat2->setText("Seat 2");
        ui->Seat2->setFixedHeight(200);
        ui->Seat2->setFixedWidth(200);
        qDebug() << ui->Seat2->size();
        qDebug() << region->boundingRect().size();
        ui->Seat2->setMask(*region);
        //
                                                //set button to be circular
        ui->Seat3->setText("Seat 3");
        ui->Seat3->setFixedHeight(200);
        ui->Seat3->setFixedWidth(200);
        qDebug() << ui->Seat3->size();
        qDebug() << region->boundingRect().size();
        ui->Seat3->setMask(*region);
        //
                                                //set button to be circular
        ui->Seat4->setText("Seat 4");
        ui->Seat4->setFixedHeight(200);
        ui->Seat4->setFixedWidth(200);
        qDebug() << ui->Seat4->size();
        qDebug() << region->boundingRect().size();
        ui->Seat4->setMask(*region);
        //
                                                 //set button to be circular
        ui->Seat5->setText("Seat 5");
        ui->Seat5->setFixedHeight(200);
        ui->Seat5->setFixedWidth(200);
        qDebug() << ui->Seat5->size();
        qDebug() << region->boundingRect().size();
        ui->Seat5->setMask(*region);
        //
                                                 //set button to be circular
        ui->Seat6->setText("Seat 6");
        ui->Seat6->setFixedHeight(200);
        ui->Seat6->setFixedWidth(200);
        qDebug() << ui->Seat6->size();
        qDebug() << region->boundingRect().size();
        ui->Seat6->setMask(*region);
        //
                                                 //set button to be circular
        ui->Seat6->setText("Seat 6");
        ui->Seat6->setFixedHeight(200);
        ui->Seat6->setFixedWidth(200);
        qDebug() << ui->Seat6->size();
        qDebug() << region->boundingRect().size();
        ui->Seat6->setMask(*region);
        //

    ui->bar->setStyleSheet("QLabel {color : white;}");
    ui->entrance->setStyleSheet("QLabel {color : white;}");
    //connection table1 to tableclick
    QPushButton *tb1 = ui->Table1;
    QObject::connect(tb1,SIGNAL(clicked()),
                this, SLOT(tableclick()));
    //connection table2 to tableclick
    QPushButton *tb2 = ui->Table2;
    QObject::connect(tb2,SIGNAL(clicked()), this, SLOT(tableclick()));
    //connection table3 to tableclick
    QPushButton *tb3 = ui->Table3;
    QObject::connect(tb3,SIGNAL(clicked()), this, SLOT(tableclick()));
    //connection table4 to tableclick
    QPushButton *tb4 = ui->Table4;
    QObject::connect(tb4,SIGNAL(clicked()), this, SLOT(tableclick()));
    //connection table5 to tableclick
    QPushButton *tb5 = ui->Table5;
    QObject::connect(tb5,SIGNAL(clicked()), this, SLOT(tableclick()));
    //connection table6 to tableclick
    QPushButton *tb6 = ui->Table6;
    QObject::connect(tb6,SIGNAL(clicked()), this, SLOT(tableclick()));
    //connection table7 to tableclick
    QPushButton *tb7 = ui->Table7;
    QObject::connect(tb7,SIGNAL(clicked()), this, SLOT(tableclick()));
    //connection table8 to tableclick
    QPushButton *tb8 = ui->Table8;
    QObject::connect(tb8,SIGNAL(clicked()), this, SLOT(tableclick()));
    //connection seat1 to tableclick
    QPushButton *st1 = ui->Seat1;
    QObject::connect(st1,SIGNAL(clicked()), this, SLOT(tableclick()));
    //connection seat2 to tableclick
    QPushButton *st2 = ui->Seat2;
    QObject::connect(st2,SIGNAL(clicked()), this, SLOT(tableclick()));
    //connection seat3 to tableclick
    QPushButton *st3 = ui->Seat3;
    QObject::connect(st3,SIGNAL(clicked()), this, SLOT(tableclick()));
    //connection seat4 to tableclick
    QPushButton *st4 = ui->Seat4;
    QObject::connect(st4,SIGNAL(clicked()), this, SLOT(tableclick()));
    //connection seat5 to tableclick
    QPushButton *st5 = ui->Seat5;
    QObject::connect(st5,SIGNAL(clicked()), this, SLOT(tableclick()));
    //connection seat6 to tableclick
    QPushButton *st6 = ui->Seat6;
    QObject::connect(st6,SIGNAL(clicked()), this, SLOT(tableclick()));


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::tableclick(){
    QObject* but = sender();
    QString name_table = but->objectName();
    TableClick t;               //opens the window of (add food, etc) for table 1

    t.setWindowTitle(name_table);

    t.setObjectName(name_table);
    qDebug() << "You are in: "+ t.objectName();
    t.setModal(true);
    //t.setStyleSheet("TableClick {background: black;}");
    t.exec();
}

