/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created: Mon Jul 2 16:59:39 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *txtUserName;
    QLineEdit *txtPassword;
    QComboBox *cmbRole;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnLogin;
    QPushButton *btnExit;

    void setupUi(QWidget *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->resize(378, 264);
        login->setLayoutDirection(Qt::RightToLeft);
        horizontalLayout = new QHBoxLayout(login);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox = new QGroupBox(login);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setMinimumSize(QSize(0, 0));
        QFont font;
        font.setPointSize(15);
        groupBox->setFont(font);
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        txtUserName = new QLineEdit(groupBox);
        txtUserName->setObjectName(QString::fromUtf8("txtUserName"));

        gridLayout->addWidget(txtUserName, 0, 1, 1, 1);

        txtPassword = new QLineEdit(groupBox);
        txtPassword->setObjectName(QString::fromUtf8("txtPassword"));

        gridLayout->addWidget(txtPassword, 1, 1, 1, 1);

        cmbRole = new QComboBox(groupBox);
        cmbRole->setObjectName(QString::fromUtf8("cmbRole"));

        gridLayout->addWidget(cmbRole, 2, 1, 1, 1);


        verticalLayout_2->addWidget(groupBox);

        frame = new QFrame(login);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setMinimumSize(QSize(0, 45));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        btnLogin = new QPushButton(frame);
        btnLogin->setObjectName(QString::fromUtf8("btnLogin"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btnLogin->sizePolicy().hasHeightForWidth());
        btnLogin->setSizePolicy(sizePolicy2);
        btnLogin->setFont(font);

        horizontalLayout_4->addWidget(btnLogin);

        btnExit = new QPushButton(frame);
        btnExit->setObjectName(QString::fromUtf8("btnExit"));
        sizePolicy2.setHeightForWidth(btnExit->sizePolicy().hasHeightForWidth());
        btnExit->setSizePolicy(sizePolicy2);
        btnExit->setFont(font);

        horizontalLayout_4->addWidget(btnExit);


        verticalLayout_2->addWidget(frame);


        horizontalLayout->addLayout(verticalLayout_2);


        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QWidget *login)
    {
        login->setWindowTitle(QApplication::translate("login", "\331\210\330\261\331\210\330\257 \330\250\331\207 \330\263\333\214\330\263\330\252\331\205 \330\242\330\262\331\205\331\210\331\206 \332\206\331\207\330\247\330\261 \332\257\330\262\333\214\331\206\331\207 \330\247\333\214", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("login", "\331\210\330\261\331\210\330\257", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("login", "\330\247\330\263\331\205 \332\251\330\247\330\261\330\250\330\261\333\214:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("login", "\330\247\330\263\331\205 \330\261\331\205\330\262:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("login", "\331\206\331\202\330\264 \332\251\330\247\330\261\330\250\330\261:", 0, QApplication::UnicodeUTF8));
        txtPassword->setInputMask(QString());
        cmbRole->clear();
        cmbRole->insertItems(0, QStringList()
         << QApplication::translate("login", "\330\267\330\261\330\247\330\255 \330\242\330\262\331\205\331\210\331\206", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("login", "\330\264\330\261\332\251\330\252 \332\251\331\206\331\206\330\257\331\207 \330\257\330\261 \330\242\330\262\331\205\331\210\331\206", 0, QApplication::UnicodeUTF8)
        );
        btnLogin->setText(QApplication::translate("login", "\331\210\330\261\331\210\330\257", 0, QApplication::UnicodeUTF8));
        btnExit->setText(QApplication::translate("login", "\330\247\331\206\330\265\330\261\330\247\331\201", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
