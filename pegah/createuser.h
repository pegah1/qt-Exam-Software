#ifndef CREATEUSER_H
#define CREATEUSER_H

#include <QWidget>
#include <QDialog>
#include <QCloseEvent>

namespace Ui {
    class createuser;
}

class createuser : public QDialog
{
    Q_OBJECT

protected:

public:
    explicit createuser(QWidget *parent = 0);
    ~createuser();

private slots:
    void on_btnCancel_clicked();

    void on_btnCreate_clicked();

private:
    Ui::createuser *ui;
};

#endif // CREATEUSER_H
