#include "tableclick.h"
#include "ui_tableclick.h"
#include "addwin.h"
#include "tables.h"
#include "subswin.h"
#include "mainwindow.h"
#include "menu.h"
#include <QApplication>
#include <QLabel>
#include <QHBoxLayout>
#include <QString>
#include <QMessageBox>


TableClick::TableClick(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TableClick)
{
    ui->setupUi(this);

    //make buttons bigger
    ui->Add->setFixedHeight(50);
    ui->ClearTable->setFixedHeight(50);
    ui->PrintButton->setFixedHeight(50);
    ui->Substract->setFixedHeight(50);
    ui->Refresh->setFixedHeight(50);
    ui->ReturnButton->setFixedHeight(50);
}

TableClick::~TableClick()
{
    delete ui;
}

void TableClick::on_ReturnButton_clicked(){
    close();
}


void TableClick::on_Add_clicked(){
    close();
    AddWin addwindow;
    //QObject* oja = this;
    addwindow.setWindowTitle("Menu");
    addwindow.setObjectName(this->objectName());

    addwindow.setModal(true);
    addwindow.exec();
}


void TableClick::on_PrintButton_clicked()
{
    QMessageBox n;
    //QLabel *l = new QLabel;
    /*QHBoxLayout *lay = new QHBoxLayout;
    lay->addWidget(l);
    n.setLayout(lay); */

    n.setWindowTitle(this->objectName()+" Check");
    n.setObjectName(this->objectName());
    if (n.objectName() == "Table1"){
        extern table Table1;
        n.setText("The check for "+n.objectName()+" is: $"+QString::number(Table1.total_price));

    }
    if (n.objectName() == "Table2"){
        extern table Table2;
        n.setText("The check for "+n.objectName()+" is: $"+QString::number(Table2.total_price));

    }
    if (n.objectName() == "Table3"){
        extern table Table3;
        n.setText("The check for "+n.objectName()+" is: $"+QString::number(Table3.total_price));

    }
    if (n.objectName() == "Table4"){
        extern table Table4;
        n.setText("The check for "+n.objectName()+" is: $"+QString::number(Table4.total_price));

    }
    if (n.objectName() == "Table5"){
        extern table Table5;
        n.setText("The check for "+n.objectName()+" is: $"+QString::number(Table5.total_price));

    }
    if (n.objectName() == "Table6"){
        extern table Table6;
        n.setText("The check for "+n.objectName()+" is: $"+QString::number(Table6.total_price));

    }
    if (n.objectName() == "Table7"){
        extern table Table7;
        n.setText("The check for "+n.objectName()+" is: $"+QString::number(Table7.total_price));

    }
    if (n.objectName() == "Table8"){
        extern table Table8;
        n.setText("The check for "+n.objectName()+" is: $"+QString::number(Table8.total_price));

    }
    if (n.objectName() == "Seat1"){
        extern table Seat1;
        n.setText("The check for "+n.objectName()+" is: $"+QString::number(Seat1.total_price));

    }
    if (n.objectName() == "Seat2"){
        extern table Seat2;
        n.setText("The check for "+n.objectName()+" is: $"+QString::number(Seat2.total_price));

    }
    if (n.objectName() == "Seat3"){
        extern table Seat3;
        n.setText("The check for "+n.objectName()+" is: $"+QString::number(Seat3.total_price));

    }
    if (n.objectName() == "Seat4"){
        extern table Seat4;
        n.setText("The check for "+n.objectName()+" is: $"+QString::number(Seat4.total_price));

    }
    if (n.objectName() == "Seat5"){
        extern table Seat5;
        n.setText("The check for "+n.objectName()+" is: $"+QString::number(Seat5.total_price));

    }
    if (n.objectName() == "Seat6"){
        extern table Seat6;
        n.setText("The check for "+n.objectName()+" is: $"+QString::number(Seat6.total_price));

    }

    n.exec();
}


void TableClick::on_Substract_clicked()
{
    close();
    SubsWin subrt;
    subrt.setWindowTitle("Menu");
    subrt.setObjectName(this->objectName());
    subrt.setModal(true);
    subrt.exec();
}

void TableClick::on_Refresh_clicked()
{
    extern table Table1;
    extern table Table2;
    extern table Table3;
    extern table Table4;
    extern table Table5;
    extern table Table6;
    extern table Table7;
    extern table Table8;
    extern table Seat1;
    extern table Seat2;
    extern table Seat3;
    extern table Seat4;
    extern table Seat5;
    extern table Seat6;


    extern menu products[10];

    Table1.total_price = 0;
    Table2.total_price = 0;
    Table3.total_price = 0;
    Table4.total_price = 0;
    Table5.total_price = 0;
    Table6.total_price = 0;
    Table7.total_price = 0;
    Table8.total_price = 0;
    Seat1.total_price = 0;
    Seat2.total_price = 0;
    Seat3.total_price = 0;
    Seat4.total_price = 0;
    Seat5.total_price = 0;
    Seat6.total_price = 0;



    if (this->objectName() == "Table1"){
        for (int i=0;i<14;i++){
            for (int j=0;j<10;j++){
                if (Table1.name_product[i] == products[j].name){
                    Table1.total_price = Table1.total_price + products[j].price;
                }
            }
        }
        ui->label0->setText(Table1.name_product[0]);
        ui->label1->setText(Table1.name_product[1]);
        ui->label2->setText(Table1.name_product[2]);
        ui->label3->setText(Table1.name_product[3]);
        ui->label4->setText(Table1.name_product[4]);
        ui->label5->setText(Table1.name_product[5]);
        ui->label6->setText(Table1.name_product[6]);
        ui->label7->setText(Table1.name_product[7]);
        ui->label8->setText(Table1.name_product[8]);
        ui->label9->setText(Table1.name_product[9]);
        ui->label10->setText(Table1.name_product[10]);
        ui->label11->setText(Table1.name_product[11]);
        ui->label12->setText(Table1.name_product[12]);
        ui->label13->setText(Table1.name_product[13]);
        ui->Price->setText("Total Price: $"+QString::number(Table1.total_price));
    } else if (this->objectName() ==  "Table2"){
        for (int i=0;i<14;i++){
            for (int j=0;j<10;j++){
                if (Table2.name_product[i] == products[j].name){
                    Table2.total_price = Table2.total_price + products[j].price;
                }
            }
        }
        ui->label0->setText(Table2.name_product[0]);
        ui->label1->setText(Table2.name_product[1]);
        ui->label2->setText(Table2.name_product[2]);
        ui->label3->setText(Table2.name_product[3]);
        ui->label4->setText(Table2.name_product[4]);
        ui->label5->setText(Table2.name_product[5]);
        ui->label6->setText(Table2.name_product[6]);
        ui->label7->setText(Table2.name_product[7]);
        ui->label8->setText(Table2.name_product[8]);
        ui->label9->setText(Table2.name_product[9]);
        ui->label10->setText(Table2.name_product[10]);
        ui->label11->setText(Table2.name_product[11]);
        ui->label12->setText(Table2.name_product[12]);
        ui->label13->setText(Table2.name_product[13]);
        ui->Price->setText("Total Price: $"+QString::number(Table2.total_price));
    } else if (this->objectName() ==  "Table3"){
            for (int i=0;i<14;i++){
                for (int j=0;j<10;j++){
                    if (Table3.name_product[i] == products[j].name){
                        Table3.total_price = Table3.total_price + products[j].price;
                    }
                }
            }
            ui->label0->setText(Table3.name_product[0]);
            ui->label1->setText(Table3.name_product[1]);
            ui->label2->setText(Table3.name_product[2]);
            ui->label3->setText(Table3.name_product[3]);
            ui->label4->setText(Table3.name_product[4]);
            ui->label5->setText(Table3.name_product[5]);
            ui->label6->setText(Table3.name_product[6]);
            ui->label7->setText(Table3.name_product[7]);
            ui->label8->setText(Table3.name_product[8]);
            ui->label9->setText(Table3.name_product[9]);
            ui->label10->setText(Table3.name_product[10]);
            ui->label11->setText(Table3.name_product[11]);
            ui->label12->setText(Table3.name_product[12]);
            ui->label13->setText(Table3.name_product[13]);
            ui->Price->setText("Total Price: $"+QString::number(Table3.total_price));
    } else if (this->objectName() ==  "Table4"){
        for (int i=0;i<14;i++){
            for (int j=0;j<10;j++){
                if (Table4.name_product[i] == products[j].name){
                    Table4.total_price = Table4.total_price + products[j].price;
                }
            }
        }
        ui->label0->setText(Table4.name_product[0]);
        ui->label1->setText(Table4.name_product[1]);
        ui->label2->setText(Table4.name_product[2]);
        ui->label3->setText(Table4.name_product[3]);
        ui->label4->setText(Table4.name_product[4]);
        ui->label5->setText(Table4.name_product[5]);
        ui->label6->setText(Table4.name_product[6]);
        ui->label7->setText(Table4.name_product[7]);
        ui->label8->setText(Table4.name_product[8]);
        ui->label9->setText(Table4.name_product[9]);
        ui->label10->setText(Table4.name_product[10]);
        ui->label11->setText(Table4.name_product[11]);
        ui->label12->setText(Table4.name_product[12]);
        ui->label13->setText(Table4.name_product[13]);
        ui->Price->setText("Total Price: $"+QString::number(Table4.total_price));
    } else if (this->objectName() ==  "Table5"){
        for (int i=0;i<14;i++){
            for (int j=0;j<10;j++){
                if (Table5.name_product[i] == products[j].name){
                    Table5.total_price = Table5.total_price + products[j].price;
                }
            }
        }
        ui->label0->setText(Table5.name_product[0]);
        ui->label1->setText(Table5.name_product[1]);
        ui->label2->setText(Table5.name_product[2]);
        ui->label3->setText(Table5.name_product[3]);
        ui->label4->setText(Table5.name_product[4]);
        ui->label5->setText(Table5.name_product[5]);
        ui->label6->setText(Table5.name_product[6]);
        ui->label7->setText(Table5.name_product[7]);
        ui->label8->setText(Table5.name_product[8]);
        ui->label9->setText(Table5.name_product[9]);
        ui->label10->setText(Table5.name_product[10]);
        ui->label11->setText(Table5.name_product[11]);
        ui->label12->setText(Table5.name_product[12]);
        ui->label13->setText(Table5.name_product[13]);
        ui->Price->setText("Total Price: $"+QString::number(Table5.total_price));
    } else if (this->objectName() ==  "Table6"){
        for (int i=0;i<14;i++){
            for (int j=0;j<10;j++){
                if (Table6.name_product[i] == products[j].name){
                    Table6.total_price = Table6.total_price + products[j].price;
                }
            }
        }
        ui->label0->setText(Table6.name_product[0]);
        ui->label1->setText(Table6.name_product[1]);
        ui->label2->setText(Table6.name_product[2]);
        ui->label3->setText(Table6.name_product[3]);
        ui->label4->setText(Table6.name_product[4]);
        ui->label5->setText(Table6.name_product[5]);
        ui->label6->setText(Table6.name_product[6]);
        ui->label7->setText(Table6.name_product[7]);
        ui->label8->setText(Table6.name_product[8]);
        ui->label9->setText(Table6.name_product[9]);
        ui->label10->setText(Table6.name_product[10]);
        ui->label11->setText(Table6.name_product[11]);
        ui->label12->setText(Table6.name_product[12]);
        ui->label13->setText(Table6.name_product[13]);
        ui->Price->setText("Total Price: $"+QString::number(Table6.total_price));
    } else if (this->objectName() ==  "Table7"){
        for (int i=0;i<14;i++){
            for (int j=0;j<10;j++){
                if (Table7.name_product[i] == products[j].name){
                    Table7.total_price  = Table7.total_price + products[j].price;
                }
            }
        }
        ui->label0->setText(Table7.name_product[0]);
        ui->label1->setText(Table7.name_product[1]);
        ui->label2->setText(Table7.name_product[2]);
        ui->label3->setText(Table7.name_product[3]);
        ui->label4->setText(Table7.name_product[4]);
        ui->label5->setText(Table7.name_product[5]);
        ui->label6->setText(Table7.name_product[6]);
        ui->label7->setText(Table7.name_product[7]);
        ui->label8->setText(Table7.name_product[8]);
        ui->label9->setText(Table7.name_product[9]);
        ui->label10->setText(Table7.name_product[10]);
        ui->label11->setText(Table7.name_product[11]);
        ui->label12->setText(Table7.name_product[12]);
        ui->label13->setText(Table7.name_product[13]);
        ui->Price->setText("Total Price: $"+QString::number(Table7.total_price));
    } else if (this->objectName() ==  "Table8"){
        for (int i=0;i<14;i++){
            for (int j=0;j<10;j++){
                if (Table8.name_product[i] == products[j].name){
                    Table8.total_price = Table8.total_price + products[j].price;
                }
            }
        }
        ui->label0->setText(Table8.name_product[0]);
        ui->label1->setText(Table8.name_product[1]);
        ui->label2->setText(Table8.name_product[2]);
        ui->label3->setText(Table8.name_product[3]);
        ui->label4->setText(Table8.name_product[4]);
        ui->label5->setText(Table8.name_product[5]);
        ui->label6->setText(Table8.name_product[6]);
        ui->label7->setText(Table8.name_product[7]);
        ui->label8->setText(Table8.name_product[8]);
        ui->label9->setText(Table8.name_product[9]);
        ui->label10->setText(Table8.name_product[10]);
        ui->label11->setText(Table8.name_product[11]);
        ui->label12->setText(Table8.name_product[12]);
        ui->label13->setText(Table8.name_product[13]);
        ui->Price->setText("Total Price: $"+QString::number(Table8.total_price));
    } else if (this->objectName() ==  "Seat1"){
        for (int i=0;i<14;i++){
            for (int j=0;j<10;j++){
                if (Seat1.name_product[i] == products[j].name){
                    Seat1.total_price = Seat1.total_price + products[j].price;
                }
            }
        }
        ui->label0->setText(Seat1.name_product[0]);
        ui->label1->setText(Seat1.name_product[1]);
        ui->label2->setText(Seat1.name_product[2]);
        ui->label3->setText(Seat1.name_product[3]);
        ui->label4->setText(Seat1.name_product[4]);
        ui->label5->setText(Seat1.name_product[5]);
        ui->label6->setText(Seat1.name_product[6]);
        ui->label7->setText(Seat1.name_product[7]);
        ui->label8->setText(Seat1.name_product[8]);
        ui->label9->setText(Seat1.name_product[9]);
        ui->label10->setText(Seat1.name_product[10]);
        ui->label11->setText(Seat1.name_product[11]);
        ui->label12->setText(Seat1.name_product[12]);
        ui->label13->setText(Seat1.name_product[13]);
        ui->Price->setText("Total Price: $"+QString::number(Seat1.total_price));
    } else if (this->objectName() ==  "Seat2"){
        for (int i=0;i<14;i++){
            for (int j=0;j<10;j++){
                if (Seat2.name_product[i] == products[j].name){
                    Seat2.total_price = Seat2.total_price + products[j].price;
                }
            }
        }
        ui->label0->setText(Seat2.name_product[0]);
        ui->label1->setText(Seat2.name_product[1]);
        ui->label2->setText(Seat2.name_product[2]);
        ui->label3->setText(Seat2.name_product[3]);
        ui->label4->setText(Seat2.name_product[4]);
        ui->label5->setText(Seat2.name_product[5]);
        ui->label6->setText(Seat2.name_product[6]);
        ui->label7->setText(Seat2.name_product[7]);
        ui->label8->setText(Seat2.name_product[8]);
        ui->label9->setText(Seat2.name_product[9]);
        ui->label10->setText(Seat2.name_product[10]);
        ui->label11->setText(Seat2.name_product[11]);
        ui->label12->setText(Seat2.name_product[12]);
        ui->label13->setText(Seat2.name_product[13]);
        ui->Price->setText("Total Price: $"+QString::number(Seat2.total_price));
    } else if (this->objectName() ==  "Seat3"){
        for (int i=0;i<14;i++){
            for (int j=0;j<10;j++){
                if (Seat3.name_product[i] == products[j].name){
                    Seat3.total_price = Seat3.total_price + products[j].price;
                }
            }
        }
        ui->label0->setText(Seat3.name_product[0]);
        ui->label1->setText(Seat3.name_product[1]);
        ui->label2->setText(Seat3.name_product[2]);
        ui->label3->setText(Seat3.name_product[3]);
        ui->label4->setText(Seat3.name_product[4]);
        ui->label5->setText(Seat3.name_product[5]);
        ui->label6->setText(Seat3.name_product[6]);
        ui->label7->setText(Seat3.name_product[7]);
        ui->label8->setText(Seat3.name_product[8]);
        ui->label9->setText(Seat3.name_product[9]);
        ui->label10->setText(Seat3.name_product[10]);
        ui->label11->setText(Seat3.name_product[11]);
        ui->label12->setText(Seat3.name_product[12]);
        ui->label13->setText(Seat3.name_product[13]);
        ui->Price->setText("Total Price: $"+QString::number(Seat3.total_price));
    } else if (this->objectName() ==  "Seat4"){
        for (int i=0;i<14;i++){
            for (int j=0;j<10;j++){
                if (Seat4.name_product[i] == products[j].name){
                    Seat4.total_price = Seat4.total_price + products[j].price;
                }
            }
        }
        ui->label0->setText(Seat4.name_product[0]);
        ui->label1->setText(Seat4.name_product[1]);
        ui->label2->setText(Seat4.name_product[2]);
        ui->label3->setText(Seat4.name_product[3]);
        ui->label4->setText(Seat4.name_product[4]);
        ui->label5->setText(Seat4.name_product[5]);
        ui->label6->setText(Seat4.name_product[6]);
        ui->label7->setText(Seat4.name_product[7]);
        ui->label8->setText(Seat4.name_product[8]);
        ui->label9->setText(Seat4.name_product[9]);
        ui->label10->setText(Seat4.name_product[10]);
        ui->label11->setText(Seat4.name_product[11]);
        ui->label12->setText(Seat4.name_product[12]);
        ui->label13->setText(Seat4.name_product[13]);
        ui->Price->setText("Total Price: $"+QString::number(Seat4.total_price));
    } else if (this->objectName() ==  "Seat5"){
        for (int i=0;i<14;i++){
            for (int j=0;j<10;j++){
                if (Seat5.name_product[i] == products[j].name){
                    Seat5.total_price = Seat5.total_price + products[j].price;
                }
            }
        }
        ui->label0->setText(Seat5.name_product[0]);
        ui->label1->setText(Seat5.name_product[1]);
        ui->label2->setText(Seat5.name_product[2]);
        ui->label3->setText(Seat5.name_product[3]);
        ui->label4->setText(Seat5.name_product[4]);
        ui->label5->setText(Seat5.name_product[5]);
        ui->label6->setText(Seat5.name_product[6]);
        ui->label7->setText(Seat5.name_product[7]);
        ui->label8->setText(Seat5.name_product[8]);
        ui->label9->setText(Seat5.name_product[9]);
        ui->label10->setText(Seat5.name_product[10]);
        ui->label11->setText(Seat5.name_product[11]);
        ui->label12->setText(Seat5.name_product[12]);
        ui->label13->setText(Seat5.name_product[13]);
        ui->Price->setText("Total Price: $"+QString::number(Seat5.total_price));
    } else if (this->objectName() ==  "Seat6"){
        for (int i=0;i<14;i++){
            for (int j=0;j<10;j++){
                if (Seat6.name_product[i] == products[j].name){
                    Seat6.total_price = Seat6.total_price + products[j].price;
                }
            }
        }
        ui->label0->setText(Seat6.name_product[0]);
        ui->label1->setText(Seat6.name_product[1]);
        ui->label2->setText(Seat6.name_product[2]);
        ui->label3->setText(Seat6.name_product[3]);
        ui->label4->setText(Seat6.name_product[4]);
        ui->label5->setText(Seat6.name_product[5]);
        ui->label6->setText(Seat6.name_product[6]);
        ui->label7->setText(Seat6.name_product[7]);
        ui->label8->setText(Seat6.name_product[8]);
        ui->label9->setText(Seat6.name_product[9]);
        ui->label10->setText(Seat6.name_product[10]);
        ui->label11->setText(Seat6.name_product[11]);
        ui->label12->setText(Seat6.name_product[12]);
        ui->label13->setText(Seat6.name_product[13]);
        ui->Price->setText("Total Price: $"+QString::number(Seat6.total_price));
    }
}

void TableClick::on_ClearTable_clicked()
{
    //TABLE1
    if (this->objectName() == "Table1"){
        extern table Table1;
        for (int i = 0; i<14;i++){
            Table1.name_product[i] = " ";
            Table1.total_price = 0;
            extern int table1_counter;
            table1_counter = 0;
        }
    }
    //TABLE2
    if (this->objectName() == "Table2"){
        extern table Table2;
        for (int i = 0; i<14;i++){
            Table2.name_product[i] = " ";
            Table2.total_price = 0;
            extern int table2_counter;
            table2_counter = 0;
        }
    }
    //TABLE3
    if (this->objectName() == "Table3"){
        extern table Table3;
        for (int i = 0; i<14;i++){
            Table3.name_product[i] = " ";
            Table3.total_price = 0;
            extern int table3_counter;
            table3_counter = 0;
        }
    }
    //TABLE4
    if (this->objectName() == "Table4"){
        extern table Table4;
        for (int i = 0; i<14;i++){
            Table4.name_product[i] = " ";
            Table4.total_price = 0;
            extern int table4_counter;
            table4_counter = 0;
        }
    }
    //TABLE5
    if (this->objectName() == "Table5"){
        extern table Table5;
        for (int i = 0; i<14;i++){
            Table5.name_product[i] = " ";
            Table5.total_price = 0;
            extern int table5_counter;
            table5_counter = 0;
        }
    }
    //TABLE6
    if (this->objectName() == "Table6"){
        extern table Table6;
        for (int i = 0; i<14;i++){
            Table6.name_product[i] = " ";
            Table6.total_price = 0;
            extern int table6_counter;
            table6_counter = 0;
        }
    }
    //TABLE7
    if (this->objectName() == "Table7"){
        extern table Table7;
        for (int i = 0; i<14;i++){
            Table7.name_product[i] = " ";
            Table7.total_price = 0;
            extern int table7_counter;
            table7_counter = 0;
        }
    }
    //TABLE8
    if (this->objectName() == "Table8"){
        extern table Table8;
        for (int i = 0; i<14;i++){
            Table8.name_product[i] = " ";
            Table8.total_price = 0;
            extern int table8_counter;
            table8_counter = 0;
        }
    }
    //SEAT1
    if (this->objectName() == "Seat1"){
        extern table Seat1;
        for (int i = 0; i<14;i++){
            Seat1.name_product[i] = " ";
            Seat1.total_price = 0;
            extern int seat1_counter;
            seat1_counter = 0;
        }
    }
    //SEAT2
    if (this->objectName() == "Seat2"){
        extern table Seat2;
        for (int i = 0; i<14;i++){
            Seat2.name_product[i] = " ";
            Seat2.total_price = 0;
            extern int seat2_counter;
            seat2_counter = 0;
        }
    }
    //SEAT3
    if (this->objectName() == "Seat3"){
        extern table Seat3;
        for (int i = 0; i<14;i++){
            Seat3.name_product[i] = " ";
            Seat3.total_price = 0;
            extern int seat3_counter;
            seat3_counter = 0;
        }
    }
    //SEAT4
    if (this->objectName() == "Seat4"){
        extern table Seat4;
        for (int i = 0; i<14;i++){
            Seat4.name_product[i] = " ";
            Seat4.total_price = 0;
            extern int seat4_counter;
            seat4_counter = 0;
        }
    }
    //SEAT5
    if (this->objectName() == "Seat5"){
        extern table Seat5;
        for (int i = 0; i<14;i++){
            Seat5.name_product[i] = " ";
            Seat5.total_price = 0;
            extern int seat5_counter;
            seat5_counter = 0;
        }
    }
    //SEAT6
    if (this->objectName() == "Seat6"){
        extern table Seat6;
        for (int i = 0; i<14;i++){
            Seat6.name_product[i] = " ";
            Seat6.total_price = 0;
            extern int seat6_counter;
            seat6_counter = 0;
        }
    }
}

void TableClick::on_TableClick_windowTitleChanged(const QString &title)
{
    extern table Table1;
    extern table Table2;
    extern table Table3;
    extern table Table4;
    extern table Table5;
    extern table Table6;
    extern table Table7;
    extern table Table8;
    extern table Seat1;
    extern table Seat2;
    extern table Seat3;
    extern table Seat4;
    extern table Seat5;
    extern table Seat6;


    extern menu products[10];

    Table1.total_price = 0;
    Table2.total_price = 0;
    Table3.total_price = 0;
    Table4.total_price = 0;
    Table5.total_price = 0;
    Table6.total_price = 0;
    Table7.total_price = 0;
    Table8.total_price = 0;
    Seat1.total_price = 0;
    Seat2.total_price = 0;
    Seat3.total_price = 0;
    Seat4.total_price = 0;
    Seat5.total_price = 0;
    Seat6.total_price = 0;

    if (title == "Table1"){
        for (int i=0;i<14;i++){
            for (int j=0;j<10;j++){
                if (Table1.name_product[i] == products[j].name){
                    Table1.total_price = Table1.total_price + products[j].price;
                }
            }
        }
        ui->label0->setText(Table1.name_product[0]);
        ui->label1->setText(Table1.name_product[1]);
        ui->label2->setText(Table1.name_product[2]);
        ui->label3->setText(Table1.name_product[3]);
        ui->label4->setText(Table1.name_product[4]);
        ui->label5->setText(Table1.name_product[5]);
        ui->label6->setText(Table1.name_product[6]);
        ui->label7->setText(Table1.name_product[7]);
        ui->label8->setText(Table1.name_product[8]);
        ui->label9->setText(Table1.name_product[9]);
        ui->label10->setText(Table1.name_product[10]);
        ui->label11->setText(Table1.name_product[11]);
        ui->label12->setText(Table1.name_product[12]);
        ui->label13->setText(Table1.name_product[13]);
        ui->Price->setText("Total Price: $"+QString::number(Table1.total_price));
    } else if (title ==  "Table2"){
        for (int i=0;i<14;i++){
            for (int j=0;j<10;j++){
                if (Table2.name_product[i] == products[j].name){
                    Table2.total_price = Table2.total_price + products[j].price;
                }
            }
        }
        ui->label0->setText(Table2.name_product[0]);
        ui->label1->setText(Table2.name_product[1]);
        ui->label2->setText(Table2.name_product[2]);
        ui->label3->setText(Table2.name_product[3]);
        ui->label4->setText(Table2.name_product[4]);
        ui->label5->setText(Table2.name_product[5]);
        ui->label6->setText(Table2.name_product[6]);
        ui->label7->setText(Table2.name_product[7]);
        ui->label8->setText(Table2.name_product[8]);
        ui->label9->setText(Table2.name_product[9]);
        ui->label10->setText(Table2.name_product[10]);
        ui->label11->setText(Table2.name_product[11]);
        ui->label12->setText(Table2.name_product[12]);
        ui->label13->setText(Table2.name_product[13]);
        ui->Price->setText("Total Price: $"+QString::number(Table2.total_price));
    } else if (title ==  "Table3"){
            for (int i=0;i<14;i++){
                for (int j=0;j<10;j++){
                    if (Table3.name_product[i] == products[j].name){
                        Table3.total_price = Table3.total_price + products[j].price;
                    }
                }
            }
            ui->label0->setText(Table3.name_product[0]);
            ui->label1->setText(Table3.name_product[1]);
            ui->label2->setText(Table3.name_product[2]);
            ui->label3->setText(Table3.name_product[3]);
            ui->label4->setText(Table3.name_product[4]);
            ui->label5->setText(Table3.name_product[5]);
            ui->label6->setText(Table3.name_product[6]);
            ui->label7->setText(Table3.name_product[7]);
            ui->label8->setText(Table3.name_product[8]);
            ui->label9->setText(Table3.name_product[9]);
            ui->label10->setText(Table3.name_product[10]);
            ui->label11->setText(Table3.name_product[11]);
            ui->label12->setText(Table3.name_product[12]);
            ui->label13->setText(Table3.name_product[13]);
            ui->Price->setText("Total Price: $"+QString::number(Table3.total_price));
    } else if (title ==  "Table4"){
        for (int i=0;i<14;i++){
            for (int j=0;j<10;j++){
                if (Table4.name_product[i] == products[j].name){
                    Table4.total_price = Table4.total_price + products[j].price;
                }
            }
        }
        ui->label0->setText(Table4.name_product[0]);
        ui->label1->setText(Table4.name_product[1]);
        ui->label2->setText(Table4.name_product[2]);
        ui->label3->setText(Table4.name_product[3]);
        ui->label4->setText(Table4.name_product[4]);
        ui->label5->setText(Table4.name_product[5]);
        ui->label6->setText(Table4.name_product[6]);
        ui->label7->setText(Table4.name_product[7]);
        ui->label8->setText(Table4.name_product[8]);
        ui->label9->setText(Table4.name_product[9]);
        ui->label10->setText(Table4.name_product[10]);
        ui->label11->setText(Table4.name_product[11]);
        ui->label12->setText(Table4.name_product[12]);
        ui->label13->setText(Table4.name_product[13]);
        ui->Price->setText("Total Price: $"+QString::number(Table4.total_price));
    } else if (title ==  "Table5"){
        for (int i=0;i<14;i++){
            for (int j=0;j<10;j++){
                if (Table5.name_product[i] == products[j].name){
                    Table5.total_price = Table5.total_price + products[j].price;
                }
            }
        }
        ui->label0->setText(Table5.name_product[0]);
        ui->label1->setText(Table5.name_product[1]);
        ui->label2->setText(Table5.name_product[2]);
        ui->label3->setText(Table5.name_product[3]);
        ui->label4->setText(Table5.name_product[4]);
        ui->label5->setText(Table5.name_product[5]);
        ui->label6->setText(Table5.name_product[6]);
        ui->label7->setText(Table5.name_product[7]);
        ui->label8->setText(Table5.name_product[8]);
        ui->label9->setText(Table5.name_product[9]);
        ui->label10->setText(Table5.name_product[10]);
        ui->label11->setText(Table5.name_product[11]);
        ui->label12->setText(Table5.name_product[12]);
        ui->label13->setText(Table5.name_product[13]);
        ui->Price->setText("Total Price: $"+QString::number(Table5.total_price));
    } else if (title ==  "Table6"){
        for (int i=0;i<14;i++){
            for (int j=0;j<10;j++){
                if (Table6.name_product[i] == products[j].name){
                    Table6.total_price = Table6.total_price + products[j].price;
                }
            }
        }
        ui->label0->setText(Table6.name_product[0]);
        ui->label1->setText(Table6.name_product[1]);
        ui->label2->setText(Table6.name_product[2]);
        ui->label3->setText(Table6.name_product[3]);
        ui->label4->setText(Table6.name_product[4]);
        ui->label5->setText(Table6.name_product[5]);
        ui->label6->setText(Table6.name_product[6]);
        ui->label7->setText(Table6.name_product[7]);
        ui->label8->setText(Table6.name_product[8]);
        ui->label9->setText(Table6.name_product[9]);
        ui->label10->setText(Table6.name_product[10]);
        ui->label11->setText(Table6.name_product[11]);
        ui->label12->setText(Table6.name_product[12]);
        ui->label13->setText(Table6.name_product[13]);
        ui->Price->setText("Total Price: $"+QString::number(Table6.total_price));
    } else if (title ==  "Table7"){
        for (int i=0;i<14;i++){
            for (int j=0;j<10;j++){
                if (Table7.name_product[i] == products[j].name){
                    Table7.total_price  = Table7.total_price + products[j].price;
                }
            }
        }
        ui->label0->setText(Table7.name_product[0]);
        ui->label1->setText(Table7.name_product[1]);
        ui->label2->setText(Table7.name_product[2]);
        ui->label3->setText(Table7.name_product[3]);
        ui->label4->setText(Table7.name_product[4]);
        ui->label5->setText(Table7.name_product[5]);
        ui->label6->setText(Table7.name_product[6]);
        ui->label7->setText(Table7.name_product[7]);
        ui->label8->setText(Table7.name_product[8]);
        ui->label9->setText(Table7.name_product[9]);
        ui->label10->setText(Table7.name_product[10]);
        ui->label11->setText(Table7.name_product[11]);
        ui->label12->setText(Table7.name_product[12]);
        ui->label13->setText(Table7.name_product[13]);
        ui->Price->setText("Total Price: $"+QString::number(Table7.total_price));
    } else if (title ==  "Table8"){
        for (int i=0;i<14;i++){
            for (int j=0;j<10;j++){
                if (Table8.name_product[i] == products[j].name){
                    Table8.total_price = Table8.total_price + products[j].price;
                }
            }
        }
        ui->label0->setText(Table8.name_product[0]);
        ui->label1->setText(Table8.name_product[1]);
        ui->label2->setText(Table8.name_product[2]);
        ui->label3->setText(Table8.name_product[3]);
        ui->label4->setText(Table8.name_product[4]);
        ui->label5->setText(Table8.name_product[5]);
        ui->label6->setText(Table8.name_product[6]);
        ui->label7->setText(Table8.name_product[7]);
        ui->label8->setText(Table8.name_product[8]);
        ui->label9->setText(Table8.name_product[9]);
        ui->label10->setText(Table8.name_product[10]);
        ui->label11->setText(Table8.name_product[11]);
        ui->label12->setText(Table8.name_product[12]);
        ui->label13->setText(Table8.name_product[13]);
        ui->Price->setText("Total Price: $"+QString::number(Table8.total_price));
    } else if (title ==  "Seat1"){
        for (int i=0;i<14;i++){
            for (int j=0;j<10;j++){
                if (Seat1.name_product[i] == products[j].name){
                    Seat1.total_price = Seat1.total_price + products[j].price;
                }
            }
        }
        ui->label0->setText(Seat1.name_product[0]);
        ui->label1->setText(Seat1.name_product[1]);
        ui->label2->setText(Seat1.name_product[2]);
        ui->label3->setText(Seat1.name_product[3]);
        ui->label4->setText(Seat1.name_product[4]);
        ui->label5->setText(Seat1.name_product[5]);
        ui->label6->setText(Seat1.name_product[6]);
        ui->label7->setText(Seat1.name_product[7]);
        ui->label8->setText(Seat1.name_product[8]);
        ui->label9->setText(Seat1.name_product[9]);
        ui->label10->setText(Seat1.name_product[10]);
        ui->label11->setText(Seat1.name_product[11]);
        ui->label12->setText(Seat1.name_product[12]);
        ui->label13->setText(Seat1.name_product[13]);
        ui->Price->setText("Total Price: $"+QString::number(Seat1.total_price));
    } else if (title ==  "Seat2"){
        for (int i=0;i<14;i++){
            for (int j=0;j<10;j++){
                if (Seat2.name_product[i] == products[j].name){
                    Seat2.total_price = Seat2.total_price + products[j].price;
                }
            }
        }
        ui->label0->setText(Seat2.name_product[0]);
        ui->label1->setText(Seat2.name_product[1]);
        ui->label2->setText(Seat2.name_product[2]);
        ui->label3->setText(Seat2.name_product[3]);
        ui->label4->setText(Seat2.name_product[4]);
        ui->label5->setText(Seat2.name_product[5]);
        ui->label6->setText(Seat2.name_product[6]);
        ui->label7->setText(Seat2.name_product[7]);
        ui->label8->setText(Seat2.name_product[8]);
        ui->label9->setText(Seat2.name_product[9]);
        ui->label10->setText(Seat2.name_product[10]);
        ui->label11->setText(Seat2.name_product[11]);
        ui->label12->setText(Seat2.name_product[12]);
        ui->label13->setText(Seat2.name_product[13]);
        ui->Price->setText("Total Price: $"+QString::number(Seat2.total_price));
    } else if (title ==  "Seat3"){
        for (int i=0;i<14;i++){
            for (int j=0;j<10;j++){
                if (Seat3.name_product[i] == products[j].name){
                    Seat3.total_price = Seat3.total_price + products[j].price;
                }
            }
        }
        ui->label0->setText(Seat3.name_product[0]);
        ui->label1->setText(Seat3.name_product[1]);
        ui->label2->setText(Seat3.name_product[2]);
        ui->label3->setText(Seat3.name_product[3]);
        ui->label4->setText(Seat3.name_product[4]);
        ui->label5->setText(Seat3.name_product[5]);
        ui->label6->setText(Seat3.name_product[6]);
        ui->label7->setText(Seat3.name_product[7]);
        ui->label8->setText(Seat3.name_product[8]);
        ui->label9->setText(Seat3.name_product[9]);
        ui->label10->setText(Seat3.name_product[10]);
        ui->label11->setText(Seat3.name_product[11]);
        ui->label12->setText(Seat3.name_product[12]);
        ui->label13->setText(Seat3.name_product[13]);
        ui->Price->setText("Total Price: $"+QString::number(Seat3.total_price));
    } else if (title ==  "Seat4"){
        for (int i=0;i<14;i++){
            for (int j=0;j<10;j++){
                if (Seat4.name_product[i] == products[j].name){
                    Seat4.total_price = Seat4.total_price + products[j].price;
                }
            }
        }
        ui->label0->setText(Seat4.name_product[0]);
        ui->label1->setText(Seat4.name_product[1]);
        ui->label2->setText(Seat4.name_product[2]);
        ui->label3->setText(Seat4.name_product[3]);
        ui->label4->setText(Seat4.name_product[4]);
        ui->label5->setText(Seat4.name_product[5]);
        ui->label6->setText(Seat4.name_product[6]);
        ui->label7->setText(Seat4.name_product[7]);
        ui->label8->setText(Seat4.name_product[8]);
        ui->label9->setText(Seat4.name_product[9]);
        ui->label10->setText(Seat4.name_product[10]);
        ui->label11->setText(Seat4.name_product[11]);
        ui->label12->setText(Seat4.name_product[12]);
        ui->label13->setText(Seat4.name_product[13]);
        ui->Price->setText("Total Price: $"+QString::number(Seat4.total_price));
    } else if (title ==  "Seat5"){
        for (int i=0;i<14;i++){
            for (int j=0;j<10;j++){
                if (Seat5.name_product[i] == products[j].name){
                    Seat5.total_price = Seat5.total_price + products[j].price;
                }
            }
        }
        ui->label0->setText(Seat5.name_product[0]);
        ui->label1->setText(Seat5.name_product[1]);
        ui->label2->setText(Seat5.name_product[2]);
        ui->label3->setText(Seat5.name_product[3]);
        ui->label4->setText(Seat5.name_product[4]);
        ui->label5->setText(Seat5.name_product[5]);
        ui->label6->setText(Seat5.name_product[6]);
        ui->label7->setText(Seat5.name_product[7]);
        ui->label8->setText(Seat5.name_product[8]);
        ui->label9->setText(Seat5.name_product[9]);
        ui->label10->setText(Seat5.name_product[10]);
        ui->label11->setText(Seat5.name_product[11]);
        ui->label12->setText(Seat5.name_product[12]);
        ui->label13->setText(Seat5.name_product[13]);
        ui->Price->setText("Total Price: $"+QString::number(Seat5.total_price));
    } else if (title ==  "Seat6"){
        for (int i=0;i<14;i++){
            for (int j=0;j<10;j++){
                if (Seat6.name_product[i] == products[j].name){
                    Seat6.total_price = Seat6.total_price + products[j].price;
                }
            }
        }
        ui->label0->setText(Seat6.name_product[0]);
        ui->label1->setText(Seat6.name_product[1]);
        ui->label2->setText(Seat6.name_product[2]);
        ui->label3->setText(Seat6.name_product[3]);
        ui->label4->setText(Seat6.name_product[4]);
        ui->label5->setText(Seat6.name_product[5]);
        ui->label6->setText(Seat6.name_product[6]);
        ui->label7->setText(Seat6.name_product[7]);
        ui->label8->setText(Seat6.name_product[8]);
        ui->label9->setText(Seat6.name_product[9]);
        ui->label10->setText(Seat6.name_product[10]);
        ui->label11->setText(Seat6.name_product[11]);
        ui->label12->setText(Seat6.name_product[12]);
        ui->label13->setText(Seat6.name_product[13]);
        ui->Price->setText("Total Price: $"+QString::number(Seat6.total_price));
    }
}
