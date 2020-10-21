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

    vector<TElem> itemsList = this->service.getAllBills();
    for(auto &current : itemsList)
        this->ui->listWidget->addItem(QString::fromStdString(current.toString()));
}

void gui::connectSignalsAndSlots()
{
    QObject::connect(this->ui->sortButton, &QPushButton::clicked, this, &gui::sortList);
    QObject::connect(this->ui->calculateTotalButton, &QPushButton::clicked, this, &gui::calculateTotal);

}

void gui::sortList()
{
    this->ui->listWidget->clear();
    vector<TElem> newVector = service.sortBills();

    for(auto &current : newVector)
        this->ui->listWidget->addItem(QString::fromStdString(current.toString()));
}

void gui::calculateTotal()
{
    string companyName = this->ui->companyNameLineEdit->text().toStdString();

    if(companyName == "")
    {
        QMessageBox::critical(this, "Error", "No company selected!");
        return;
    }

    float total = service.totalUnpaid(companyName);

    this->ui->totalLineEdit->setText(QString::fromStdString(to_string(total)));
}