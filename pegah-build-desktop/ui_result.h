/********************************************************************************
** Form generated from reading UI file 'result.ui'
**
** Created: Wed Sep 13 09:39:33 2017
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESULT_H
#define UI_RESULT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_result
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_4;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *lbName;
    QLabel *label_3;
    QLabel *lbTotalTime;
    QLabel *label_5;
    QLabel *lbTestTime;
    QLabel *label_7;
    QLabel *lbTotalQuestions;
    QLabel *label_9;
    QLabel *lbCorrectAnswers;
    QLabel *label_11;
    QLabel *lbWrongAnswers;
    QLabel *label_18;
    QLabel *lbScore;
    QLabel *label_17;
    QLabel *lbNoAnswers;
    QSpacerItem *horizontalSpacer_3;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnClose;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *result)
    {
        if (result->objectName().isEmpty())
            result->setObjectName(QString::fromUtf8("result"));
        result->resize(320, 363);
        QFont font;
        font.setPointSize(12);
        result->setFont(font);
        verticalLayout = new QVBoxLayout(result);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(result);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 1, 1, 1);

        lbName = new QLabel(result);
        lbName->setObjectName(QString::fromUtf8("lbName"));

        gridLayout->addWidget(lbName, 0, 0, 1, 1);

        label_3 = new QLabel(result);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 1, 1, 1);

        lbTotalTime = new QLabel(result);
        lbTotalTime->setObjectName(QString::fromUtf8("lbTotalTime"));

        gridLayout->addWidget(lbTotalTime, 1, 0, 1, 1);

        label_5 = new QLabel(result);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 2, 1, 1, 1);

        lbTestTime = new QLabel(result);
        lbTestTime->setObjectName(QString::fromUtf8("lbTestTime"));

        gridLayout->addWidget(lbTestTime, 2, 0, 1, 1);

        label_7 = new QLabel(result);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 3, 1, 1, 1);

        lbTotalQuestions = new QLabel(result);
        lbTotalQuestions->setObjectName(QString::fromUtf8("lbTotalQuestions"));

        gridLayout->addWidget(lbTotalQuestions, 3, 0, 1, 1);

        label_9 = new QLabel(result);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 4, 1, 1, 1);

        lbCorrectAnswers = new QLabel(result);
        lbCorrectAnswers->setObjectName(QString::fromUtf8("lbCorrectAnswers"));

        gridLayout->addWidget(lbCorrectAnswers, 4, 0, 1, 1);

        label_11 = new QLabel(result);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout->addWidget(label_11, 5, 1, 1, 1);

        lbWrongAnswers = new QLabel(result);
        lbWrongAnswers->setObjectName(QString::fromUtf8("lbWrongAnswers"));

        gridLayout->addWidget(lbWrongAnswers, 5, 0, 1, 1);

        label_18 = new QLabel(result);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout->addWidget(label_18, 7, 1, 1, 1);

        lbScore = new QLabel(result);
        lbScore->setObjectName(QString::fromUtf8("lbScore"));

        gridLayout->addWidget(lbScore, 7, 0, 1, 1);

        label_17 = new QLabel(result);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout->addWidget(label_17, 6, 1, 1, 1);

        lbNoAnswers = new QLabel(result);
        lbNoAnswers->setObjectName(QString::fromUtf8("lbNoAnswers"));

        gridLayout->addWidget(lbNoAnswers, 6, 0, 1, 1);


        horizontalLayout_3->addLayout(gridLayout);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_3);

        frame = new QFrame(result);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        btnClose = new QPushButton(frame);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));

        horizontalLayout->addWidget(btnClose);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addWidget(frame);


        retranslateUi(result);

        QMetaObject::connectSlotsByName(result);
    } // setupUi

    void retranslateUi(QWidget *result)
    {
        result->setWindowTitle(QApplication::translate("result", "\331\206\330\252\333\214\330\254\331\207 \330\242\330\262\331\205\331\210\331\206", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("result", "\330\264\330\261\332\251\330\252 \332\251\331\206\331\206\330\257\331\207: ", 0, QApplication::UnicodeUTF8));
        lbName->setText(QApplication::translate("result", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("result", "\330\262\331\205\330\247\331\206 \332\251\331\204: ", 0, QApplication::UnicodeUTF8));
        lbTotalTime->setText(QApplication::translate("result", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("result", "\330\262\331\205\330\247\331\206 \330\247\331\206\330\254\330\247\331\205 \330\242\330\262\331\205\331\210\331\206: ", 0, QApplication::UnicodeUTF8));
        lbTestTime->setText(QApplication::translate("result", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("result", "\330\252\330\271\330\257\330\247\330\257 \332\251\331\204 \330\263\331\210\330\247\331\204\330\247\330\252: ", 0, QApplication::UnicodeUTF8));
        lbTotalQuestions->setText(QApplication::translate("result", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("result", "\330\252\330\271\330\257\330\247\330\257 \331\276\330\247\330\263\330\256 \331\207\330\247\333\214 \330\257\330\261\330\263\330\252: ", 0, QApplication::UnicodeUTF8));
        lbCorrectAnswers->setText(QApplication::translate("result", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("result", "\330\252\330\271\330\257\330\247\330\257 \331\276\330\247\330\263\330\256 \331\207\330\247\333\214 \331\206\330\247\330\257\330\261\330\263\330\252: ", 0, QApplication::UnicodeUTF8));
        lbWrongAnswers->setText(QApplication::translate("result", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("result", "\330\247\331\205\330\252\333\214\330\247\330\262 \332\251\331\204: ", 0, QApplication::UnicodeUTF8));
        lbScore->setText(QApplication::translate("result", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("result", "\330\252\330\271\330\257\330\247\330\257 \330\263\331\210\330\247\331\204\330\247\330\252 \330\250\333\214 \331\276\330\247\330\263\330\256: ", 0, QApplication::UnicodeUTF8));
        lbNoAnswers->setText(QApplication::translate("result", "TextLabel", 0, QApplication::UnicodeUTF8));
        btnClose->setText(QApplication::translate("result", "\330\250\330\263\330\252\331\206 \331\276\331\206\330\254\330\261\331\207", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class result: public Ui_result {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULT_H
