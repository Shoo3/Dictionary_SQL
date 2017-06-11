/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionPath;
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout_3;
    QPushButton *search_button;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QPushButton *remove_button;
    QGridLayout *gridLayout;
    QLineEdit *def4_lineEdit;
    QLineEdit *def1_lineEdit;
    QCheckBox *verb_checkBox;
    QLineEdit *new_word_lineEdit;
    QLineEdit *def2_lineEdit;
    QCheckBox *adjective_checkBox;
    QCheckBox *adverb_checkBox;
    QCheckBox *noun_checkBox;
    QPushButton *add_button;
    QLineEdit *def3_lineEdit;
    QPushButton *list_all_button;
    QLineEdit *search_lineEdit;
    QTableView *dictionary_tableView;
    QLabel *status_label;
    QMenuBar *menuBar;
    QMenu *menuSettings;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(746, 408);
        actionPath = new QAction(MainWindow);
        actionPath->setObjectName(QStringLiteral("actionPath"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        search_button = new QPushButton(centralWidget);
        search_button->setObjectName(QStringLiteral("search_button"));

        gridLayout_3->addWidget(search_button, 0, 2, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(label, 3, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 2, 1, 1, 1);

        remove_button = new QPushButton(centralWidget);
        remove_button->setObjectName(QStringLiteral("remove_button"));

        gridLayout_3->addWidget(remove_button, 1, 2, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        def4_lineEdit = new QLineEdit(centralWidget);
        def4_lineEdit->setObjectName(QStringLiteral("def4_lineEdit"));

        gridLayout->addWidget(def4_lineEdit, 5, 0, 1, 4);

        def1_lineEdit = new QLineEdit(centralWidget);
        def1_lineEdit->setObjectName(QStringLiteral("def1_lineEdit"));

        gridLayout->addWidget(def1_lineEdit, 2, 0, 1, 4);

        verb_checkBox = new QCheckBox(centralWidget);
        verb_checkBox->setObjectName(QStringLiteral("verb_checkBox"));

        gridLayout->addWidget(verb_checkBox, 0, 1, 1, 1);

        new_word_lineEdit = new QLineEdit(centralWidget);
        new_word_lineEdit->setObjectName(QStringLiteral("new_word_lineEdit"));

        gridLayout->addWidget(new_word_lineEdit, 1, 0, 1, 4);

        def2_lineEdit = new QLineEdit(centralWidget);
        def2_lineEdit->setObjectName(QStringLiteral("def2_lineEdit"));

        gridLayout->addWidget(def2_lineEdit, 3, 0, 1, 4);

        adjective_checkBox = new QCheckBox(centralWidget);
        adjective_checkBox->setObjectName(QStringLiteral("adjective_checkBox"));

        gridLayout->addWidget(adjective_checkBox, 0, 2, 1, 1);

        adverb_checkBox = new QCheckBox(centralWidget);
        adverb_checkBox->setObjectName(QStringLiteral("adverb_checkBox"));

        gridLayout->addWidget(adverb_checkBox, 0, 3, 1, 1);

        noun_checkBox = new QCheckBox(centralWidget);
        noun_checkBox->setObjectName(QStringLiteral("noun_checkBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(noun_checkBox->sizePolicy().hasHeightForWidth());
        noun_checkBox->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(noun_checkBox, 0, 0, 1, 1);

        add_button = new QPushButton(centralWidget);
        add_button->setObjectName(QStringLiteral("add_button"));

        gridLayout->addWidget(add_button, 8, 0, 1, 4);

        def3_lineEdit = new QLineEdit(centralWidget);
        def3_lineEdit->setObjectName(QStringLiteral("def3_lineEdit"));

        gridLayout->addWidget(def3_lineEdit, 4, 0, 1, 4);


        gridLayout_3->addLayout(gridLayout, 4, 0, 1, 3);

        list_all_button = new QPushButton(centralWidget);
        list_all_button->setObjectName(QStringLiteral("list_all_button"));

        gridLayout_3->addWidget(list_all_button, 1, 0, 1, 2);

        search_lineEdit = new QLineEdit(centralWidget);
        search_lineEdit->setObjectName(QStringLiteral("search_lineEdit"));

        gridLayout_3->addWidget(search_lineEdit, 0, 0, 1, 2);


        gridLayout_2->addLayout(gridLayout_3, 0, 6, 1, 1);

        dictionary_tableView = new QTableView(centralWidget);
        dictionary_tableView->setObjectName(QStringLiteral("dictionary_tableView"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(dictionary_tableView->sizePolicy().hasHeightForWidth());
        dictionary_tableView->setSizePolicy(sizePolicy2);
        dictionary_tableView->setIconSize(QSize(0, 0));

        gridLayout_2->addWidget(dictionary_tableView, 0, 0, 1, 5);

        status_label = new QLabel(centralWidget);
        status_label->setObjectName(QStringLiteral("status_label"));

        gridLayout_2->addWidget(status_label, 1, 0, 1, 3);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 746, 22));
        menuSettings = new QMenu(menuBar);
        menuSettings->setObjectName(QStringLiteral("menuSettings"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuSettings->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuSettings->addSeparator();
        menuSettings->addAction(actionPath);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionPath->setText(QApplication::translate("MainWindow", "Set path", Q_NULLPTR));
        search_button->setText(QApplication::translate("MainWindow", "Search", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Type:", Q_NULLPTR));
        remove_button->setText(QApplication::translate("MainWindow", "Remove", Q_NULLPTR));
        verb_checkBox->setText(QApplication::translate("MainWindow", "Verb", Q_NULLPTR));
        new_word_lineEdit->setText(QString());
        adjective_checkBox->setText(QApplication::translate("MainWindow", "Adjective", Q_NULLPTR));
        adverb_checkBox->setText(QApplication::translate("MainWindow", "Adverb", Q_NULLPTR));
        noun_checkBox->setText(QApplication::translate("MainWindow", "Noun", Q_NULLPTR));
        add_button->setText(QApplication::translate("MainWindow", " Add vocabulary", Q_NULLPTR));
        list_all_button->setText(QApplication::translate("MainWindow", "List all", Q_NULLPTR));
        search_lineEdit->setText(QString());
        status_label->setText(QApplication::translate("MainWindow", "Status", Q_NULLPTR));
        menuSettings->setTitle(QApplication::translate("MainWindow", "Settings", Q_NULLPTR));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
