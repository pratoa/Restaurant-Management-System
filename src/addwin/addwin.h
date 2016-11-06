#ifndef ADDWIN_H
#define ADDWIN_H

#include <QDialog>

namespace Ui {
class AddWin;
}

class AddWin : public QDialog
{
    Q_OBJECT

public:
    explicit AddWin(QWidget *parent = 0);
    ~AddWin();

private slots:
    void add();

private:
    Ui::AddWin *ui;

};

#endif // ADDWIN_H
