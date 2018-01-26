/********************************************************************************
** Form generated from reading UI file 'edit.ui'
**
** Created: Fri Jul 6 21:27:16 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDIT_H
#define UI_EDIT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_edit
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *txtName;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QSpinBox *spinDuration;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QGroupBox *gpQuestion;
    QVBoxLayout *verticalLayout_3;
    QFrame *frame_3;
    QGridLayout *gridLayout;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_2;
    QLabel *label_6;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *txtQuestionPic;
    QPushButton *btnQuestionPic;
    QTextEdit *txtQuestionText;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_4;
    QLabel *label_10;
    QLabel *label_11;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *txtChoicePic2;
    QPushButton *btnChoicePic2;
    QTextEdit *txtChoiceText2;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_3;
    QLabel *label_8;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *txtChoicePic1;
    QPushButton *btnChoicePic1;
    QTextEdit *txtChoiceText1;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_6;
    QLabel *label_14;
    QLabel *label_15;
    QHBoxLayout *horizontalLayout_9;
    QLineEdit *txtChoicePic4;
    QPushButton *btnChoicePic4;
    QTextEdit *txtChoiceText4;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout_5;
    QLabel *label_12;
    QLabel *label_13;
    QHBoxLayout *horizontalLayout_8;
    QLineEdit *txtChoicePic3;
    QPushButton *btnChoicePic3;
    QTextEdit *txtChoiceText3;
    QFrame *frame_7;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLabel *lbQuestion;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_16;
    QRadioButton *radChoice1;
    QRadioButton *radChoice2;
    QRadioButton *radChoice3;
    QRadioButton *radChoice4;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer_4;
    QFrame *frame_5;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_12;
    QPushButton *btnNext;
    QLabel *label_19;
    QLabel *lbQuestionFrom;
    QLabel *label_17;
    QLabel *lbQuestionTo;
    QPushButton *btnPrev;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_3;
    QFrame *frame_6;
    QVBoxLayout *verticalLayout_6;
    QPushButton *btnNew;
    QPushButton *btnDelete;
    QPushButton *btnSave;

    void setupUi(QWidget *edit)
    {
        if (edit->objectName().isEmpty())
            edit->setObjectName(QString::fromUtf8("edit"));
        edit->resize(664, 707);
        QFont font;
        font.setPointSize(11);
        edit->setFont(font);
        edit->setLayoutDirection(Qt::RightToLeft);
        horizontalLayout = new QHBoxLayout(edit);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(edit);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(groupBox);
#ifndef Q_OS_MAC
        verticalLayout_2->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        verticalLayout_2->setContentsMargins(9, 9, 9, 9);
#endif
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        txtName = new QLineEdit(groupBox);
        txtName->setObjectName(QString::fromUtf8("txtName"));

        horizontalLayout_2->addWidget(txtName);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        spinDuration = new QSpinBox(groupBox);
        spinDuration->setObjectName(QString::fromUtf8("spinDuration"));
        spinDuration->setMinimumSize(QSize(70, 0));
        spinDuration->setMinimum(1);
        spinDuration->setMaximum(120);

        horizontalLayout_3->addWidget(spinDuration);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_3);


        verticalLayout->addWidget(groupBox);

        gpQuestion = new QGroupBox(edit);
        gpQuestion->setObjectName(QString::fromUtf8("gpQuestion"));
        verticalLayout_3 = new QVBoxLayout(gpQuestion);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, 0, -1, 0);
        frame_3 = new QFrame(gpQuestion);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_3);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox_3 = new QGroupBox(frame_3);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_2 = new QGridLayout(groupBox_3);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(-1, 0, -1, 0);
        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 0, 0, 1, 1);

        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 1, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        txtQuestionPic = new QLineEdit(groupBox_3);
        txtQuestionPic->setObjectName(QString::fromUtf8("txtQuestionPic"));

        horizontalLayout_5->addWidget(txtQuestionPic);

        btnQuestionPic = new QPushButton(groupBox_3);
        btnQuestionPic->setObjectName(QString::fromUtf8("btnQuestionPic"));

        horizontalLayout_5->addWidget(btnQuestionPic);


        gridLayout_2->addLayout(horizontalLayout_5, 1, 1, 1, 1);

        txtQuestionText = new QTextEdit(groupBox_3);
        txtQuestionText->setObjectName(QString::fromUtf8("txtQuestionText"));

        gridLayout_2->addWidget(txtQuestionText, 0, 1, 1, 1);


        gridLayout->addWidget(groupBox_3, 0, 1, 1, 1);

        groupBox_4 = new QGroupBox(frame_3);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout_4 = new QGridLayout(groupBox_4);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(-1, 0, -1, 0);
        label_10 = new QLabel(groupBox_4);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_4->addWidget(label_10, 0, 1, 1, 1);

        label_11 = new QLabel(groupBox_4);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_4->addWidget(label_11, 1, 1, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        txtChoicePic2 = new QLineEdit(groupBox_4);
        txtChoicePic2->setObjectName(QString::fromUtf8("txtChoicePic2"));

        horizontalLayout_7->addWidget(txtChoicePic2);

        btnChoicePic2 = new QPushButton(groupBox_4);
        btnChoicePic2->setObjectName(QString::fromUtf8("btnChoicePic2"));

        horizontalLayout_7->addWidget(btnChoicePic2);


        gridLayout_4->addLayout(horizontalLayout_7, 1, 2, 1, 1);

        txtChoiceText2 = new QTextEdit(groupBox_4);
        txtChoiceText2->setObjectName(QString::fromUtf8("txtChoiceText2"));

        gridLayout_4->addWidget(txtChoiceText2, 0, 2, 1, 1);


        gridLayout->addWidget(groupBox_4, 1, 1, 1, 1);

        groupBox_5 = new QGroupBox(frame_3);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        gridLayout_3 = new QGridLayout(groupBox_5);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(-1, 0, -1, 0);
        label_8 = new QLabel(groupBox_5);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_3->addWidget(label_8, 0, 1, 1, 1);

        label_9 = new QLabel(groupBox_5);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_3->addWidget(label_9, 1, 1, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        txtChoicePic1 = new QLineEdit(groupBox_5);
        txtChoicePic1->setObjectName(QString::fromUtf8("txtChoicePic1"));

        horizontalLayout_6->addWidget(txtChoicePic1);

        btnChoicePic1 = new QPushButton(groupBox_5);
        btnChoicePic1->setObjectName(QString::fromUtf8("btnChoicePic1"));

        horizontalLayout_6->addWidget(btnChoicePic1);


        gridLayout_3->addLayout(horizontalLayout_6, 1, 2, 1, 1);

        txtChoiceText1 = new QTextEdit(groupBox_5);
        txtChoiceText1->setObjectName(QString::fromUtf8("txtChoiceText1"));

        gridLayout_3->addWidget(txtChoiceText1, 0, 2, 1, 1);


        gridLayout->addWidget(groupBox_5, 1, 0, 1, 1);

        groupBox_6 = new QGroupBox(frame_3);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        gridLayout_6 = new QGridLayout(groupBox_6);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(-1, 0, -1, 0);
        label_14 = new QLabel(groupBox_6);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_6->addWidget(label_14, 0, 0, 1, 1);

        label_15 = new QLabel(groupBox_6);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_6->addWidget(label_15, 1, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        txtChoicePic4 = new QLineEdit(groupBox_6);
        txtChoicePic4->setObjectName(QString::fromUtf8("txtChoicePic4"));

        horizontalLayout_9->addWidget(txtChoicePic4);

        btnChoicePic4 = new QPushButton(groupBox_6);
        btnChoicePic4->setObjectName(QString::fromUtf8("btnChoicePic4"));

        horizontalLayout_9->addWidget(btnChoicePic4);


        gridLayout_6->addLayout(horizontalLayout_9, 1, 1, 1, 1);

        txtChoiceText4 = new QTextEdit(groupBox_6);
        txtChoiceText4->setObjectName(QString::fromUtf8("txtChoiceText4"));

        gridLayout_6->addWidget(txtChoiceText4, 0, 1, 1, 1);


        gridLayout->addWidget(groupBox_6, 2, 1, 1, 1);

        groupBox_7 = new QGroupBox(frame_3);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        gridLayout_5 = new QGridLayout(groupBox_7);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(-1, 0, -1, 0);
        label_12 = new QLabel(groupBox_7);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_5->addWidget(label_12, 0, 0, 1, 1);

        label_13 = new QLabel(groupBox_7);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_5->addWidget(label_13, 1, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        txtChoicePic3 = new QLineEdit(groupBox_7);
        txtChoicePic3->setObjectName(QString::fromUtf8("txtChoicePic3"));

        horizontalLayout_8->addWidget(txtChoicePic3);

        btnChoicePic3 = new QPushButton(groupBox_7);
        btnChoicePic3->setObjectName(QString::fromUtf8("btnChoicePic3"));

        horizontalLayout_8->addWidget(btnChoicePic3);


        gridLayout_5->addLayout(horizontalLayout_8, 1, 1, 1, 1);

        txtChoiceText3 = new QTextEdit(groupBox_7);
        txtChoiceText3->setObjectName(QString::fromUtf8("txtChoiceText3"));

        gridLayout_5->addWidget(txtChoiceText3, 0, 1, 1, 1);


        gridLayout->addWidget(groupBox_7, 2, 0, 1, 1);

        frame_7 = new QFrame(frame_3);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_7);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(frame_7);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_4->addWidget(label_5);

        lbQuestion = new QLabel(frame_7);
        lbQuestion->setObjectName(QString::fromUtf8("lbQuestion"));

        horizontalLayout_4->addWidget(lbQuestion);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout_4->addLayout(horizontalLayout_4);

        verticalSpacer_2 = new QSpacerItem(20, 39, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);


        gridLayout->addWidget(frame_7, 0, 0, 1, 1);


        verticalLayout_3->addWidget(frame_3);

        frame_2 = new QFrame(gpQuestion);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_10 = new QHBoxLayout(frame_2);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_16 = new QLabel(frame_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        horizontalLayout_10->addWidget(label_16);

        radChoice1 = new QRadioButton(frame_2);
        radChoice1->setObjectName(QString::fromUtf8("radChoice1"));

        horizontalLayout_10->addWidget(radChoice1);

        radChoice2 = new QRadioButton(frame_2);
        radChoice2->setObjectName(QString::fromUtf8("radChoice2"));

        horizontalLayout_10->addWidget(radChoice2);

        radChoice3 = new QRadioButton(frame_2);
        radChoice3->setObjectName(QString::fromUtf8("radChoice3"));

        horizontalLayout_10->addWidget(radChoice3);

        radChoice4 = new QRadioButton(frame_2);
        radChoice4->setObjectName(QString::fromUtf8("radChoice4"));

        horizontalLayout_10->addWidget(radChoice4);


        verticalLayout_3->addWidget(frame_2);

        frame = new QFrame(gpQuestion);
        frame->setObjectName(QString::fromUtf8("frame"));
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setMinimumSize(QSize(0, 0));
        frame->setMaximumSize(QSize(16777215, 90));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_11 = new QHBoxLayout(frame);
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_4);

        frame_5 = new QFrame(frame);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame_5->sizePolicy().hasHeightForWidth());
        frame_5->setSizePolicy(sizePolicy1);
        frame_5->setMinimumSize(QSize(150, 0));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        verticalLayout_7 = new QVBoxLayout(frame_5);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        btnNext = new QPushButton(frame_5);
        btnNext->setObjectName(QString::fromUtf8("btnNext"));

        horizontalLayout_12->addWidget(btnNext);

        label_19 = new QLabel(frame_5);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        horizontalLayout_12->addWidget(label_19);

        lbQuestionFrom = new QLabel(frame_5);
        lbQuestionFrom->setObjectName(QString::fromUtf8("lbQuestionFrom"));

        horizontalLayout_12->addWidget(lbQuestionFrom);

        label_17 = new QLabel(frame_5);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        horizontalLayout_12->addWidget(label_17);

        lbQuestionTo = new QLabel(frame_5);
        lbQuestionTo->setObjectName(QString::fromUtf8("lbQuestionTo"));

        horizontalLayout_12->addWidget(lbQuestionTo);

        btnPrev = new QPushButton(frame_5);
        btnPrev->setObjectName(QString::fromUtf8("btnPrev"));

        horizontalLayout_12->addWidget(btnPrev);


        verticalLayout_7->addLayout(horizontalLayout_12);

        verticalSpacer = new QSpacerItem(20, 9, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer);


        horizontalLayout_11->addWidget(frame_5);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_3);

        frame_6 = new QFrame(frame);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        sizePolicy1.setHeightForWidth(frame_6->sizePolicy().hasHeightForWidth());
        frame_6->setSizePolicy(sizePolicy1);
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        verticalLayout_6 = new QVBoxLayout(frame_6);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        btnNew = new QPushButton(frame_6);
        btnNew->setObjectName(QString::fromUtf8("btnNew"));

        verticalLayout_6->addWidget(btnNew);

        btnDelete = new QPushButton(frame_6);
        btnDelete->setObjectName(QString::fromUtf8("btnDelete"));

        verticalLayout_6->addWidget(btnDelete);

        btnSave = new QPushButton(frame_6);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));

        verticalLayout_6->addWidget(btnSave);


        horizontalLayout_11->addWidget(frame_6);


        verticalLayout_3->addWidget(frame);


        verticalLayout->addWidget(gpQuestion);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(edit);

        QMetaObject::connectSlotsByName(edit);
    } // setupUi

    void retranslateUi(QWidget *edit)
    {
        edit->setWindowTitle(QApplication::translate("edit", "\330\252\330\271\330\261\333\214\331\201 \330\242\330\262\331\205\331\210\331\206", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("edit", "\331\205\330\264\330\256\330\265\330\247\330\252 \330\242\330\262\331\205\331\210\331\206", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("edit", "\330\271\331\206\331\210\330\247\331\206 \330\242\330\262\331\205\331\210\331\206: ", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("edit", "\331\205\330\257\330\252 \330\250\330\261\332\257\330\262\330\247\330\261\333\214: ", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("edit", "  \330\257\331\202\333\214\331\202\331\207", 0, QApplication::UnicodeUTF8));
        gpQuestion->setTitle(QApplication::translate("edit", "\330\263\331\210\330\247\331\204\330\247\330\252 \330\242\330\262\331\205\331\210\331\206", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("edit", "\330\265\331\210\330\261\330\252 \330\263\331\210\330\247\331\204", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("edit", "\331\205\330\252\331\206: ", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("edit", "\330\252\330\265\331\210\333\214\330\261: ", 0, QApplication::UnicodeUTF8));
        btnQuestionPic->setText(QApplication::translate("edit", "\330\247\331\206\330\252\330\256\330\247\330\250", 0, QApplication::UnicodeUTF8));
        txtQuestionText->setHtml(QApplication::translate("edit", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p></body></html>", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("edit", "\332\257\330\262\333\214\331\206\331\207 \330\257\331\210\331\205", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("edit", "\331\205\330\252\331\206: ", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("edit", "\330\252\330\265\331\210\333\214\330\261: ", 0, QApplication::UnicodeUTF8));
        btnChoicePic2->setText(QApplication::translate("edit", "\330\247\331\206\330\252\330\256\330\247\330\250", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("edit", "\332\257\330\262\333\214\331\206\331\207 \330\247\331\210\331\204", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("edit", "\331\205\330\252\331\206: ", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("edit", "\330\252\330\265\331\210\333\214\330\261: ", 0, QApplication::UnicodeUTF8));
        btnChoicePic1->setText(QApplication::translate("edit", "\330\247\331\206\330\252\330\256\330\247\330\250", 0, QApplication::UnicodeUTF8));
        groupBox_6->setTitle(QApplication::translate("edit", "\332\257\330\262\333\214\331\206\331\207 \332\206\331\207\330\247\330\261\331\205", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("edit", "\331\205\330\252\331\206: ", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("edit", "\330\252\330\265\331\210\333\214\330\261: ", 0, QApplication::UnicodeUTF8));
        btnChoicePic4->setText(QApplication::translate("edit", "\330\247\331\206\330\252\330\256\330\247\330\250", 0, QApplication::UnicodeUTF8));
        groupBox_7->setTitle(QApplication::translate("edit", "\332\257\330\262\333\214\331\206\331\207 \330\263\331\210\331\205", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("edit", "\331\205\330\252\331\206: ", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("edit", "\330\252\330\265\331\210\333\214\330\261: ", 0, QApplication::UnicodeUTF8));
        btnChoicePic3->setText(QApplication::translate("edit", "\330\247\331\206\330\252\330\256\330\247\330\250", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("edit", "\330\264\331\205\330\247\330\261\331\207 \330\263\331\210\330\247\331\204: ", 0, QApplication::UnicodeUTF8));
        lbQuestion->setText(QApplication::translate("edit", "1", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("edit", "\332\257\330\262\333\214\331\206\331\207 \330\265\330\255\333\214\330\255: ", 0, QApplication::UnicodeUTF8));
        radChoice1->setText(QApplication::translate("edit", "\332\257\330\262\333\214\331\206\331\207 \330\247\331\210\331\204", 0, QApplication::UnicodeUTF8));
        radChoice2->setText(QApplication::translate("edit", "\332\257\330\262\333\214\331\206\331\207 \330\257\331\210\331\205", 0, QApplication::UnicodeUTF8));
        radChoice3->setText(QApplication::translate("edit", "\332\257\330\262\333\214\331\206\331\207 \330\263\331\210\331\205", 0, QApplication::UnicodeUTF8));
        radChoice4->setText(QApplication::translate("edit", "\332\257\330\262\333\214\331\206\331\207 \332\206\331\207\330\247\330\261\331\205", 0, QApplication::UnicodeUTF8));
        btnNext->setText(QApplication::translate("edit", "\330\263\331\210\330\247\331\204 \330\250\330\271\330\257\333\214", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("edit", "\330\263\331\210\330\247\331\204", 0, QApplication::UnicodeUTF8));
        lbQuestionFrom->setText(QApplication::translate("edit", "1", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("edit", "\330\247\330\262", 0, QApplication::UnicodeUTF8));
        lbQuestionTo->setText(QApplication::translate("edit", "10", 0, QApplication::UnicodeUTF8));
        btnPrev->setText(QApplication::translate("edit", "\330\263\331\210\330\247\331\204 \331\202\330\250\331\204\333\214", 0, QApplication::UnicodeUTF8));
        btnNew->setText(QApplication::translate("edit", "\330\263\331\210\330\247\331\204 \330\254\330\257\333\214\330\257", 0, QApplication::UnicodeUTF8));
        btnDelete->setText(QApplication::translate("edit", "\330\255\330\260\331\201 \330\263\331\210\330\247\331\204", 0, QApplication::UnicodeUTF8));
        btnSave->setText(QApplication::translate("edit", "\330\253\330\250\330\252", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class edit: public Ui_edit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDIT_H
