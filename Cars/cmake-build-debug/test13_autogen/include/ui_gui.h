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
    QLineEdit *manufacturerLineEdit;
    QLineEdit *totalLineEdit;
    QPushButton *totalButton;
    QLabel *label;

    void setupUi(QWidget *gui)
    {
        if (gui->objectName().isEmpty())
            gui->setObjectName(QString::fromUtf8("gui"));
        gui->resize(322, 325);
        listWidget = new QListWidget(gui);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(20, 20, 281, 201));
        manufacturerLineEdit = new QLineEdit(gui);
        manufacturerLineEdit->setObjectName(QString::fromUtf8("manufacturerLineEdit"));
        manufacturerLineEdit->setGeometry(QRect(170, 240, 131, 21));
        totalLineEdit = new QLineEdit(gui);
        totalLineEdit->setObjectName(QString::fromUtf8("totalLineEdit"));
        totalLineEdit->setGeometry(QRect(170, 270, 131, 21));
        totalButton = new QPushButton(gui);
        totalButton->setObjectName(QString::fromUtf8("totalButton"));
        totalButton->setGeometry(QRect(20, 270, 112, 31));
        label = new QLabel(gui);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 240, 121, 16));

        retranslateUi(gui);

        QMetaObject::connectSlotsByName(gui);
    } // setupUi

    void retranslateUi(QWidget *gui)
    {
        gui->setWindowTitle(QCoreApplication::translate("gui", "gui", nullptr));
        totalButton->setText(QCoreApplication::translate("gui", "Show cars", nullptr));
        label->setText(QCoreApplication::translate("gui", "Manufacturer name:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gui: public Ui_gui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUI_H
