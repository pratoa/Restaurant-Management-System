#ifndef SUBSWIN_H
#define SUBSWIN_H

#include <QDialog>

namespace Ui {
class SubsWin;
}

class SubsWin : public QDialog
{
    Q_OBJECT

public:
    explicit SubsWin(QWidget *parent = 0);
    ~SubsWin();

private slots:
    void subs();

private:
    Ui::SubsWin *ui;
};

#endif // SUBSWIN_H
