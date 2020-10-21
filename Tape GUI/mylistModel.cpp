#include "mylistModel.h"
#include <QFont>

int MyListModel::rowCount(const QModelIndex& parent) const
{
    return this->service.getAllHelperTapesService().size();
}

QVariant MyListModel::data(const QModelIndex& index, int role) const
{
    int indexRow = index.row();
    Tape tape = this->service.getAllHelperTapesService()[indexRow];

    if (role == Qt::DisplayRole)
    {
        string line;
        line = tape.getTitle() + "," + tape.getFilmedAt() + ", " + tape.getCreationDate().toString() + ", " + to_string(tape.getAccessCount()) + "," + tape.getFootagePreview();
        return QString::fromStdString(line);
    }

    return QVariant();
}
