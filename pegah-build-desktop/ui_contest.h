/********************************************************************************
** Form generated from reading UI file 'contest.ui'
**
** Created: Wed Sep 13 09:39:33 2017
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTEST_H
#define UI_CONTEST_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGraphicsView>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_contest
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *label_7;
    QLineEdit *txtName;
    QLabel *label_8;
    QLabel *label_9;
    QComboBox *cmbContest;
    QPushButton *btnStart;
    QLabel *label_10;
    QPushButton *lbTime;
    QGroupBox *groupQuestion;
    QGridLayout *gridLayout;
    QLabel *lbQuestion;
    QGraphicsView *gQuestion;
    QRadioButton *radChoice1;
    QRadioButton *radChoice2;
    QGraphicsView *gChoice1;
    QGraphicsView *gChoice2;
    QRadioButton *radChoice3;
    QRadioButton *radChoice4;
    QGraphicsView *gChoice3;
    QGraphicsView *gChoice4;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btnNext;
    QLabel *label_3;
    QLabel *lbCurrent;
    QLabel *label_4;
    QLabel *lbTotal;
    QSpacerItem *horizontalSpacer_2;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnView;
    QPushButton *btnExit;

    void setupUi(QWidget *contest)
    {
        if (contest->objectName().isEmpty())
            contest->setObjectName(QString::fromUtf8("contest"));
        contest->resize(467, 454);
        QFont font;
        font.setPointSize(12);
        contest->setFont(font);
        contest->setLayoutDirection(Qt::RightToLeft);
        verticalLayout = new QVBoxLayout(contest);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(contest);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 0, 0, 1, 1);

        txtName = new QLineEdit(groupBox);
        txtName->setObjectName(QString::fromUtf8("txtName"));

        gridLayout_2->addWidget(txtName, 0, 2, 1, 1);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_2->addWidget(label_8, 0, 3, 1, 1);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_2->addWidget(label_9, 1, 0, 1, 1);

        cmbContest = new QComboBox(groupBox);
        cmbContest->setObjectName(QString::fromUtf8("cmbContest"));

        gridLayout_2->addWidget(cmbContest, 1, 2, 1, 1);

        btnStart = new QPushButton(groupBox);
        btnStart->setObjectName(QString::fromUtf8("btnStart"));

        gridLayout_2->addWidget(btnStart, 1, 4, 1, 1);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_2->addWidget(label_10, 1, 3, 1, 1);

        lbTime = new QPushButton(groupBox);
        lbTime->setObjectName(QString::fromUtf8("lbTime"));
        lbTime->setCheckable(false);
        lbTime->setDefault(false);
        lbTime->setFlat(true);

        gridLayout_2->addWidget(lbTime, 0, 4, 1, 1);


        verticalLayout->addWidget(groupBox);

        groupQuestion = new QGroupBox(contest);
        groupQuestion->setObjectName(QString::fromUtf8("groupQuestion"));
        gridLayout = new QGridLayout(groupQuestion);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lbQuestion = new QLabel(groupQuestion);
        lbQuestion->setObjectName(QString::fromUtf8("lbQuestion"));

        gridLayout->addWidget(lbQuestion, 0, 1, 1, 1);

        gQuestion = new QGraphicsView(groupQuestion);
        gQuestion->setObjectName(QString::fromUtf8("gQuestion"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(gQuestion->sizePolicy().hasHeightForWidth());
        gQuestion->setSizePolicy(sizePolicy1);
        gQuestion->setMinimumSize(QSize(0, 40));
        gQuestion->setMaximumSize(QSize(16777215, 800));

        gridLayout->addWidget(gQuestion, 0, 2, 1, 1);

        radChoice1 = new QRadioButton(groupQuestion);
        radChoice1->setObjectName(QString::fromUtf8("radChoice1"));
        radChoice1->setEnabled(false);

        gridLayout->addWidget(radChoice1, 2, 1, 1, 1);

        radChoice2 = new QRadioButton(groupQuestion);
        radChoice2->setObjectName(QString::fromUtf8("radChoice2"));
        radChoice2->setEnabled(false);

        gridLayout->addWidget(radChoice2, 2, 2, 1, 1);

        gChoice1 = new QGraphicsView(groupQuestion);
        gChoice1->setObjectName(QString::fromUtf8("gChoice1"));
        sizePolicy1.setHeightForWidth(gChoice1->sizePolicy().hasHeightForWidth());
        gChoice1->setSizePolicy(sizePolicy1);
        gChoice1->setMinimumSize(QSize(0, 40));
        gChoice1->setMaximumSize(QSize(16777215, 800));

        gridLayout->addWidget(gChoice1, 3, 1, 1, 1);

        gChoice2 = new QGraphicsView(groupQuestion);
        gChoice2->setObjectName(QString::fromUtf8("gChoice2"));
        sizePolicy1.setHeightForWidth(gChoice2->sizePolicy().hasHeightForWidth());
        gChoice2->setSizePolicy(sizePolicy1);
        gChoice2->setMinimumSize(QSize(0, 40));
        gChoice2->setMaximumSize(QSize(16777215, 800));

        gridLayout->addWidget(gChoice2, 3, 2, 1, 1);

        radChoice3 = new QRadioButton(groupQuestion);
        radChoice3->setObjectName(QString::fromUtf8("radChoice3"));
        radChoice3->setEnabled(false);

        gridLayout->addWidget(radChoice3, 4, 1, 1, 1);

        radChoice4 = new QRadioButton(groupQuestion);
        radChoice4->setObjectName(QString::fromUtf8("radChoice4"));
        radChoice4->setEnabled(false);

        gridLayout->addWidget(radChoice4, 4, 2, 1, 1);

        gChoice3 = new QGraphicsView(groupQuestion);
        gChoice3->setObjectName(QString::fromUtf8("gChoice3"));
        sizePolicy1.setHeightForWidth(gChoice3->sizePolicy().hasHeightForWidth());
        gChoice3->setSizePolicy(sizePolicy1);
        gChoice3->setMinimumSize(QSize(0, 40));
        gChoice3->setMaximumSize(QSize(16777215, 800));

        gridLayout->addWidget(gChoice3, 5, 1, 1, 1);

        gChoice4 = new QGraphicsView(groupQuestion);
        gChoice4->setObjectName(QString::fromUtf8("gChoice4"));
        sizePolicy1.setHeightForWidth(gChoice4->sizePolicy().hasHeightForWidth());
        gChoice4->setSizePolicy(sizePolicy1);
        gChoice4->setMinimumSize(QSize(0, 40));
        gChoice4->setMaximumSize(QSize(16777215, 800));

        gridLayout->addWidget(gChoice4, 5, 2, 1, 1);


        verticalLayout->addWidget(groupQuestion);

        frame = new QFrame(contest);
        frame->setObjectName(QString::fromUtf8("frame"));
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, -1, -1, 0);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        btnNext = new QPushButton(frame);
        btnNext->setObjectName(QString::fromUtf8("btnNext"));
        btnNext->setEnabled(false);

        horizontalLayout_2->addWidget(btnNext);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        lbCurrent = new QLabel(frame);
        lbCurrent->setObjectName(QString::fromUtf8("lbCurrent"));

        horizontalLayout_2->addWidget(lbCurrent);

        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_2->addWidget(label_4);

        lbTotal = new QLabel(frame);
        lbTotal->setObjectName(QString::fromUtf8("lbTotal"));

        horizontalLayout_2->addWidget(lbTotal);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(frame);

        frame_2 = new QFrame(contest);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        sizePolicy.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy);
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, -1, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnView = new QPushButton(frame_2);
        btnView->setObjectName(QString::fromUtf8("btnView"));
        btnView->setEnabled(false);

        horizontalLayout->addWidget(btnView);

        btnExit = new QPushButton(frame_2);
        btnExit->setObjectName(QString::fromUtf8("btnExit"));

        horizontalLayout->addWidget(btnExit);


        verticalLayout->addWidget(frame_2);


        retranslateUi(contest);

        QMetaObject::connectSlotsByName(contest);
    } // setupUi

    void retranslateUi(QWidget *contest)
    {
        contest->setWindowTitle(QApplication::translate("contest", "\330\264\330\261\332\251\330\252 \330\257\330\261 \330\242\330\262\331\205\331\210\331\206", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("contest", "\331\205\330\264\330\256\330\265\330\247\330\252 \330\242\330\262\331\205\331\210\331\206", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("contest", "\331\206\330\247\331\205 \330\264\330\261\332\251\330\252 \332\251\331\206\331\206\330\257\331\207: ", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("contest", "\330\262\331\205\330\247\331\206: ", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("contest", "\330\271\331\206\331\210\330\247\331\206 \330\242\330\262\331\205\331\210\331\206: ", 0, QApplication::UnicodeUTF8));
        btnStart->setText(QApplication::translate("contest", "\330\264\330\261\331\210\330\271 \330\242\330\262\331\205\331\210\331\206", 0, QApplication::UnicodeUTF8));
        label_10->setText(QString());
        lbTime->setText(QApplication::translate("contest", "00:00 / 00:00", 0, QApplication::UnicodeUTF8));
        groupQuestion->setTitle(QApplication::translate("contest", "\330\263\331\210\330\247\331\204 \330\264\331\205\330\247\330\261\331\207", 0, QApplication::UnicodeUTF8));
        lbQuestion->setText(QString());
        radChoice1->setText(QString());
        radChoice2->setText(QString());
        radChoice3->setText(QString());
        radChoice4->setText(QString());
        btnNext->setText(QApplication::translate("contest", "\330\263\331\210\330\247\331\204 \330\250\330\271\330\257\333\214", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("contest", "\330\263\331\210\330\247\331\204", 0, QApplication::UnicodeUTF8));
        lbCurrent->setText(QApplication::translate("contest", "0", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("contest", "\330\247\330\262", 0, QApplication::UnicodeUTF8));
        lbTotal->setText(QApplication::translate("contest", "0", 0, QApplication::UnicodeUTF8));
        btnView->setText(QApplication::translate("contest", "\331\205\330\264\330\247\331\207\330\257\331\207 \331\206\330\252\333\214\330\254\331\207", 0, QApplication::UnicodeUTF8));
        btnExit->setText(QApplication::translate("contest", "\330\256\330\261\331\210\330\254", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class contest: public Ui_contest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTEST_H
