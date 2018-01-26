#ifndef DESIGNER_H
#define DESIGNER_H

#include <QWidget>
#include <QDialog>

namespace Ui {
    class designer;
}

class designer : public QDialog
{
    Q_OBJECT

    void update_buttons();

public:
    explicit designer(QWidget *parent = 0);
    ~designer();

private slots:
    void on_btnExit_clicked();

    void on_btnCreateUser_clicked();

    void on_btnNew_clicked();

    void on_btnDelete_clicked();

    void on_btnEdit_clicked();

private:
    Ui::designer *ui;
};

#endif // DESIGNER_H
