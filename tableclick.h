#ifndef TABLECLICK_H
#define TABLECLICK_H

#include <QDialog>
#include <QString>

namespace Ui {
class TableClick;
}

class TableClick : public QDialog
{
    Q_OBJECT

public:
    explicit TableClick(QWidget *parent = 0);
    ~TableClick();

private slots:
    void on_ReturnButton_clicked();

    void on_Add_clicked();

    void on_Substract_clicked();

    void on_PrintButton_clicked();


    void on_Refresh_clicked();

    void on_ClearTable_clicked();

    void on_TableClick_windowTitleChanged(const QString &title);

private:
    Ui::TableClick *ui;
    TableClick *tabs;
};

#endif // TABLECLICK_H
