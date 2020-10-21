#include "Vegetables.h"

Vegetables::Vegetables(Service& s, QWidget *parent)
    : QMainWindow(parent), service{s}
{
    ui.setupUi(this);
    this->populateFamilyList();

    QObject::connect(this->ui.familyListWidget, &QListWidget::itemSelectionChanged, this, &Vegetables::familyClicked);
    QObject::connect(this->ui.searchButton, &QPushButton::clicked, this, &Vegetables::search);
}

void Vegetables::populateFamilyList()
{
    this->ui.familyListWidget->clear();

    auto vector = this->service.getAllFamilies();
    for (auto i : vector)
    {
        this->ui.familyListWidget->addItem(QString::fromStdString(i));
    }

}

void Vegetables::familyClicked()
{
    QModelIndexList selectedIndexes = this->ui.familyListWidget->selectionModel()->selectedIndexes();

    int selectedIndex = selectedIndexes.at(0).row();
    string family = this->service.getAllFamilies()[selectedIndex];
    auto vector = this->service.getAllFromFamily(family);
    this->ui.VeggieListWidget->clear();
    for (auto i : vector)
    {
        string line;
        line = i.getName() + " " + i.getParts();
        this->ui.VeggieListWidget->addItem(QString::fromStdString(line));
    }
}

void Vegetables::search()
{
    string name = this->ui.nameLineEdit->text().toStdString();
    auto v = this->service.getAll();
    string parts;
    string family;
    for (auto i : v)
    {
        if (i.getName() == name)
        {
            parts = i.getParts();
            family = i.getFamily();
            break;
        }
    }
    QFont* high = new QFont();
    high->setBold(true);

    this->ui.partsLineEdit->setText(QString::fromStdString(parts));
    for (int i = 0; i < this->ui.familyListWidget->count(); ++i)
    {
        QListWidgetItem* item = this->ui.familyListWidget->item(i);
        if (item->text().toStdString() == family)
        {
            //item->setFont(*high);
            //item->setForeground(Qt::darkGreen);
            item->setBackgroundColor(Qt::red);
        }
        else
        {
            item->setBackgroundColor(Qt::white);
        }
    }
}
