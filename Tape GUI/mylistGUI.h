#pragma once
#include <QWidget>
#include "mylistModel.h"

namespace Ui {
class mylistGUI;
}

class mylistGUI : public QWidget, public Observer
{
    Q_OBJECT

public:
    explicit mylistGUI(Service& service, QWidget *parent = nullptr);
    ~mylistGUI();

private:
    Ui::mylistGUI *ui;
    Service& service;
    MyListModel* model;

    void setColor();
    void update() override;
};

