#include "gui.h"
#include "ui_gui.h"

gui::gui(service& service, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::gui)
    , serv{service}
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

    vector<TElem> itemsList = this->serv.getAllItems();
    for(auto &current : itemsList)
        this->ui->listWidget->addItem(QString::fromStdString(current.toString()));
}

void gui::connectSignalsAndSlots()
{
    QObject::connect(this->ui->listWidget, &QListWidget::itemSelectionChanged, [this](){
        int selectedIndex = getSelectedIndex();

        if(selectedIndex < 0)
            return ;
        domain item = this->serv.getAllItems()[selectedIndex];
        this->ui->quantityLineEdit->setText(QString::fromStdString(to_string(item.getQuantity())));
        this->ui->categoryLineEdit->setText(QString::fromStdString(item.getCategory()));
        this->ui->nameLineEdit->setText(QString::fromStdString(item.getName()));
    });

    QObject::connect(this->ui->deleteButton, &QPushButton::clicked, this, &gui::removeTapeGUI);
    QObject::connect(this->ui->filterButton, &QPushButton::clicked, this, &gui::populateFilter);
}

int gui::getSelectedIndex() const
{
    QModelIndexList selectedIndexes = this->ui->listWidget->selectionModel()->selectedIndexes();
    if(selectedIndexes.size() == 0)
    {
        this->ui->categoryLineEdit->clear();
        this->ui->nameLineEdit->clear();
        this->ui->quantityLineEdit->clear();
        return -1;
    }
    int selectedIndex = selectedIndexes.at(0).row();
    return selectedIndex;
}

void gui::removeTapeGUI()
{
    int selectedIndex = this->getSelectedIndex();
    if(selectedIndex < 0)
    {
        QMessageBox::critical(this, "Error", "No item was selected!");
        return;
    }
    string name = this->serv.getAllItems()[selectedIndex].getName();
    if(name == "")
    {
        QMessageBox::critical(this, "Error", "No item selected!");
        return;
    }
    this->serv.deleteItem(name);
    this->populateList();
}

void gui::populateFilter()
{
    this->ui->listWidget->clear();

    string category = this->ui->filterLineEdit->text().toStdString();
    vector<TElem> newVector = serv.filterItems(category);

    if(category == "")
    {
        QMessageBox::critical(this, "Error", "No category selected!");
        return;
    }

    for(auto &current : newVector)
        this->ui->listWidget->addItem(QString::fromStdString(current.toString()));
}

