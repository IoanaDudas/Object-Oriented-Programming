/********************************************************************************
** Form generated from reading UI file 'GUI.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUI_H
#define UI_GUI_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GUI
{
public:
    QPushButton *saveButton;
    QGroupBox *groupBox;
    QListWidget *myListWidget;
    QPushButton *openButton;
    QPushButton *nextButton;
    QPushButton *openButton_2;
    QGroupBox *groupBox_2;
    QListWidget *filterList;
    QLabel *label_12;
    QPushButton *filterButton;
    QLabel *label_11;
    QLabel *label_10;
    QLineEdit *filmedAtFilterLineEdit;
    QLineEdit *accessCounFilterLineEdit;
    QGroupBox *groupBox_3;
    QPushButton *updateButton;
    QPushButton *addButton;
    QLineEdit *filmedAtLineEdit;
    QLabel *label_6;
    QPushButton *deleteButton;
    QLabel *label_3;
    QLineEdit *titleLineEdit;
    QLabel *label_2;
    QLineEdit *footagePreviewLineEdit;
    QLineEdit *accessCountLineEdit;
    QLineEdit *creationDateLineEdit;
    QLabel *label_5;
    QLabel *label_4;
    QListWidget *allTapesListWidget;
    QPushButton *undoButton;
    QPushButton *redoButton;
    QPushButton *ModeAButton;
    QPushButton *ModeBButton;

    void setupUi(QWidget *GUI)
    {
        if (GUI->objectName().isEmpty())
            GUI->setObjectName(QString::fromUtf8("GUI"));
        GUI->resize(929, 775);
        QPalette palette;
        QBrush brush(QColor(11, 3, 7, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 121, 209, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(242, 206, 204, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        QBrush brush3(QColor(166, 180, 249, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush3);
        QBrush brush4(QColor(232, 155, 176, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        QBrush brush5(QColor(255, 255, 255, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        QBrush brush6(QColor(0, 0, 0, 63));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        QBrush brush7(QColor(209, 215, 242, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        GUI->setPalette(palette);
        QIcon icon;
        icon.addFile(QString::fromUtf8("cmake-build-debug/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        GUI->setWindowIcon(icon);
        GUI->setWindowOpacity(1.000000000000000);
        GUI->setAutoFillBackground(true);
        GUI->setStyleSheet(QString::fromUtf8(""));
        saveButton = new QPushButton(GUI);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        saveButton->setGeometry(QRect(440, 210, 51, 41));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush8(QColor(255, 129, 212, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush8);
        QBrush brush9(QColor(246, 191, 227, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush9);
        QBrush brush10(QColor(0, 0, 0, 216));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush10);
        QBrush brush11(QColor(8, 1, 1, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush11);
        QBrush brush12(QColor(0, 0, 0, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush12);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush8);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush8);
        QBrush brush13(QColor(102, 127, 255, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Highlight, brush13);
        palette1.setBrush(QPalette::Active, QPalette::HighlightedText, brush10);
        QBrush brush14(QColor(0, 0, 0, 128));
        brush14.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush14);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        QBrush brush15(QColor(245, 245, 245, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush15);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::Highlight, brush13);
        palette1.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush10);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush14);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush15);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Highlight, brush13);
        QBrush brush16(QColor(127, 127, 127, 255));
        brush16.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush16);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush14);
#endif
        saveButton->setPalette(palette1);
        QFont font;
        font.setFamily(QString::fromUtf8("AppleGothic"));
        saveButton->setFont(font);
        saveButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 129, 212);"));
        groupBox = new QGroupBox(GUI);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(500, 50, 411, 421));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush10);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush11);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush12);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush9);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Highlight, brush13);
        palette2.setBrush(QPalette::Active, QPalette::HighlightedText, brush10);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush14);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush10);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush11);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush12);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Highlight, brush13);
        palette2.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush10);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush14);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush11);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Highlight, brush13);
        palette2.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush16);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush14);
#endif
        groupBox->setPalette(palette2);
        QFont font1;
        font1.setFamily(QString::fromUtf8("AppleGothic"));
        font1.setPointSize(14);
        groupBox->setFont(font1);
        myListWidget = new QListWidget(groupBox);
        myListWidget->setObjectName(QString::fromUtf8("myListWidget"));
        myListWidget->setGeometry(QRect(10, 30, 391, 301));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush10);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush11);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush12);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush9);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Highlight, brush13);
        palette3.setBrush(QPalette::Active, QPalette::HighlightedText, brush10);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush14);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush10);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush11);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush12);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Highlight, brush13);
        palette3.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush10);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush14);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush11);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Highlight, brush13);
        palette3.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush16);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush14);
#endif
        myListWidget->setPalette(palette3);
        myListWidget->setFont(font1);
        openButton = new QPushButton(groupBox);
        openButton->setObjectName(QString::fromUtf8("openButton"));
        openButton->setGeometry(QRect(70, 340, 111, 31));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush10);
        palette4.setBrush(QPalette::Active, QPalette::BrightText, brush11);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush12);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush8);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush8);
        palette4.setBrush(QPalette::Active, QPalette::Highlight, brush13);
        palette4.setBrush(QPalette::Active, QPalette::HighlightedText, brush10);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipBase, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush14);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush10);
        palette4.setBrush(QPalette::Inactive, QPalette::BrightText, brush11);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush12);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush8);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        palette4.setBrush(QPalette::Inactive, QPalette::Highlight, brush13);
        palette4.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush10);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush14);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette4.setBrush(QPalette::Disabled, QPalette::BrightText, brush11);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        palette4.setBrush(QPalette::Disabled, QPalette::Highlight, brush13);
        palette4.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush16);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush14);
#endif
        openButton->setPalette(palette4);
        openButton->setFont(font1);
        openButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 129, 212);"));
        nextButton = new QPushButton(groupBox);
        nextButton->setObjectName(QString::fromUtf8("nextButton"));
        nextButton->setGeometry(QRect(230, 340, 111, 31));
        QPalette palette5;
        QBrush brush17(QColor(7, 4, 1, 255));
        brush17.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush17);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush12);
        palette5.setBrush(QPalette::Active, QPalette::BrightText, brush11);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush12);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush8);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush8);
        palette5.setBrush(QPalette::Active, QPalette::Highlight, brush13);
        palette5.setBrush(QPalette::Active, QPalette::HighlightedText, brush10);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Active, QPalette::PlaceholderText, brush14);
#endif
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush17);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush12);
        palette5.setBrush(QPalette::Inactive, QPalette::BrightText, brush11);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush12);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush8);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        palette5.setBrush(QPalette::Inactive, QPalette::Highlight, brush13);
        palette5.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush10);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush14);
#endif
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette5.setBrush(QPalette::Disabled, QPalette::BrightText, brush11);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        palette5.setBrush(QPalette::Disabled, QPalette::Highlight, brush13);
        palette5.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush16);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush14);
#endif
        nextButton->setPalette(palette5);
        QFont font2;
        font2.setFamily(QString::fromUtf8("AppleGothic"));
        font2.setPointSize(13);
        nextButton->setFont(font2);
        nextButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 129, 212);"));
        openButton_2 = new QPushButton(groupBox);
        openButton_2->setObjectName(QString::fromUtf8("openButton_2"));
        openButton_2->setGeometry(QRect(140, 380, 131, 31));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush10);
        palette6.setBrush(QPalette::Active, QPalette::BrightText, brush11);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush12);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush8);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush8);
        palette6.setBrush(QPalette::Active, QPalette::Highlight, brush13);
        palette6.setBrush(QPalette::Active, QPalette::HighlightedText, brush10);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipBase, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Active, QPalette::PlaceholderText, brush14);
#endif
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush10);
        palette6.setBrush(QPalette::Inactive, QPalette::BrightText, brush11);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush12);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush8);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        palette6.setBrush(QPalette::Inactive, QPalette::Highlight, brush13);
        palette6.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush10);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush14);
#endif
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette6.setBrush(QPalette::Disabled, QPalette::BrightText, brush11);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        palette6.setBrush(QPalette::Disabled, QPalette::Highlight, brush13);
        palette6.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush16);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush14);
#endif
        openButton_2->setPalette(palette6);
        openButton_2->setFont(font1);
        openButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 129, 212);"));
        groupBox_2 = new QGroupBox(GUI);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(500, 470, 411, 291));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush10);
        palette7.setBrush(QPalette::Active, QPalette::BrightText, brush11);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush12);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush9);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette7.setBrush(QPalette::Active, QPalette::Highlight, brush13);
        palette7.setBrush(QPalette::Active, QPalette::HighlightedText, brush10);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Active, QPalette::PlaceholderText, brush14);
#endif
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush10);
        palette7.setBrush(QPalette::Inactive, QPalette::BrightText, brush11);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush12);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette7.setBrush(QPalette::Inactive, QPalette::Highlight, brush13);
        palette7.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush10);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush14);
#endif
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette7.setBrush(QPalette::Disabled, QPalette::BrightText, brush11);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        palette7.setBrush(QPalette::Disabled, QPalette::Highlight, brush13);
        palette7.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush16);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush14);
#endif
        groupBox_2->setPalette(palette7);
        groupBox_2->setFont(font1);
        filterList = new QListWidget(groupBox_2);
        filterList->setObjectName(QString::fromUtf8("filterList"));
        filterList->setGeometry(QRect(10, 100, 391, 181));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette8.setBrush(QPalette::Active, QPalette::Text, brush10);
        palette8.setBrush(QPalette::Active, QPalette::BrightText, brush11);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush12);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush9);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette8.setBrush(QPalette::Active, QPalette::Highlight, brush13);
        palette8.setBrush(QPalette::Active, QPalette::HighlightedText, brush10);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Active, QPalette::PlaceholderText, brush14);
#endif
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Text, brush10);
        palette8.setBrush(QPalette::Inactive, QPalette::BrightText, brush11);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush12);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette8.setBrush(QPalette::Inactive, QPalette::Highlight, brush13);
        palette8.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush10);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush14);
#endif
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette8.setBrush(QPalette::Disabled, QPalette::BrightText, brush11);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        palette8.setBrush(QPalette::Disabled, QPalette::Highlight, brush13);
        palette8.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush16);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush14);
#endif
        filterList->setPalette(palette8);
        filterList->setFont(font1);
        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(220, 40, 161, 20));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette9.setBrush(QPalette::Active, QPalette::Text, brush10);
        palette9.setBrush(QPalette::Active, QPalette::BrightText, brush11);
        palette9.setBrush(QPalette::Active, QPalette::ButtonText, brush12);
        palette9.setBrush(QPalette::Active, QPalette::Base, brush9);
        palette9.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette9.setBrush(QPalette::Active, QPalette::Highlight, brush13);
        palette9.setBrush(QPalette::Active, QPalette::HighlightedText, brush10);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Active, QPalette::PlaceholderText, brush14);
#endif
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::Text, brush10);
        palette9.setBrush(QPalette::Inactive, QPalette::BrightText, brush11);
        palette9.setBrush(QPalette::Inactive, QPalette::ButtonText, brush12);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        palette9.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette9.setBrush(QPalette::Inactive, QPalette::Highlight, brush13);
        palette9.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush10);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush14);
#endif
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette9.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette9.setBrush(QPalette::Disabled, QPalette::BrightText, brush11);
        palette9.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette9.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        palette9.setBrush(QPalette::Disabled, QPalette::Highlight, brush13);
        palette9.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush16);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush14);
#endif
        label_12->setPalette(palette9);
        label_12->setFont(font1);
        filterButton = new QPushButton(groupBox_2);
        filterButton->setObjectName(QString::fromUtf8("filterButton"));
        filterButton->setGeometry(QRect(360, 50, 41, 41));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette10.setBrush(QPalette::Active, QPalette::Text, brush10);
        palette10.setBrush(QPalette::Active, QPalette::BrightText, brush11);
        palette10.setBrush(QPalette::Active, QPalette::ButtonText, brush12);
        palette10.setBrush(QPalette::Active, QPalette::Base, brush9);
        palette10.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette10.setBrush(QPalette::Active, QPalette::Highlight, brush13);
        palette10.setBrush(QPalette::Active, QPalette::HighlightedText, brush10);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Active, QPalette::PlaceholderText, brush14);
#endif
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::Text, brush10);
        palette10.setBrush(QPalette::Inactive, QPalette::BrightText, brush11);
        palette10.setBrush(QPalette::Inactive, QPalette::ButtonText, brush12);
        palette10.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        palette10.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette10.setBrush(QPalette::Inactive, QPalette::Highlight, brush13);
        palette10.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush10);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush14);
#endif
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette10.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette10.setBrush(QPalette::Disabled, QPalette::BrightText, brush11);
        palette10.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette10.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette10.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        palette10.setBrush(QPalette::Disabled, QPalette::Highlight, brush13);
        palette10.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush16);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush14);
#endif
        filterButton->setPalette(palette10);
        filterButton->setFont(font1);
        filterButton->setFlat(true);
        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(20, 50, 91, 41));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette11.setBrush(QPalette::Active, QPalette::Text, brush10);
        palette11.setBrush(QPalette::Active, QPalette::BrightText, brush11);
        palette11.setBrush(QPalette::Active, QPalette::ButtonText, brush12);
        palette11.setBrush(QPalette::Active, QPalette::Base, brush9);
        palette11.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette11.setBrush(QPalette::Active, QPalette::Highlight, brush13);
        palette11.setBrush(QPalette::Active, QPalette::HighlightedText, brush10);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Active, QPalette::PlaceholderText, brush14);
#endif
        palette11.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::Text, brush10);
        palette11.setBrush(QPalette::Inactive, QPalette::BrightText, brush11);
        palette11.setBrush(QPalette::Inactive, QPalette::ButtonText, brush12);
        palette11.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        palette11.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette11.setBrush(QPalette::Inactive, QPalette::Highlight, brush13);
        palette11.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush10);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush14);
#endif
        palette11.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette11.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette11.setBrush(QPalette::Disabled, QPalette::BrightText, brush11);
        palette11.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette11.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette11.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        palette11.setBrush(QPalette::Disabled, QPalette::Highlight, brush13);
        palette11.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush16);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush14);
#endif
        label_11->setPalette(palette11);
        label_11->setFont(font1);
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(70, 40, 71, 16));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette12.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette12.setBrush(QPalette::Active, QPalette::Text, brush10);
        palette12.setBrush(QPalette::Active, QPalette::BrightText, brush11);
        palette12.setBrush(QPalette::Active, QPalette::ButtonText, brush12);
        palette12.setBrush(QPalette::Active, QPalette::Base, brush9);
        palette12.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette12.setBrush(QPalette::Active, QPalette::Highlight, brush13);
        palette12.setBrush(QPalette::Active, QPalette::HighlightedText, brush10);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Active, QPalette::PlaceholderText, brush14);
#endif
        palette12.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette12.setBrush(QPalette::Inactive, QPalette::Text, brush10);
        palette12.setBrush(QPalette::Inactive, QPalette::BrightText, brush11);
        palette12.setBrush(QPalette::Inactive, QPalette::ButtonText, brush12);
        palette12.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        palette12.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette12.setBrush(QPalette::Inactive, QPalette::Highlight, brush13);
        palette12.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush10);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush14);
#endif
        palette12.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette12.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette12.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette12.setBrush(QPalette::Disabled, QPalette::BrightText, brush11);
        palette12.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette12.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette12.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        palette12.setBrush(QPalette::Disabled, QPalette::Highlight, brush13);
        palette12.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush16);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush14);
#endif
        label_10->setPalette(palette12);
        label_10->setFont(font1);
        filmedAtFilterLineEdit = new QLineEdit(groupBox_2);
        filmedAtFilterLineEdit->setObjectName(QString::fromUtf8("filmedAtFilterLineEdit"));
        filmedAtFilterLineEdit->setGeometry(QRect(70, 60, 141, 21));
        QPalette palette13;
        palette13.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette13.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette13.setBrush(QPalette::Active, QPalette::Text, brush10);
        palette13.setBrush(QPalette::Active, QPalette::BrightText, brush11);
        palette13.setBrush(QPalette::Active, QPalette::ButtonText, brush12);
        palette13.setBrush(QPalette::Active, QPalette::Base, brush9);
        palette13.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette13.setBrush(QPalette::Active, QPalette::Highlight, brush13);
        palette13.setBrush(QPalette::Active, QPalette::HighlightedText, brush10);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::Active, QPalette::PlaceholderText, brush14);
#endif
        palette13.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette13.setBrush(QPalette::Inactive, QPalette::Text, brush10);
        palette13.setBrush(QPalette::Inactive, QPalette::BrightText, brush11);
        palette13.setBrush(QPalette::Inactive, QPalette::ButtonText, brush12);
        palette13.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        palette13.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette13.setBrush(QPalette::Inactive, QPalette::Highlight, brush13);
        palette13.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush10);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush14);
#endif
        palette13.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette13.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette13.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette13.setBrush(QPalette::Disabled, QPalette::BrightText, brush11);
        palette13.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette13.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette13.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        palette13.setBrush(QPalette::Disabled, QPalette::Highlight, brush13);
        palette13.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush16);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush14);
#endif
        filmedAtFilterLineEdit->setPalette(palette13);
        filmedAtFilterLineEdit->setFont(font1);
        accessCounFilterLineEdit = new QLineEdit(groupBox_2);
        accessCounFilterLineEdit->setObjectName(QString::fromUtf8("accessCounFilterLineEdit"));
        accessCounFilterLineEdit->setGeometry(QRect(220, 60, 141, 21));
        QPalette palette14;
        palette14.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette14.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette14.setBrush(QPalette::Active, QPalette::Text, brush10);
        palette14.setBrush(QPalette::Active, QPalette::BrightText, brush11);
        palette14.setBrush(QPalette::Active, QPalette::ButtonText, brush12);
        palette14.setBrush(QPalette::Active, QPalette::Base, brush9);
        palette14.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette14.setBrush(QPalette::Active, QPalette::Highlight, brush13);
        palette14.setBrush(QPalette::Active, QPalette::HighlightedText, brush10);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::Active, QPalette::PlaceholderText, brush14);
#endif
        palette14.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette14.setBrush(QPalette::Inactive, QPalette::Text, brush10);
        palette14.setBrush(QPalette::Inactive, QPalette::BrightText, brush11);
        palette14.setBrush(QPalette::Inactive, QPalette::ButtonText, brush12);
        palette14.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        palette14.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette14.setBrush(QPalette::Inactive, QPalette::Highlight, brush13);
        palette14.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush10);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush14);
#endif
        palette14.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette14.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette14.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette14.setBrush(QPalette::Disabled, QPalette::BrightText, brush11);
        palette14.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette14.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette14.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        palette14.setBrush(QPalette::Disabled, QPalette::Highlight, brush13);
        palette14.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush16);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush14);
#endif
        accessCounFilterLineEdit->setPalette(palette14);
        accessCounFilterLineEdit->setFont(font1);
        groupBox_3 = new QGroupBox(GUI);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(20, 50, 411, 711));
        QPalette palette15;
        palette15.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette15.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette15.setBrush(QPalette::Active, QPalette::Text, brush10);
        palette15.setBrush(QPalette::Active, QPalette::BrightText, brush11);
        palette15.setBrush(QPalette::Active, QPalette::ButtonText, brush12);
        palette15.setBrush(QPalette::Active, QPalette::Base, brush9);
        palette15.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette15.setBrush(QPalette::Active, QPalette::Highlight, brush13);
        palette15.setBrush(QPalette::Active, QPalette::HighlightedText, brush10);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette15.setBrush(QPalette::Active, QPalette::PlaceholderText, brush14);
#endif
        palette15.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette15.setBrush(QPalette::Inactive, QPalette::Text, brush10);
        palette15.setBrush(QPalette::Inactive, QPalette::BrightText, brush11);
        palette15.setBrush(QPalette::Inactive, QPalette::ButtonText, brush12);
        palette15.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        palette15.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette15.setBrush(QPalette::Inactive, QPalette::Highlight, brush13);
        palette15.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush10);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette15.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush14);
#endif
        palette15.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette15.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette15.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette15.setBrush(QPalette::Disabled, QPalette::BrightText, brush11);
        palette15.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette15.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette15.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        palette15.setBrush(QPalette::Disabled, QPalette::Highlight, brush13);
        palette15.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush16);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette15.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush14);
#endif
        groupBox_3->setPalette(palette15);
        groupBox_3->setFont(font1);
        updateButton = new QPushButton(groupBox_3);
        updateButton->setObjectName(QString::fromUtf8("updateButton"));
        updateButton->setGeometry(QRect(290, 620, 111, 31));
        QPalette palette16;
        palette16.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette16.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette16.setBrush(QPalette::Active, QPalette::Text, brush10);
        palette16.setBrush(QPalette::Active, QPalette::BrightText, brush11);
        palette16.setBrush(QPalette::Active, QPalette::ButtonText, brush12);
        palette16.setBrush(QPalette::Active, QPalette::Base, brush8);
        palette16.setBrush(QPalette::Active, QPalette::Window, brush8);
        palette16.setBrush(QPalette::Active, QPalette::Highlight, brush13);
        palette16.setBrush(QPalette::Active, QPalette::HighlightedText, brush10);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette16.setBrush(QPalette::Active, QPalette::PlaceholderText, brush14);
#endif
        palette16.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette16.setBrush(QPalette::Inactive, QPalette::Text, brush10);
        palette16.setBrush(QPalette::Inactive, QPalette::BrightText, brush11);
        palette16.setBrush(QPalette::Inactive, QPalette::ButtonText, brush12);
        palette16.setBrush(QPalette::Inactive, QPalette::Base, brush8);
        palette16.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        palette16.setBrush(QPalette::Inactive, QPalette::Highlight, brush13);
        palette16.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush10);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette16.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush14);
#endif
        palette16.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette16.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette16.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette16.setBrush(QPalette::Disabled, QPalette::BrightText, brush11);
        palette16.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette16.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette16.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        palette16.setBrush(QPalette::Disabled, QPalette::Highlight, brush13);
        palette16.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush16);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette16.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush14);
#endif
        updateButton->setPalette(palette16);
        updateButton->setFont(font1);
        updateButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 129, 212);"));
        addButton = new QPushButton(groupBox_3);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setGeometry(QRect(10, 620, 111, 31));
        QPalette palette17;
        palette17.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette17.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette17.setBrush(QPalette::Active, QPalette::Text, brush10);
        palette17.setBrush(QPalette::Active, QPalette::BrightText, brush11);
        palette17.setBrush(QPalette::Active, QPalette::ButtonText, brush12);
        palette17.setBrush(QPalette::Active, QPalette::Base, brush8);
        palette17.setBrush(QPalette::Active, QPalette::Window, brush8);
        palette17.setBrush(QPalette::Active, QPalette::Highlight, brush13);
        palette17.setBrush(QPalette::Active, QPalette::HighlightedText, brush10);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette17.setBrush(QPalette::Active, QPalette::PlaceholderText, brush14);
#endif
        palette17.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette17.setBrush(QPalette::Inactive, QPalette::Text, brush10);
        palette17.setBrush(QPalette::Inactive, QPalette::BrightText, brush11);
        palette17.setBrush(QPalette::Inactive, QPalette::ButtonText, brush12);
        palette17.setBrush(QPalette::Inactive, QPalette::Base, brush8);
        palette17.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        palette17.setBrush(QPalette::Inactive, QPalette::Highlight, brush13);
        palette17.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush10);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette17.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush14);
#endif
        palette17.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette17.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette17.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette17.setBrush(QPalette::Disabled, QPalette::BrightText, brush11);
        palette17.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette17.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette17.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        palette17.setBrush(QPalette::Disabled, QPalette::Highlight, brush13);
        palette17.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush16);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette17.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush14);
#endif
        addButton->setPalette(palette17);
        addButton->setFont(font1);
        addButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 129, 212);"));
        filmedAtLineEdit = new QLineEdit(groupBox_3);
        filmedAtLineEdit->setObjectName(QString::fromUtf8("filmedAtLineEdit"));
        filmedAtLineEdit->setGeometry(QRect(10, 420, 391, 21));
        QPalette palette18;
        palette18.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette18.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette18.setBrush(QPalette::Active, QPalette::Text, brush10);
        palette18.setBrush(QPalette::Active, QPalette::BrightText, brush11);
        palette18.setBrush(QPalette::Active, QPalette::ButtonText, brush12);
        palette18.setBrush(QPalette::Active, QPalette::Base, brush9);
        palette18.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette18.setBrush(QPalette::Active, QPalette::Highlight, brush13);
        palette18.setBrush(QPalette::Active, QPalette::HighlightedText, brush10);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette18.setBrush(QPalette::Active, QPalette::PlaceholderText, brush14);
#endif
        palette18.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette18.setBrush(QPalette::Inactive, QPalette::Text, brush10);
        palette18.setBrush(QPalette::Inactive, QPalette::BrightText, brush11);
        palette18.setBrush(QPalette::Inactive, QPalette::ButtonText, brush12);
        palette18.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        palette18.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette18.setBrush(QPalette::Inactive, QPalette::Highlight, brush13);
        palette18.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush10);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette18.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush14);
#endif
        palette18.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette18.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette18.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette18.setBrush(QPalette::Disabled, QPalette::BrightText, brush11);
        palette18.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette18.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette18.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        palette18.setBrush(QPalette::Disabled, QPalette::Highlight, brush13);
        palette18.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush16);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette18.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush14);
#endif
        filmedAtLineEdit->setPalette(palette18);
        filmedAtLineEdit->setFont(font1);
        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 350, 58, 16));
        QPalette palette19;
        palette19.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette19.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette19.setBrush(QPalette::Active, QPalette::Text, brush10);
        palette19.setBrush(QPalette::Active, QPalette::BrightText, brush11);
        palette19.setBrush(QPalette::Active, QPalette::ButtonText, brush12);
        palette19.setBrush(QPalette::Active, QPalette::Base, brush9);
        palette19.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette19.setBrush(QPalette::Active, QPalette::Highlight, brush13);
        palette19.setBrush(QPalette::Active, QPalette::HighlightedText, brush10);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette19.setBrush(QPalette::Active, QPalette::PlaceholderText, brush14);
#endif
        palette19.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette19.setBrush(QPalette::Inactive, QPalette::Text, brush10);
        palette19.setBrush(QPalette::Inactive, QPalette::BrightText, brush11);
        palette19.setBrush(QPalette::Inactive, QPalette::ButtonText, brush12);
        palette19.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        palette19.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette19.setBrush(QPalette::Inactive, QPalette::Highlight, brush13);
        palette19.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush10);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette19.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush14);
#endif
        palette19.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette19.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette19.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette19.setBrush(QPalette::Disabled, QPalette::BrightText, brush11);
        palette19.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette19.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette19.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        palette19.setBrush(QPalette::Disabled, QPalette::Highlight, brush13);
        palette19.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush16);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette19.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush14);
#endif
        label_6->setPalette(palette19);
        label_6->setFont(font1);
        deleteButton = new QPushButton(groupBox_3);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        deleteButton->setGeometry(QRect(150, 620, 112, 31));
        QPalette palette20;
        palette20.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette20.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette20.setBrush(QPalette::Active, QPalette::Text, brush10);
        palette20.setBrush(QPalette::Active, QPalette::BrightText, brush11);
        palette20.setBrush(QPalette::Active, QPalette::ButtonText, brush12);
        palette20.setBrush(QPalette::Active, QPalette::Base, brush8);
        palette20.setBrush(QPalette::Active, QPalette::Window, brush8);
        palette20.setBrush(QPalette::Active, QPalette::Highlight, brush13);
        palette20.setBrush(QPalette::Active, QPalette::HighlightedText, brush10);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette20.setBrush(QPalette::Active, QPalette::PlaceholderText, brush14);
#endif
        palette20.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette20.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette20.setBrush(QPalette::Inactive, QPalette::Text, brush10);
        palette20.setBrush(QPalette::Inactive, QPalette::BrightText, brush11);
        palette20.setBrush(QPalette::Inactive, QPalette::ButtonText, brush12);
        palette20.setBrush(QPalette::Inactive, QPalette::Base, brush8);
        palette20.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        palette20.setBrush(QPalette::Inactive, QPalette::Highlight, brush13);
        palette20.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush10);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette20.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush14);
#endif
        palette20.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette20.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette20.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette20.setBrush(QPalette::Disabled, QPalette::BrightText, brush11);
        palette20.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette20.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette20.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        palette20.setBrush(QPalette::Disabled, QPalette::Highlight, brush13);
        palette20.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush16);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette20.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush14);
#endif
        deleteButton->setPalette(palette20);
        deleteButton->setFont(font1);
        deleteButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 129, 212);"));
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 500, 161, 20));
        QPalette palette21;
        palette21.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette21.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette21.setBrush(QPalette::Active, QPalette::Text, brush10);
        palette21.setBrush(QPalette::Active, QPalette::BrightText, brush11);
        palette21.setBrush(QPalette::Active, QPalette::ButtonText, brush12);
        palette21.setBrush(QPalette::Active, QPalette::Base, brush9);
        palette21.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette21.setBrush(QPalette::Active, QPalette::Highlight, brush13);
        palette21.setBrush(QPalette::Active, QPalette::HighlightedText, brush10);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette21.setBrush(QPalette::Active, QPalette::PlaceholderText, brush14);
#endif
        palette21.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette21.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette21.setBrush(QPalette::Inactive, QPalette::Text, brush10);
        palette21.setBrush(QPalette::Inactive, QPalette::BrightText, brush11);
        palette21.setBrush(QPalette::Inactive, QPalette::ButtonText, brush12);
        palette21.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        palette21.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette21.setBrush(QPalette::Inactive, QPalette::Highlight, brush13);
        palette21.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush10);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette21.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush14);
#endif
        palette21.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette21.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette21.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette21.setBrush(QPalette::Disabled, QPalette::BrightText, brush11);
        palette21.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette21.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette21.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        palette21.setBrush(QPalette::Disabled, QPalette::Highlight, brush13);
        palette21.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush16);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette21.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush14);
#endif
        label_3->setPalette(palette21);
        label_3->setFont(font1);
        titleLineEdit = new QLineEdit(groupBox_3);
        titleLineEdit->setObjectName(QString::fromUtf8("titleLineEdit"));
        titleLineEdit->setGeometry(QRect(10, 370, 391, 21));
        QPalette palette22;
        palette22.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette22.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette22.setBrush(QPalette::Active, QPalette::Text, brush10);
        palette22.setBrush(QPalette::Active, QPalette::BrightText, brush11);
        palette22.setBrush(QPalette::Active, QPalette::ButtonText, brush12);
        palette22.setBrush(QPalette::Active, QPalette::Base, brush9);
        palette22.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette22.setBrush(QPalette::Active, QPalette::Highlight, brush13);
        palette22.setBrush(QPalette::Active, QPalette::HighlightedText, brush10);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette22.setBrush(QPalette::Active, QPalette::PlaceholderText, brush14);
#endif
        palette22.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette22.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette22.setBrush(QPalette::Inactive, QPalette::Text, brush10);
        palette22.setBrush(QPalette::Inactive, QPalette::BrightText, brush11);
        palette22.setBrush(QPalette::Inactive, QPalette::ButtonText, brush12);
        palette22.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        palette22.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette22.setBrush(QPalette::Inactive, QPalette::Highlight, brush13);
        palette22.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush10);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette22.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush14);
#endif
        palette22.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette22.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette22.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette22.setBrush(QPalette::Disabled, QPalette::BrightText, brush11);
        palette22.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette22.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette22.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        palette22.setBrush(QPalette::Disabled, QPalette::Highlight, brush13);
        palette22.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush16);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette22.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush14);
#endif
        titleLineEdit->setPalette(palette22);
        titleLineEdit->setFont(font1);
        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 550, 121, 16));
        QPalette palette23;
        palette23.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette23.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette23.setBrush(QPalette::Active, QPalette::Text, brush10);
        palette23.setBrush(QPalette::Active, QPalette::BrightText, brush11);
        palette23.setBrush(QPalette::Active, QPalette::ButtonText, brush12);
        palette23.setBrush(QPalette::Active, QPalette::Base, brush9);
        palette23.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette23.setBrush(QPalette::Active, QPalette::Highlight, brush13);
        palette23.setBrush(QPalette::Active, QPalette::HighlightedText, brush10);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette23.setBrush(QPalette::Active, QPalette::PlaceholderText, brush14);
#endif
        palette23.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette23.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette23.setBrush(QPalette::Inactive, QPalette::Text, brush10);
        palette23.setBrush(QPalette::Inactive, QPalette::BrightText, brush11);
        palette23.setBrush(QPalette::Inactive, QPalette::ButtonText, brush12);
        palette23.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        palette23.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette23.setBrush(QPalette::Inactive, QPalette::Highlight, brush13);
        palette23.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush10);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette23.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush14);
#endif
        palette23.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette23.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette23.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette23.setBrush(QPalette::Disabled, QPalette::BrightText, brush11);
        palette23.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette23.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette23.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        palette23.setBrush(QPalette::Disabled, QPalette::Highlight, brush13);
        palette23.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush16);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette23.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush14);
#endif
        label_2->setPalette(palette23);
        label_2->setFont(font1);
        footagePreviewLineEdit = new QLineEdit(groupBox_3);
        footagePreviewLineEdit->setObjectName(QString::fromUtf8("footagePreviewLineEdit"));
        footagePreviewLineEdit->setGeometry(QRect(10, 570, 391, 21));
        QPalette palette24;
        palette24.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette24.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette24.setBrush(QPalette::Active, QPalette::Text, brush10);
        palette24.setBrush(QPalette::Active, QPalette::BrightText, brush11);
        palette24.setBrush(QPalette::Active, QPalette::ButtonText, brush12);
        palette24.setBrush(QPalette::Active, QPalette::Base, brush9);
        palette24.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette24.setBrush(QPalette::Active, QPalette::Highlight, brush13);
        palette24.setBrush(QPalette::Active, QPalette::HighlightedText, brush10);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette24.setBrush(QPalette::Active, QPalette::PlaceholderText, brush14);
#endif
        palette24.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette24.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette24.setBrush(QPalette::Inactive, QPalette::Text, brush10);
        palette24.setBrush(QPalette::Inactive, QPalette::BrightText, brush11);
        palette24.setBrush(QPalette::Inactive, QPalette::ButtonText, brush12);
        palette24.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        palette24.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette24.setBrush(QPalette::Inactive, QPalette::Highlight, brush13);
        palette24.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush10);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette24.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush14);
#endif
        palette24.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette24.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette24.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette24.setBrush(QPalette::Disabled, QPalette::BrightText, brush11);
        palette24.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette24.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette24.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        palette24.setBrush(QPalette::Disabled, QPalette::Highlight, brush13);
        palette24.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush16);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette24.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush14);
#endif
        footagePreviewLineEdit->setPalette(palette24);
        footagePreviewLineEdit->setFont(font1);
        accessCountLineEdit = new QLineEdit(groupBox_3);
        accessCountLineEdit->setObjectName(QString::fromUtf8("accessCountLineEdit"));
        accessCountLineEdit->setGeometry(QRect(10, 520, 391, 21));
        QPalette palette25;
        palette25.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette25.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette25.setBrush(QPalette::Active, QPalette::Text, brush10);
        palette25.setBrush(QPalette::Active, QPalette::BrightText, brush11);
        palette25.setBrush(QPalette::Active, QPalette::ButtonText, brush12);
        palette25.setBrush(QPalette::Active, QPalette::Base, brush9);
        palette25.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette25.setBrush(QPalette::Active, QPalette::Highlight, brush13);
        palette25.setBrush(QPalette::Active, QPalette::HighlightedText, brush10);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette25.setBrush(QPalette::Active, QPalette::PlaceholderText, brush14);
#endif
        palette25.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette25.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette25.setBrush(QPalette::Inactive, QPalette::Text, brush10);
        palette25.setBrush(QPalette::Inactive, QPalette::BrightText, brush11);
        palette25.setBrush(QPalette::Inactive, QPalette::ButtonText, brush12);
        palette25.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        palette25.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette25.setBrush(QPalette::Inactive, QPalette::Highlight, brush13);
        palette25.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush10);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette25.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush14);
#endif
        palette25.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette25.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette25.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette25.setBrush(QPalette::Disabled, QPalette::BrightText, brush11);
        palette25.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette25.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette25.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        palette25.setBrush(QPalette::Disabled, QPalette::Highlight, brush13);
        palette25.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush16);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette25.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush14);
#endif
        accessCountLineEdit->setPalette(palette25);
        accessCountLineEdit->setFont(font1);
        creationDateLineEdit = new QLineEdit(groupBox_3);
        creationDateLineEdit->setObjectName(QString::fromUtf8("creationDateLineEdit"));
        creationDateLineEdit->setGeometry(QRect(10, 470, 391, 21));
        QPalette palette26;
        palette26.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette26.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette26.setBrush(QPalette::Active, QPalette::Text, brush10);
        palette26.setBrush(QPalette::Active, QPalette::BrightText, brush11);
        palette26.setBrush(QPalette::Active, QPalette::ButtonText, brush12);
        palette26.setBrush(QPalette::Active, QPalette::Base, brush9);
        palette26.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette26.setBrush(QPalette::Active, QPalette::Highlight, brush13);
        palette26.setBrush(QPalette::Active, QPalette::HighlightedText, brush10);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette26.setBrush(QPalette::Active, QPalette::PlaceholderText, brush14);
#endif
        palette26.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette26.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette26.setBrush(QPalette::Inactive, QPalette::Text, brush10);
        palette26.setBrush(QPalette::Inactive, QPalette::BrightText, brush11);
        palette26.setBrush(QPalette::Inactive, QPalette::ButtonText, brush12);
        palette26.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        palette26.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette26.setBrush(QPalette::Inactive, QPalette::Highlight, brush13);
        palette26.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush10);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette26.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush14);
#endif
        palette26.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette26.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette26.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette26.setBrush(QPalette::Disabled, QPalette::BrightText, brush11);
        palette26.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette26.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette26.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        palette26.setBrush(QPalette::Disabled, QPalette::Highlight, brush13);
        palette26.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush16);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette26.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush14);
#endif
        creationDateLineEdit->setPalette(palette26);
        creationDateLineEdit->setFont(font1);
        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 450, 121, 16));
        QPalette palette27;
        palette27.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette27.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette27.setBrush(QPalette::Active, QPalette::Text, brush10);
        palette27.setBrush(QPalette::Active, QPalette::BrightText, brush11);
        palette27.setBrush(QPalette::Active, QPalette::ButtonText, brush12);
        palette27.setBrush(QPalette::Active, QPalette::Base, brush9);
        palette27.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette27.setBrush(QPalette::Active, QPalette::Highlight, brush13);
        palette27.setBrush(QPalette::Active, QPalette::HighlightedText, brush10);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette27.setBrush(QPalette::Active, QPalette::PlaceholderText, brush14);
#endif
        palette27.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette27.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette27.setBrush(QPalette::Inactive, QPalette::Text, brush10);
        palette27.setBrush(QPalette::Inactive, QPalette::BrightText, brush11);
        palette27.setBrush(QPalette::Inactive, QPalette::ButtonText, brush12);
        palette27.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        palette27.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette27.setBrush(QPalette::Inactive, QPalette::Highlight, brush13);
        palette27.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush10);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette27.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush14);
#endif
        palette27.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette27.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette27.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette27.setBrush(QPalette::Disabled, QPalette::BrightText, brush11);
        palette27.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette27.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette27.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        palette27.setBrush(QPalette::Disabled, QPalette::Highlight, brush13);
        palette27.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush16);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette27.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush14);
#endif
        label_5->setPalette(palette27);
        label_5->setFont(font1);
        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 400, 71, 16));
        QPalette palette28;
        palette28.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette28.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette28.setBrush(QPalette::Active, QPalette::Text, brush10);
        palette28.setBrush(QPalette::Active, QPalette::BrightText, brush11);
        palette28.setBrush(QPalette::Active, QPalette::ButtonText, brush12);
        palette28.setBrush(QPalette::Active, QPalette::Base, brush9);
        palette28.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette28.setBrush(QPalette::Active, QPalette::Highlight, brush13);
        palette28.setBrush(QPalette::Active, QPalette::HighlightedText, brush10);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette28.setBrush(QPalette::Active, QPalette::PlaceholderText, brush14);
#endif
        palette28.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette28.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette28.setBrush(QPalette::Inactive, QPalette::Text, brush10);
        palette28.setBrush(QPalette::Inactive, QPalette::BrightText, brush11);
        palette28.setBrush(QPalette::Inactive, QPalette::ButtonText, brush12);
        palette28.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        palette28.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette28.setBrush(QPalette::Inactive, QPalette::Highlight, brush13);
        palette28.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush10);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette28.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush14);
#endif
        palette28.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette28.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette28.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette28.setBrush(QPalette::Disabled, QPalette::BrightText, brush11);
        palette28.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette28.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette28.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        palette28.setBrush(QPalette::Disabled, QPalette::Highlight, brush13);
        palette28.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush16);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette28.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush14);
#endif
        label_4->setPalette(palette28);
        label_4->setFont(font1);
        allTapesListWidget = new QListWidget(groupBox_3);
        allTapesListWidget->setObjectName(QString::fromUtf8("allTapesListWidget"));
        allTapesListWidget->setGeometry(QRect(10, 30, 391, 301));
        QPalette palette29;
        palette29.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette29.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette29.setBrush(QPalette::Active, QPalette::Text, brush10);
        palette29.setBrush(QPalette::Active, QPalette::BrightText, brush11);
        palette29.setBrush(QPalette::Active, QPalette::ButtonText, brush12);
        palette29.setBrush(QPalette::Active, QPalette::Base, brush9);
        palette29.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette29.setBrush(QPalette::Active, QPalette::Highlight, brush13);
        palette29.setBrush(QPalette::Active, QPalette::HighlightedText, brush10);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette29.setBrush(QPalette::Active, QPalette::PlaceholderText, brush14);
#endif
        palette29.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette29.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette29.setBrush(QPalette::Inactive, QPalette::Text, brush10);
        palette29.setBrush(QPalette::Inactive, QPalette::BrightText, brush11);
        palette29.setBrush(QPalette::Inactive, QPalette::ButtonText, brush12);
        palette29.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        palette29.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette29.setBrush(QPalette::Inactive, QPalette::Highlight, brush13);
        palette29.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush10);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette29.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush14);
#endif
        palette29.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette29.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette29.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette29.setBrush(QPalette::Disabled, QPalette::BrightText, brush11);
        palette29.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette29.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette29.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        palette29.setBrush(QPalette::Disabled, QPalette::Highlight, brush13);
        palette29.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush16);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette29.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush14);
#endif
        allTapesListWidget->setPalette(palette29);
        allTapesListWidget->setFont(font1);
        undoButton = new QPushButton(groupBox_3);
        undoButton->setObjectName(QString::fromUtf8("undoButton"));
        undoButton->setGeometry(QRect(80, 660, 111, 31));
        QPalette palette30;
        palette30.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette30.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette30.setBrush(QPalette::Active, QPalette::Text, brush10);
        palette30.setBrush(QPalette::Active, QPalette::BrightText, brush11);
        palette30.setBrush(QPalette::Active, QPalette::ButtonText, brush12);
        palette30.setBrush(QPalette::Active, QPalette::Base, brush8);
        palette30.setBrush(QPalette::Active, QPalette::Window, brush8);
        palette30.setBrush(QPalette::Active, QPalette::Highlight, brush13);
        palette30.setBrush(QPalette::Active, QPalette::HighlightedText, brush10);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette30.setBrush(QPalette::Active, QPalette::PlaceholderText, brush14);
#endif
        palette30.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette30.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette30.setBrush(QPalette::Inactive, QPalette::Text, brush10);
        palette30.setBrush(QPalette::Inactive, QPalette::BrightText, brush11);
        palette30.setBrush(QPalette::Inactive, QPalette::ButtonText, brush12);
        palette30.setBrush(QPalette::Inactive, QPalette::Base, brush8);
        palette30.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        palette30.setBrush(QPalette::Inactive, QPalette::Highlight, brush13);
        palette30.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush10);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette30.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush14);
#endif
        palette30.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette30.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette30.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette30.setBrush(QPalette::Disabled, QPalette::BrightText, brush11);
        palette30.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette30.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette30.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        palette30.setBrush(QPalette::Disabled, QPalette::Highlight, brush13);
        palette30.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush16);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette30.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush14);
#endif
        undoButton->setPalette(palette30);
        undoButton->setFont(font1);
        undoButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 129, 212);"));
        redoButton = new QPushButton(groupBox_3);
        redoButton->setObjectName(QString::fromUtf8("redoButton"));
        redoButton->setGeometry(QRect(220, 660, 111, 31));
        QPalette palette31;
        palette31.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette31.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette31.setBrush(QPalette::Active, QPalette::Text, brush10);
        palette31.setBrush(QPalette::Active, QPalette::BrightText, brush11);
        palette31.setBrush(QPalette::Active, QPalette::ButtonText, brush12);
        palette31.setBrush(QPalette::Active, QPalette::Base, brush8);
        palette31.setBrush(QPalette::Active, QPalette::Window, brush8);
        palette31.setBrush(QPalette::Active, QPalette::Highlight, brush13);
        palette31.setBrush(QPalette::Active, QPalette::HighlightedText, brush10);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette31.setBrush(QPalette::Active, QPalette::PlaceholderText, brush14);
#endif
        palette31.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette31.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette31.setBrush(QPalette::Inactive, QPalette::Text, brush10);
        palette31.setBrush(QPalette::Inactive, QPalette::BrightText, brush11);
        palette31.setBrush(QPalette::Inactive, QPalette::ButtonText, brush12);
        palette31.setBrush(QPalette::Inactive, QPalette::Base, brush8);
        palette31.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        palette31.setBrush(QPalette::Inactive, QPalette::Highlight, brush13);
        palette31.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush10);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette31.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush14);
#endif
        palette31.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette31.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette31.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette31.setBrush(QPalette::Disabled, QPalette::BrightText, brush11);
        palette31.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette31.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette31.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        palette31.setBrush(QPalette::Disabled, QPalette::Highlight, brush13);
        palette31.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush16);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette31.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush14);
#endif
        redoButton->setPalette(palette31);
        redoButton->setFont(font1);
        redoButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 129, 212);"));
        ModeAButton = new QPushButton(GUI);
        ModeAButton->setObjectName(QString::fromUtf8("ModeAButton"));
        ModeAButton->setGeometry(QRect(160, 21, 112, 31));
        QPalette palette32;
        palette32.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette32.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette32.setBrush(QPalette::Active, QPalette::Text, brush10);
        palette32.setBrush(QPalette::Active, QPalette::ButtonText, brush12);
        palette32.setBrush(QPalette::Active, QPalette::Base, brush8);
        palette32.setBrush(QPalette::Active, QPalette::Window, brush8);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette32.setBrush(QPalette::Active, QPalette::PlaceholderText, brush14);
#endif
        palette32.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette32.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette32.setBrush(QPalette::Inactive, QPalette::Text, brush10);
        palette32.setBrush(QPalette::Inactive, QPalette::ButtonText, brush12);
        palette32.setBrush(QPalette::Inactive, QPalette::Base, brush8);
        palette32.setBrush(QPalette::Inactive, QPalette::Window, brush8);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette32.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush14);
#endif
        palette32.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette32.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette32.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette32.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette32.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette32.setBrush(QPalette::Disabled, QPalette::Window, brush8);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette32.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush14);
#endif
        ModeAButton->setPalette(palette32);
        ModeAButton->setFont(font1);
        ModeAButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 129, 212);"));
        ModeBButton = new QPushButton(GUI);
        ModeBButton->setObjectName(QString::fromUtf8("ModeBButton"));
        ModeBButton->setGeometry(QRect(660, 21, 112, 31));
        QPalette palette33;
        palette33.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette33.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette33.setBrush(QPalette::Active, QPalette::Text, brush10);
        palette33.setBrush(QPalette::Active, QPalette::ButtonText, brush12);
        palette33.setBrush(QPalette::Active, QPalette::Base, brush8);
        palette33.setBrush(QPalette::Active, QPalette::Window, brush8);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette33.setBrush(QPalette::Active, QPalette::PlaceholderText, brush14);
#endif
        palette33.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette33.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette33.setBrush(QPalette::Inactive, QPalette::Text, brush10);
        palette33.setBrush(QPalette::Inactive, QPalette::ButtonText, brush12);
        palette33.setBrush(QPalette::Inactive, QPalette::Base, brush8);
        palette33.setBrush(QPalette::Inactive, QPalette::Window, brush8);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette33.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush14);
#endif
        palette33.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        palette33.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette33.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette33.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        palette33.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette33.setBrush(QPalette::Disabled, QPalette::Window, brush8);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette33.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush14);
#endif
        ModeBButton->setPalette(palette33);
        ModeBButton->setFont(font1);
        ModeBButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 129, 212);"));

        retranslateUi(GUI);

        QMetaObject::connectSlotsByName(GUI);
    } // setupUi

    void retranslateUi(QWidget *GUI)
    {
        GUI->setWindowTitle(QCoreApplication::translate("GUI", "Tapes", nullptr));
        saveButton->setText(QCoreApplication::translate("GUI", "->", nullptr));
        groupBox->setTitle(QCoreApplication::translate("GUI", "My list", nullptr));
        openButton->setText(QCoreApplication::translate("GUI", "Open", nullptr));
        nextButton->setText(QCoreApplication::translate("GUI", "Next", nullptr));
        openButton_2->setText(QCoreApplication::translate("GUI", "Open list view", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("GUI", "Filter", nullptr));
        label_12->setText(QCoreApplication::translate("GUI", "Access count:", nullptr));
        filterButton->setText(QCoreApplication::translate("GUI", "\342\234\205", nullptr));
        label_11->setText(QCoreApplication::translate("GUI", "Filter:", nullptr));
        label_10->setText(QCoreApplication::translate("GUI", "Filmed at:", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("GUI", "All tapes", nullptr));
        updateButton->setText(QCoreApplication::translate("GUI", "Update", nullptr));
        addButton->setText(QCoreApplication::translate("GUI", "Add", nullptr));
        label_6->setText(QCoreApplication::translate("GUI", "Title:", nullptr));
        deleteButton->setText(QCoreApplication::translate("GUI", "Delete", nullptr));
        label_3->setText(QCoreApplication::translate("GUI", "Access count:", nullptr));
        label_2->setText(QCoreApplication::translate("GUI", "Footage preview:", nullptr));
        label_5->setText(QCoreApplication::translate("GUI", "Creation date:", nullptr));
        label_4->setText(QCoreApplication::translate("GUI", "Filmed at:", nullptr));
        undoButton->setText(QCoreApplication::translate("GUI", "Undo", nullptr));
        redoButton->setText(QCoreApplication::translate("GUI", "Redo", nullptr));
        ModeAButton->setText(QCoreApplication::translate("GUI", "Mode A", nullptr));
        ModeBButton->setText(QCoreApplication::translate("GUI", "Mode B", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GUI: public Ui_GUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUI_H
