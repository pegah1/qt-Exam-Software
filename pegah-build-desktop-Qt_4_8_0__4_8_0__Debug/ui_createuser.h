/********************************************************************************
** Form generated from reading UI file 'createuser.ui'
**
** Created: Mon Jul 2 16:59:39 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEUSER_H
#define UI_CREATEUSER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_createuser
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label;
    QLineEdit *txtUserName;
    QLineEdit *txtPassword;
    QLineEdit *txtRetypePassword;
    QLabel *label_4;
    QComboBox *cmbRole;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnCreate;
    QPushButton *btnCancel;

    void setupUi(QWidget *createuser)
    {
        if (createuser->objectName().isEmpty())
            createuser->setObjectName(QString::fromUtf8("createuser"));
        createuser->resize(400, 232);
        QFont font;
        font.setPointSize(15);
        createuser->setFont(font);
        createuser->setLayoutDirection(Qt::RightToLeft);
        horizontalLayout = new QHBoxLayout(createuser);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(createuser);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(createuser);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label = new QLabel(createuser);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        txtUserName = new QLineEdit(createuser);
        txtUserName->setObjectName(QString::fromUtf8("txtUserName"));

        gridLayout->addWidget(txtUserName, 0, 1, 1, 1);

        txtPassword = new QLineEdit(createuser);
        txtPassword->setObjectName(QString::fromUtf8("txtPassword"));

        gridLayout->addWidget(txtPassword, 1, 1, 1, 1);

        txtRetypePassword = new QLineEdit(createuser);
        txtRetypePassword->setObjectName(QString::fromUtf8("txtRetypePassword"));

        gridLayout->addWidget(txtRetypePassword, 2, 1, 1, 1);

        label_4 = new QLabel(createuser);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        cmbRole = new QComboBox(createuser);
        cmbRole->setObjectName(QString::fromUtf8("cmbRole"));

        gridLayout->addWidget(cmbRole, 3, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        frame = new QFrame(createuser);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        btnCreate = new QPushButton(frame);
        btnCreate->setObjectName(QString::fromUtf8("btnCreate"));

        horizontalLayout_2->addWidget(btnCreate);

        btnCancel = new QPushButton(frame);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));

        horizontalLayout_2->addWidget(btnCancel);


        verticalLayout->addWidget(frame);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(createuser);

        QMetaObject::connectSlotsByName(createuser);
    } // setupUi

    void retranslateUi(QWidget *createuser)
    {
        createuser->setWindowTitle(QApplication::translate("createuser", "\330\252\330\271\330\261\333\214\331\201 \332\251\330\247\330\261\330\250\330\261", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("createuser", "\330\261\331\205\330\262 \330\271\330\250\331\210\330\261:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("createuser", "\331\210\330\261\331\210\330\257 \331\205\330\254\330\257\330\257 \330\261\331\205\330\262:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("createuser", "\331\206\330\247\331\205 \332\251\330\247\330\261\330\250\330\261\333\214:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("createuser", "\330\255\331\202\331\210\331\202 \330\257\330\263\330\252\330\261\330\263\333\214:", 0, QApplication::UnicodeUTF8));
        cmbRole->clear();
        cmbRole->insertItems(0, QStringList()
         << QApplication::translate("createuser", "\330\264\330\261\332\251\330\252 \332\251\331\206\331\206\330\257\331\207", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("createuser", "\330\267\330\261\330\247\330\255", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("createuser", "\331\205\330\257\333\214\330\261 \330\263\333\214\330\263\330\252\331\205", 0, QApplication::UnicodeUTF8)
        );
        btnCreate->setText(QApplication::translate("createuser", "\330\263\330\247\330\256\330\252\331\206", 0, QApplication::UnicodeUTF8));
        btnCancel->setText(QApplication::translate("createuser", "\331\204\330\272\331\210", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class createuser: public Ui_createuser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEUSER_H
