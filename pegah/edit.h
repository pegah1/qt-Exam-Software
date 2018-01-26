#ifndef EDIT_H
#define EDIT_H

#include <QWidget>
#include <QDialog>
#include "test.h"
#include <string>
#include <QString>

namespace Ui {
    class edit;
}

class edit : public QDialog
{
    Q_OBJECT

    void reload();
    void save();
    bool validate();

    QString toString(int i);
    QString ask();
    void error(char const* reason);

public:
    edit(test& item, QWidget *parent = 0);
    ~edit();

    test& _item;
    int _cur;

private slots:
    void on_btnSave_clicked();

    void on_btnNew_clicked();

    void on_btnNext_clicked();

    void on_btnPrev_clicked();

    void on_btnDelete_clicked();

    void on_btnQuestionPic_clicked();

    void on_btnChoicePic2_clicked();

    void on_btnChoicePic1_clicked();

    void on_btnChoicePic4_clicked();

    void on_btnChoicePic3_clicked();

private:
    Ui::edit *ui;
};

#endif // EDIT_H
