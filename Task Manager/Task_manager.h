#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Task_manager.h"
#include "Service.h"

class Task_manager : public QMainWindow
{
    Q_OBJECT

public:
    Task_manager(Service& s,QWidget *parent = Q_NULLPTR);

private:
    Service service;
    Ui::Task_managerClass ui;

    void populateList();
    void showDuration();
};
