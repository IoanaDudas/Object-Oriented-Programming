#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Vegetables.h"
#include "Service.h"

class Vegetables : public QMainWindow
{
    Q_OBJECT

public:
    Vegetables(Service& s, QWidget *parent = Q_NULLPTR);

private:
    Ui::VegetablesClass ui;
    Service service;

    void populateFamilyList();
    void familyClicked();
    void search();
};
