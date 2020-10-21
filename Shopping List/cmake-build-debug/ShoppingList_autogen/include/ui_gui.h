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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gui
{
public:
    QListWidget *listWidget;
    QPushButton *deleteButton;
    QPushButton *filterButton;
    QLineEdit *categoryLineEdit;
    QLineEdit *quantityLineEdit;
    QLineEdit *nameLineEdit;
    QLineEdit *filterLineEdit;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QWidget *gui)
    {
        if (gui->objectName().isEmpty())
            gui->setObjectName(QString::fromUtf8("gui"));
        gui->resize(325, 521);
        listWidget = new QListWidget(gui);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(30, 30, 271, 231));
        deleteButton = new QPushButton(gui);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        deleteButton->setGeometry(QRect(110, 400, 112, 32));
        filterButton = new QPushButton(gui);
        filterButton->setObjectName(QString::fromUtf8("filterButton"));
        filterButton->setGeometry(QRect(110, 480, 112, 32));
        categoryLineEdit = new QLineEdit(gui);
        categoryLineEdit->setObjectName(QString::fromUtf8("categoryLineEdit"));
        categoryLineEdit->setGeometry(QRect(30, 290, 271, 21));
        quantityLineEdit = new QLineEdit(gui);
        quantityLineEdit->setObjectName(QString::fromUtf8("quantityLineEdit"));
        quantityLineEdit->setGeometry(QRect(30, 370, 271, 21));
        nameLineEdit = new QLineEdit(gui);
        nameLineEdit->setObjectName(QString::fromUtf8("nameLineEdit"));
        nameLineEdit->setGeometry(QRect(30, 330, 271, 21));
        filterLineEdit = new QLineEdit(gui);
        filterLineEdit->setObjectName(QString::fromUtf8("filterLineEdit"));
        filterLineEdit->setGeometry(QRect(30, 450, 271, 21));
        label = new QLabel(gui);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 270, 58, 16));
        label_2 = new QLabel(gui);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 310, 58, 16));
        label_3 = new QLabel(gui);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 350, 58, 16));
        label_4 = new QLabel(gui);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 430, 91, 16));

        retranslateUi(gui);

        QMetaObject::connectSlotsByName(gui);
    } // setupUi

    void retranslateUi(QWidget *gui)
    {
        gui->setWindowTitle(QCoreApplication::translate("gui", "gui", nullptr));
        deleteButton->setText(QCoreApplication::translate("gui", "Delete", nullptr));
        filterButton->setText(QCoreApplication::translate("gui", "Filter", nullptr));
        label->setText(QCoreApplication::translate("gui", "Category", nullptr));
        label_2->setText(QCoreApplication::translate("gui", "Name", nullptr));
        label_3->setText(QCoreApplication::translate("gui", "Quantity", nullptr));
        label_4->setText(QCoreApplication::translate("gui", "Category filter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gui: public Ui_gui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUI_H
