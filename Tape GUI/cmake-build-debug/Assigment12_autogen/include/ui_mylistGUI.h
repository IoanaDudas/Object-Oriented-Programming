/********************************************************************************
** Form generated from reading UI file 'mylistGUI.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYLISTGUI_H
#define UI_MYLISTGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mylistGUI
{
public:
    QHBoxLayout *horizontalLayout;
    QListView *mylistListView;

    void setupUi(QWidget *mylistGUI)
    {
        if (mylistGUI->objectName().isEmpty())
            mylistGUI->setObjectName(QString::fromUtf8("mylistGUI"));
        mylistGUI->resize(480, 300);
        QFont font;
        font.setFamily(QString::fromUtf8("AppleGothic"));
        font.setPointSize(14);
        mylistGUI->setFont(font);
        horizontalLayout = new QHBoxLayout(mylistGUI);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mylistListView = new QListView(mylistGUI);
        mylistListView->setObjectName(QString::fromUtf8("mylistListView"));
        mylistListView->setFont(font);

        horizontalLayout->addWidget(mylistListView);


        retranslateUi(mylistGUI);

        QMetaObject::connectSlotsByName(mylistGUI);
    } // setupUi

    void retranslateUi(QWidget *mylistGUI)
    {
        mylistGUI->setWindowTitle(QCoreApplication::translate("mylistGUI", "My List", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mylistGUI: public Ui_mylistGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYLISTGUI_H
