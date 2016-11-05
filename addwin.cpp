#include "addwin.h"
#include "ui_addwin.h"
#include "menu.h"
#include "tables.h"
#include "mainwindow.h"
#include "tableclick.h"
#include <QDebug>





AddWin::AddWin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddWin)
{
    ui->setupUi(this);

    //make buttons bigger
    ui->Beef->setFixedHeight(40);
    ui->Burger->setFixedHeight(40);
    ui->Chicken->setFixedHeight(40);
    ui->Fish->setFixedHeight(40);
    ui->Fries->setFixedHeight(40);
    ui->Ice_Cream->setFixedHeight(40);
    ui->Lemonade->setFixedHeight(40);
    ui->Milkshake->setFixedHeight(40);
    ui->Pepsi->setFixedHeight(40);
    ui->Wings->setFixedHeight(40);


    QPushButton *ck = ui->Chicken;
    QObject::connect(ck, SIGNAL(clicked()), this, SLOT(add()));
    QPushButton *bf = ui->Beef;
    QObject::connect(bf, SIGNAL(clicked()), this, SLOT(add()));
    QPushButton *fh = ui->Fish;
    QObject::connect(fh, SIGNAL(clicked()), this, SLOT(add()));
    QPushButton *pep = ui->Pepsi;
    QObject::connect(pep, SIGNAL(clicked()), this, SLOT(add()));
    QPushButton *lem = ui->Lemonade;
    QObject::connect(lem, SIGNAL(clicked()), this, SLOT(add()));
    QPushButton *ice = ui->Ice_Cream;
    QObject::connect(ice, SIGNAL(clicked()), this, SLOT(add()));
    QPushButton *bu = ui->Burger;
    QObject::connect(bu, SIGNAL(clicked()), this, SLOT(add()));
    QPushButton *fri = ui->Fries;
    QObject::connect(fri, SIGNAL(clicked()), this, SLOT(add()));
    QPushButton *mil = ui->Milkshake;
    QObject::connect(mil, SIGNAL(clicked()), this, SLOT(add()));
    QPushButton *wi = ui->Wings;
    QObject::connect(wi, SIGNAL(clicked()), this, SLOT(add()));
}

AddWin::~AddWin()
{
    delete ui;
}

void AddWin::add(){
    QObject* name = sender();
    //AddWin* b;
    extern int table1_counter;
    extern int table2_counter;
    extern int table3_counter;
    extern int table4_counter;
    extern int table5_counter;
    extern int table6_counter;
    extern int table7_counter;
    extern int table8_counter;
    extern int seat1_counter;
    extern int seat2_counter;
    extern int seat3_counter;
    extern int seat4_counter;
    extern int seat5_counter;
    extern int seat6_counter;


    //qDebug() << name->parent()->objectName();
    //TABLE1
    if ( name->parent()->objectName() == "Table1"){
        extern table Table1;
        Table1.name_product[table1_counter] = name->objectName();
        qDebug() <<"It has been added to Table1: " + Table1.name_product[table1_counter];
        table1_counter++;
    }
    //TABLE2
    if ( name->parent()->objectName() == "Table2"){
        extern table Table2;
        Table2.name_product[table2_counter] = name->objectName();
        qDebug() <<"It has been added to Table2: " + Table2.name_product[table2_counter];
        table2_counter++;
    }
    //TABLE3
    if ( name->parent()->objectName() == "Table3"){
        extern table Table3;
        Table3.name_product[table3_counter] = name->objectName();
        qDebug() <<"It has been added to Table3: " + Table3.name_product[table3_counter];
        table3_counter++;
    }
    //TABLE4
    if ( name->parent()->objectName() == "Table4"){
        extern table Table4;
        Table4.name_product[table4_counter] = name->objectName();
        qDebug() <<"It has been added to Table4: " + Table4.name_product[table4_counter];
        table4_counter++;
    }
    //TABLE5
    if ( name->parent()->objectName() == "Table5"){
        extern table Table5;
        Table5.name_product[table5_counter] = name->objectName();
        qDebug() <<"It has been added to Table5: " + Table5.name_product[table5_counter];
        table5_counter++;
    }
    //TABLE6
    if ( name->parent()->objectName() == "Table6"){
        extern table Table6;
        Table6.name_product[table6_counter] = name->objectName();
        qDebug() <<"It has been added to Table6: " + Table6.name_product[table6_counter];
        table6_counter++;
    }
    //TABLE7
    if ( name->parent()->objectName() == "Table7"){
        extern table Table7;
        Table7.name_product[table7_counter] = name->objectName();
        qDebug() <<"It has been added to Table7: " + Table7.name_product[table7_counter];
        table7_counter++;
    }
    //TABLE8
    if ( name->parent()->objectName() == "Table8"){
        extern table Table8;
        Table8.name_product[table8_counter] = name->objectName();
        qDebug() <<"It has been added to Table8: " + Table8.name_product[table8_counter];
        table8_counter++;
    }
    //SEAT1
    if ( name->parent()->objectName() == "Seat1"){
        extern table Seat1;
        Seat1.name_product[seat1_counter] = name->objectName();
        qDebug() <<"It has been added to Seat1: " + Seat1.name_product[seat1_counter];
        seat1_counter++;
    }
    //SEAT2
    if ( name->parent()->objectName() == "Seat2"){
        extern table Seat2;
        Seat2.name_product[seat2_counter] = name->objectName();
        qDebug() <<"It has been added to Seat2: " + Seat2.name_product[seat2_counter];
        seat2_counter++;
    }
    //SEAT3
    if ( name->parent()->objectName() == "Seat3"){
        extern table Seat3;
        Seat3.name_product[seat3_counter] = name->objectName();
        qDebug() <<"It has been added to Seat3: " + Seat3.name_product[seat3_counter];
        seat3_counter++;
    }
    //SEAT4
    if ( name->parent()->objectName() == "Seat4"){
        extern table Seat4;
        Seat4.name_product[seat4_counter] = name->objectName();
        qDebug() <<"It has been added to Seat4: " + Seat4.name_product[seat4_counter];
        seat4_counter++;
    }
    //SEAT5
    if ( name->parent()->objectName() == "Seat5"){
        extern table Seat5;
        Seat5.name_product[seat5_counter] = name->objectName();
        qDebug() <<"It has been added to Seat5: " + Seat5.name_product[seat5_counter];
        seat5_counter++;
    }
    //SEAT6
    if ( name->parent()->objectName() == "Seat6"){
        extern table Seat6;
        Seat6.name_product[seat6_counter] = name->objectName();
        qDebug() <<"It has been added to Seat6: " + Seat6.name_product[seat6_counter];
        seat6_counter++;
    }

}
//b->parent()->->parent()->objectName()




