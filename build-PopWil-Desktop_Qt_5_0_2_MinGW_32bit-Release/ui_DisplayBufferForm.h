/********************************************************************************
** Form generated from reading UI file 'DisplayBufferForm.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPLAYBUFFERFORM_H
#define UI_DISPLAYBUFFERFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DisplayBufferForm
{
public:
    QPushButton *pushButton;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpinBox *spinBox_S;
    QLabel *label_2;
    QSpinBox *spinBox_V;
    QLabel *label_3;
    QSpinBox *spinBox_A;

    void setupUi(QDialog *DisplayBufferForm)
    {
        if (DisplayBufferForm->objectName().isEmpty())
            DisplayBufferForm->setObjectName(QStringLiteral("DisplayBufferForm"));
        DisplayBufferForm->resize(228, 217);
        pushButton = new QPushButton(DisplayBufferForm);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(80, 170, 75, 23));
        widget = new QWidget(DisplayBufferForm);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 40, 181, 101));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        spinBox_S = new QSpinBox(widget);
        spinBox_S->setObjectName(QStringLiteral("spinBox_S"));

        gridLayout->addWidget(spinBox_S, 0, 1, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        spinBox_V = new QSpinBox(widget);
        spinBox_V->setObjectName(QStringLiteral("spinBox_V"));

        gridLayout->addWidget(spinBox_V, 1, 1, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        spinBox_A = new QSpinBox(widget);
        spinBox_A->setObjectName(QStringLiteral("spinBox_A"));

        gridLayout->addWidget(spinBox_A, 2, 1, 1, 1);


        retranslateUi(DisplayBufferForm);

        QMetaObject::connectSlotsByName(DisplayBufferForm);
    } // setupUi

    void retranslateUi(QDialog *DisplayBufferForm)
    {
        DisplayBufferForm->setWindowTitle(QApplication::translate("DisplayBufferForm", "\347\273\230\345\233\276\350\241\245\345\201\277", 0));
        pushButton->setText(QApplication::translate("DisplayBufferForm", "\347\241\256\345\256\232", 0));
        label->setText(QApplication::translate("DisplayBufferForm", "\344\275\215\347\247\273", 0));
        label_2->setText(QApplication::translate("DisplayBufferForm", "\351\200\237\345\272\246", 0));
        label_3->setText(QApplication::translate("DisplayBufferForm", "\345\212\240\351\200\237\345\272\246", 0));
    } // retranslateUi

};

namespace Ui {
    class DisplayBufferForm: public Ui_DisplayBufferForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAYBUFFERFORM_H