/********************************************************************************
** Form generated from reading UI file 'designer.ui'
**
** Created: Mon Jul 2 16:59:39 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DESIGNER_H
#define UI_DESIGNER_H

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
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_designer
{
public:
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QComboBox *cmbTest;
    QPushButton *btnEdit;
    QPushButton *btnDelete;
    QPushButton *btnNew;
    QPushButton *btnCreateUser;
    QPushButton *btnExit;

    void setupUi(QWidget *designer)
    {
        if (designer->objectName().isEmpty())
            designer->setObjectName(QString::fromUtf8("designer"));
        designer->resize(534, 277);
        QFont font;
        font.setPointSize(15);
        designer->setFont(font);
        designer->setLayoutDirection(Qt::RightToLeft);
        horizontalLayout = new QHBoxLayout(designer);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        frame = new QFrame(designer);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_2);


        gridLayout->addWidget(frame, 0, 1, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(designer);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label, 0, 1, 1, 1);

        cmbTest = new QComboBox(designer);
        cmbTest->setObjectName(QString::fromUtf8("cmbTest"));

        gridLayout_2->addWidget(cmbTest, 0, 2, 1, 1);


        verticalLayout_2->addLayout(gridLayout_2);

        btnEdit = new QPushButton(designer);
        btnEdit->setObjectName(QString::fromUtf8("btnEdit"));

        verticalLayout_2->addWidget(btnEdit);

        btnDelete = new QPushButton(designer);
        btnDelete->setObjectName(QString::fromUtf8("btnDelete"));

        verticalLayout_2->addWidget(btnDelete);

        btnNew = new QPushButton(designer);
        btnNew->setObjectName(QString::fromUtf8("btnNew"));

        verticalLayout_2->addWidget(btnNew);

        btnCreateUser = new QPushButton(designer);
        btnCreateUser->setObjectName(QString::fromUtf8("btnCreateUser"));

        verticalLayout_2->addWidget(btnCreateUser);

        btnExit = new QPushButton(designer);
        btnExit->setObjectName(QString::fromUtf8("btnExit"));

        verticalLayout_2->addWidget(btnExit);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout);


        retranslateUi(designer);

        QMetaObject::connectSlotsByName(designer);
    } // setupUi

    void retranslateUi(QWidget *designer)
    {
        designer->setWindowTitle(QApplication::translate("designer", "\331\205\330\257\333\214\330\261\333\214\330\252 \330\242\330\262\331\205\331\210\331\206 \331\207\330\247", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("designer", "\331\206\330\261\331\205 \330\247\331\201\330\262\330\247\330\261 \331\205\331\206 !!!!", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("designer", "\330\271\331\206\331\210\330\247\331\206 \330\242\330\262\331\205\331\210\331\206:", 0, QApplication::UnicodeUTF8));
        btnEdit->setText(QApplication::translate("designer", "\331\205\330\264\330\247\331\207\330\257\331\207 / \331\210\333\214\330\261\330\247\333\214\330\264", 0, QApplication::UnicodeUTF8));
        btnDelete->setText(QApplication::translate("designer", "\330\255\330\260\331\201 \330\242\330\262\331\205\331\210\331\206", 0, QApplication::UnicodeUTF8));
        btnNew->setText(QApplication::translate("designer", "\330\242\330\262\331\205\331\210\331\206 \330\254\330\257\333\214\330\257", 0, QApplication::UnicodeUTF8));
        btnCreateUser->setText(QApplication::translate("designer", "\330\252\330\271\330\261\333\214\331\201 \332\251\330\247\330\261\330\250\330\261", 0, QApplication::UnicodeUTF8));
        btnExit->setText(QApplication::translate("designer", "\330\256\330\261\331\210\330\254", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class designer: public Ui_designer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DESIGNER_H
