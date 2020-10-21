#include "gui.h"
#include "ui_gui.h"

gui::gui(Service& service, QWidget *parent)
        : QWidget(parent)
        , ui(new Ui::gui)
        , service{service}
{
    ui->setupUi(this);
    this->populateList();
    this->connectSignalsAndSlots();
}

gui::~gui()
{
    delete ui;
}

void gui::populateList()
{
    this->ui->listWidget->clear();
    int i = 0;

    vector<TElem> itemsList = this->service.getAllItemsSorted();
    for(auto &current : itemsList)
    {
        this->ui->listWidget->addItem(QString::fromStdString(current.toString()));
        QColor color(QString::fromStdString(current.getColor()));
        this->ui->listWidget->item(i)->setForeground(color);
        i++;
    }
}

void gui::connectSignalsAndSlots()
{
    QObject::connect(this->ui->totalButton, &QPushButton::clicked, this, &gui::showTotal);

}

void gui::showTotal()
{
    string manufacturerName = this->ui->manufacturerLineEdit->text().toStdString();

    if(manufacturerName == "")
    {
        QMessageBox::critical(this, "Error", "No manufacturer selected!");
        return;
    }

    int total = service.numberOfCars(manufacturerName);

    this->ui->totalLineEdit->setText(QString::fromStdString(to_string(total)));
}