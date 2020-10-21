/********************************************************************************
** Form generated from reading UI file 'gui.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUI_H
#define UI_GUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gui
{
public:
    QPushButton *sortButton;
    QLineEdit *companyNameLineEdit;
    QLineEdit *totalLineEdit;
    QPushButton *calculateTotalButton;
    QListWidget *listWidget;

    void setupUi(QWidget *gui)
    {
        if (gui->objectName().isEmpty())
            gui->setObjectName(QString::fromUtf8("gui"));
        gui->resize(293, 391);
        sortButton = new QPushButton(gui);
        sortButton->setObjectName(QString::fromUtf8("sortButton"));
        sortButton->setGeometry(QRect(90, 230, 112, 32));
        companyNameLineEdit = new QLineEdit(gui);
        companyNameLineEdit->setObjectName(QString::fromUtf8("companyNameLineEdit"));
        companyNameLineEdit->setGeometry(QRect(20, 280, 251, 21));
        totalLineEdit = new QLineEdit(gui);
        totalLineEdit->setObjectName(QString::fromUtf8("totalLineEdit"));
        totalLineEdit->setGeometry(QRect(90, 350, 113, 21));
        calculateTotalButton = new QPushButton(gui);
        calculateTotalButton->setObjectName(QString::fromUtf8("pushButton_2"));
        calculateTotalButton->setGeometry(QRect(90, 310, 112, 32));
        listWidget = new QListWidget(gui);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(20, 20, 256, 192));

        retranslateUi(gui);

        QMetaObject::connectSlotsByName(gui);
    } // setupUi

    void retranslateUi(QWidget *gui)
    {
        gui->setWindowTitle(QCoreApplication::translate("gui", "gui", nullptr));
        sortButton->setText(QCoreApplication::translate("gui", "Sort", nullptr));
        calculateTotalButton->setText(QCoreApplication::translate("gui", "Calculate Total", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gui: public Ui_gui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUI_H
