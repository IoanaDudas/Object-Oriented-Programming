#include "mylistGUI.h"
#include "ui_mylistGUI.h"

mylistGUI::mylistGUI(Service& _service, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mylistGUI), service{_service}
{
    ui->setupUi(this);

    this->setColor();
    this->model = new MyListModel{ this->service };
    this->ui->mylistListView->setModel(this->model);
}

mylistGUI::~mylistGUI()
{
    delete ui;
}


void mylistGUI::setColor()
{
    QPalette* palette = new QPalette{};

    QColor purple = QColor(166, 180, 249);
    QColor pink = QColor(246, 191, 227);
    QColor black = QColor(0, 0, 0);

    palette->setColor(QPalette::Window, purple);
    palette->setColor(QPalette::Base, pink);
    palette->setColor(QPalette::Text, black);

    this->ui->mylistListView->setPalette(*palette);

    setPalette(*palette);
}

void mylistGUI::update()
{
    delete this->model;
    this->model = new MyListModel{ this->service };
    this->ui->mylistListView->setModel(this->model);
}
