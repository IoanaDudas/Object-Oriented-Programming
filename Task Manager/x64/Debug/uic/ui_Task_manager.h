/********************************************************************************
** Form generated from reading UI file 'Task_manager.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASK_MANAGER_H
#define UI_TASK_MANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
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

class Ui_Task_managerClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QListWidget *taskListWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *priorityLineEdit;
    QFormLayout *formLayout_2;
    QPushButton *durationButton;
    QLineEdit *durationLineEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Task_managerClass)
    {
        if (Task_managerClass->objectName().isEmpty())
            Task_managerClass->setObjectName(QString::fromUtf8("Task_managerClass"));
        Task_managerClass->resize(454, 400);
        centralWidget = new QWidget(Task_managerClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        taskListWidget = new QListWidget(centralWidget);
        taskListWidget->setObjectName(QString::fromUtf8("taskListWidget"));
        QFont font;
        font.setPointSize(12);
        taskListWidget->setFont(font);

        gridLayout->addWidget(taskListWidget, 0, 0, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        priorityLineEdit = new QLineEdit(centralWidget);
        priorityLineEdit->setObjectName(QString::fromUtf8("priorityLineEdit"));
        priorityLineEdit->setFont(font);

        formLayout->setWidget(0, QFormLayout::FieldRole, priorityLineEdit);


        gridLayout->addLayout(formLayout, 1, 0, 1, 1);

        formLayout_2 = new QFormLayout();
        formLayout_2->setSpacing(6);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        durationButton = new QPushButton(centralWidget);
        durationButton->setObjectName(QString::fromUtf8("durationButton"));
        durationButton->setFont(font);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, durationButton);

        durationLineEdit = new QLineEdit(centralWidget);
        durationLineEdit->setObjectName(QString::fromUtf8("durationLineEdit"));
        durationLineEdit->setFont(font);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, durationLineEdit);


        gridLayout->addLayout(formLayout_2, 2, 0, 1, 1);

        Task_managerClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Task_managerClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 454, 21));
        Task_managerClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Task_managerClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Task_managerClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Task_managerClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Task_managerClass->setStatusBar(statusBar);

        retranslateUi(Task_managerClass);

        QMetaObject::connectSlotsByName(Task_managerClass);
    } // setupUi

    void retranslateUi(QMainWindow *Task_managerClass)
    {
        Task_managerClass->setWindowTitle(QCoreApplication::translate("Task_managerClass", "Task_manager", nullptr));
        label->setText(QCoreApplication::translate("Task_managerClass", "Priority:", nullptr));
        durationButton->setText(QCoreApplication::translate("Task_managerClass", "Show duration", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Task_managerClass: public Ui_Task_managerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASK_MANAGER_H
