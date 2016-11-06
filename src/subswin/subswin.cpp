#include "subswin.h"
#include "ui_subswin.h"
#include "tableclick.h"
#include "tables.h"
#include <QDebug>
#include <QMessageBox>


SubsWin::SubsWin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SubsWin)
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
    QObject::connect(ck, SIGNAL(clicked()), this, SLOT(subs()));
    QPushButton *bf = ui->Beef;
    QObject::connect(bf, SIGNAL(clicked()), this, SLOT(subs()));
    QPushButton *fh = ui->Fish;
    QObject::connect(fh, SIGNAL(clicked()), this, SLOT(subs()));
    QPushButton *pep = ui->Pepsi;
    QObject::connect(pep, SIGNAL(clicked()), this, SLOT(subs()));
    QPushButton *lem = ui->Lemonade;
    QObject::connect(lem, SIGNAL(clicked()), this, SLOT(subs()));
    QPushButton *ice = ui->Ice_Cream;
    QObject::connect(ice, SIGNAL(clicked()), this, SLOT(subs()));
    QPushButton *bu = ui->Burger;
    QObject::connect(bu, SIGNAL(clicked()), this, SLOT(subs()));
    QPushButton *fri = ui->Fries;
    QObject::connect(fri, SIGNAL(clicked()), this, SLOT(subs()));
    QPushButton *mil = ui->Milkshake;
    QObject::connect(mil, SIGNAL(clicked()), this, SLOT(subs()));
    QPushButton *wi = ui->Wings;
    QObject::connect(wi, SIGNAL(clicked()), this, SLOT(subs()));
}

SubsWin::~SubsWin()
{
    delete ui;
}

void SubsWin::subs(){
    QObject* name = sender();
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

    //TABLE1
    qDebug() << "Let's see: "+name->parent()->objectName();
    if (name->parent()->objectName() == "Table1"){
        extern table Table1;
        int index;

        for (int i = 0; i<14;i++){
            if (Table1.name_product[i] == name->objectName()){
                index = i;
                table1_counter = table1_counter - 1;
                qDebug() << Table1.name_product[i]+ " has been removed from Table1";
            } /*else {
                QMessageBox msgBox;
                msgBox.setText(name->objectName()+" is not in the check.");
                msgBox.exec();
                break;
            } */
        }
        for (int j = index;j<14;j++){
            Table1.name_product[j] = Table1.name_product[j+1];
        }
    }
    //TABLE2
    if (name->parent()->objectName() == "Table2"){
        extern table Table2;
        int index;

        for (int i = 0; i<14;i++){
            if (Table2.name_product[i] == name->objectName()){
                index = i;
                table2_counter = table2_counter - 1;
                qDebug() << Table2.name_product[i]+ " has been removed from Table2";
            } /*else {
                QMessageBox msgBox;
                msgBox.setText(name->objectName()+" is not in the check.");
                msgBox.exec();
                break;
            } */
        }
        for (int j = index;j<14;j++){
            Table2.name_product[j] = Table2.name_product[j+1];
        }
    }
    //TABLE3
    if (name->parent()->objectName() == "Table3"){
        extern table Table3;
        int index;

        for (int i = 0; i<14;i++){
            if (Table3.name_product[i] == name->objectName()){
                index = i;
                table3_counter = table3_counter - 1;
                qDebug() << Table3.name_product[i]+ " has been removed from Table3";
            } /*else {
                QMessageBox msgBox;
                msgBox.setText(name->objectName()+" is not in the check.");
                msgBox.exec();
                break;
            } */
        }
        for (int j = index;j<14;j++){
            Table3.name_product[j] = Table3.name_product[j+1];
        }
    }
    //TABLE4
    if (name->parent()->objectName() == "Table4"){
        extern table Table4;
        int index;

        for (int i = 0; i<14;i++){
            if (Table4.name_product[i] == name->objectName()){
                index = i;
                table4_counter = table4_counter - 1;
                qDebug() << Table4.name_product[i]+ " has been removed from Table4";
            } /*else {
                QMessageBox msgBox;
                msgBox.setText(name->objectName()+" is not in the check.");
                msgBox.exec();
                break;
            } */
        }
        for (int j = index;j<14;j++){
            Table4.name_product[j] = Table4.name_product[j+1];
        }
    }
    //TABLE5
    if (name->parent()->objectName() == "Table5"){
        extern table Table5;
        int index;

        for (int i = 0; i<14;i++){
            if (Table5.name_product[i] == name->objectName()){
                index = i;
                table5_counter = table5_counter - 1;
                qDebug() << Table5.name_product[i]+ " has been removed from Table5";
            } /*else {
                QMessageBox msgBox;
                msgBox.setText(name->objectName()+" is not in the check.");
                msgBox.exec();
                break;
            } */
        }
        for (int j = index;j<14;j++){
            Table5.name_product[j] = Table5.name_product[j+1];
        }
    }
    //TABLE6
    if (name->parent()->objectName() == "Table6"){
        extern table Table6;
        int index;

        for (int i = 0; i<14;i++){
            if (Table6.name_product[i] == name->objectName()){
                index = i;
                table6_counter = table6_counter - 1;
                qDebug() << Table6.name_product[i]+ " has been removed from Table6";
            } /*else {
                QMessageBox msgBox;
                msgBox.setText(name->objectName()+" is not in the check.");
                msgBox.exec();
                break;
            } */
        }
        for (int j = index;j<14;j++){
            Table6.name_product[j] = Table6.name_product[j+1];
        }
    }
    //TABLE7
    if (name->parent()->objectName() == "Table7"){
        extern table Table7;
        int index;

        for (int i = 0; i<14;i++){
            if (Table7.name_product[i] == name->objectName()){
                index = i;
                table7_counter = table7_counter - 1;
                qDebug() << Table7.name_product[i]+ " has been removed from Table7";
            } /*else {
                QMessageBox msgBox;
                msgBox.setText(name->objectName()+" is not in the check.");
                msgBox.exec();
                break;
            } */
        }
        for (int j = index;j<14;j++){
            Table7.name_product[j] = Table7.name_product[j+1];
        }
    }
    //TABLE8
    if (name->parent()->objectName() == "Table8"){
        extern table Table8;
        int index;

        for (int i = 0; i<14;i++){
            if (Table8.name_product[i] == name->objectName()){
                index = i;
                table8_counter = table8_counter - 1;
                qDebug() << Table8.name_product[i]+ " has been removed from Table8";
            } /*else {
                QMessageBox msgBox;
                msgBox.setText(name->objectName()+" is not in the check.");
                msgBox.exec();
                break;
            } */
        }
        for (int j = index;j<14;j++){
            Table8.name_product[j] = Table8.name_product[j+1];
        }
    }
    //SEAT1
    if (name->parent()->objectName() == "Seat1"){
        extern table Seat1;
        int index;

        for (int i = 0; i<14;i++){
            if (Seat1.name_product[i] == name->objectName()){
                index = i;
                seat1_counter = seat1_counter - 1;
                qDebug() << Seat1.name_product[i]+ " has been removed from Seat1";
            } /*else {
                QMessageBox msgBox;
                msgBox.setText(name->objectName()+" is not in the check.");
                msgBox.exec();
                break;
            } */
        }
        for (int j = index;j<14;j++){
            Seat1.name_product[j] = Seat1.name_product[j+1];
        }
    }
    //SEAT2
    if (name->parent()->objectName() == "Seat2"){
        extern table Seat2;
        int index;

        for (int i = 0; i<14;i++){
            if (Seat2.name_product[i] == name->objectName()){
                index = i;
                seat2_counter = seat2_counter - 1;
                qDebug() << Seat2.name_product[i]+ " has been removed from Seat2";
            } /*else {
                QMessageBox msgBox;
                msgBox.setText(name->objectName()+" is not in the check.");
                msgBox.exec();
                break;
            } */
        }
        for (int j = index;j<14;j++){
            Seat2.name_product[j] = Seat2.name_product[j+1];
        }
    }
    //SEAT3
    if (name->parent()->objectName() == "Seat3"){
        extern table Seat3;
        int index;

        for (int i = 0; i<14;i++){
            if (Seat3.name_product[i] == name->objectName()){
                index = i;
                seat3_counter = seat3_counter - 1;
                qDebug() << Seat3.name_product[i]+ " has been removed from Seat3";
            } /*else {
                QMessageBox msgBox;
                msgBox.setText(name->objectName()+" is not in the check.");
                msgBox.exec();
                break;
            } */
        }
        for (int j = index;j<14;j++){
            Seat3.name_product[j] = Seat3.name_product[j+1];
        }
    }
    //SEAT4
    if (name->parent()->objectName() == "Seat4"){
        extern table Seat4;
        int index;

        for (int i = 0; i<14;i++){
            if (Seat4.name_product[i] == name->objectName()){
                index = i;
                seat4_counter = seat4_counter - 1;
                qDebug() << Seat4.name_product[i]+ " has been removed from Seat4";
            } /*else {
                QMessageBox msgBox;
                msgBox.setText(name->objectName()+" is not in the check.");
                msgBox.exec();
                break;
            } */
        }
        for (int j = index;j<14;j++){
            Seat4.name_product[j] = Seat4.name_product[j+1];
        }
    }
    //SEAT5
    if (name->parent()->objectName() == "Seat5"){
        extern table Seat5;
        int index;

        for (int i = 0; i<14;i++){
            if (Seat5.name_product[i] == name->objectName()){
                index = i;
                seat5_counter = seat5_counter - 1;
                qDebug() << Seat5.name_product[i]+ " has been removed from Seat5";
            } /*else {
                QMessageBox msgBox;
                msgBox.setText(name->objectName()+" is not in the check.");
                msgBox.exec();
                break;
            } */
        }
        for (int j = index;j<14;j++){
            Seat5.name_product[j] = Seat5.name_product[j+1];
        }
    }
    //SEAT6
    if (name->parent()->objectName() == "Seat6"){
        extern table Seat6;
        int index;

        for (int i = 0; i<14;i++){
            if (Seat6.name_product[i] == name->objectName()){
                index = i;
                seat6_counter = seat6_counter - 1;
                qDebug() << Seat6.name_product[i]+ " has been removed from Seat6";
            } /*else {
                QMessageBox msgBox;
                msgBox.setText(name->objectName()+" is not in the check.");
                msgBox.exec();
                break;
            } */
        }
        for (int j = index;j<14;j++){
            Seat6.name_product[j] = Seat6.name_product[j+1];
        }
    }


}
