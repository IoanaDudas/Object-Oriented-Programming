#include "Task_manager.h"

Task_manager::Task_manager(Service& s,QWidget *parent)
    : QMainWindow(parent), service{s}
{
    ui.setupUi(this);
    this->populateList();
    QObject::connect(this->ui.durationButton, &QPushButton::clicked, this, &Task_manager::showDuration);
}

void Task_manager::populateList()
{
    this->ui.taskListWidget->clear();
    QFont* bold = new QFont{};
    bold->setBold(true);
    auto vector = this->service.getAll();
    int i = 0;
    for (auto v : vector)
    {
        string line = v.getDescription() + " " + to_string(v.getPriority());
        this->ui.taskListWidget->addItem(QString::fromStdString(line));
        if (v.getPriority() == 1)
        {
            QListWidgetItem* item = this->ui.taskListWidget->item(i);
            item->setFont(*bold);
        }
        i++;
    }

    for (int i=0; i<this->ui.taskListWidget->count();++i)
    {
        QListWidgetItem* item = this->ui.taskListWidget->item(i);
        if(item->text().toStdString()=="")
            item->setFont(*bold);
    }
}

void Task_manager::showDuration()
{
    int priority = 0;
    priority = stoi(this->ui.priorityLineEdit->text().toStdString());
    int duration = this->service.getDurationPriority(priority);

    this->ui.durationLineEdit->setText(QString::fromStdString(to_string(duration)));
}
