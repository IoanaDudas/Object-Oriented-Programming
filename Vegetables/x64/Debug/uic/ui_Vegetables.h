/********************************************************************************
** Form generated from reading UI file 'Vegetables.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VEGETABLES_H
#define UI_VEGETABLES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VegetablesClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QListWidget *familyListWidget;
    QListWidget *VeggieListWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *nameLineEdit;
    QFormLayout *formLayout_2;
    QPushButton *searchButton;
    QLineEdit *partsLineEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *VegetablesClass)
    {
        if (VegetablesClass->objectName().isEmpty())
            VegetablesClass->setObjectName(QString::fromUtf8("VegetablesClass"));
        VegetablesClass->resize(569, 446);
        centralWidget = new QWidget(VegetablesClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        familyListWidget = new QListWidget(centralWidget);
        familyListWidget->setObjectName(QString::fromUtf8("familyListWidget"));

        horizontalLayout->addWidget(familyListWidget);

        VeggieListWidget = new QListWidget(centralWidget);
        VeggieListWidget->setObjectName(QString::fromUtf8("VeggieListWidget"));

        horizontalLayout->addWidget(VeggieListWidget);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        nameLineEdit = new QLineEdit(centralWidget);
        nameLineEdit->setObjectName(QString::fromUtf8("nameLineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, nameLineEdit);


        gridLayout->addLayout(formLayout, 1, 0, 1, 1);

        formLayout_2 = new QFormLayout();
        formLayout_2->setSpacing(6);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        searchButton = new QPushButton(centralWidget);
        searchButton->setObjectName(QString::fromUtf8("searchButton"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, searchButton);

        partsLineEdit = new QLineEdit(centralWidget);
        partsLineEdit->setObjectName(QString::fromUtf8("partsLineEdit"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, partsLineEdit);


        gridLayout->addLayout(formLayout_2, 2, 0, 1, 1);

        VegetablesClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(VegetablesClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 569, 21));
        VegetablesClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(VegetablesClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        VegetablesClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(VegetablesClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        VegetablesClass->setStatusBar(statusBar);

        retranslateUi(VegetablesClass);

        QMetaObject::connectSlotsByName(VegetablesClass);
    } // setupUi

    void retranslateUi(QMainWindow *VegetablesClass)
    {
        VegetablesClass->setWindowTitle(QCoreApplication::translate("VegetablesClass", "Vegetables", nullptr));
        label->setText(QCoreApplication::translate("VegetablesClass", "Name:", nullptr));
        searchButton->setText(QCoreApplication::translate("VegetablesClass", "Search", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VegetablesClass: public Ui_VegetablesClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEGETABLES_H
