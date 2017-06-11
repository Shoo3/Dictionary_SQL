#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->dictionary_tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    ui->search_lineEdit->setPlaceholderText("Type in your search:");
    ui->new_word_lineEdit->setPlaceholderText("New word");
    ui->def1_lineEdit->setPlaceholderText("Definition 1");
    ui->def2_lineEdit->setPlaceholderText("Definition 2");
    ui->def3_lineEdit->setPlaceholderText("Definition 3");
    ui->def4_lineEdit->setPlaceholderText("Definition 4");

    if(!connOpen()){
        ui->status_label->setText("Failed to open database");
    }
    else{
        ui->status_label->setText("Connected...");
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_add_button_clicked()
{
    int set_checks = 0; /*Counts how many checkBoxes were checked*/

    QList<QCheckBox*> all_checkBoxes = this->findChildren<QCheckBox*>();
    QList<QCheckBox*>::iterator it;

    /*Iterate through all checkBoxes*/
    for(it=all_checkBoxes.begin(); it!=all_checkBoxes.end();++it){
        if((*it)->isChecked()){
            set_checks++;
        }
    }

    if(set_checks==0){
        QMessageBox::information(this, tr("WARNING"), tr("Please check one checkBox!"));
    }
    else if(set_checks>1){
        QMessageBox::information(this, tr("WARNING"), tr("Please check only one checkBox!"));
    }
    else{
        if(ui->new_word_lineEdit->text()==""){
            QMessageBox::information(this, tr("WARNING"), tr("Please type in your new word"));
        }
        else{
            cout << "Add button clicked!" << endl;

            QString add_word = ui->new_word_lineEdit->text();
            QString def1 = ui->def1_lineEdit->text();
            QString def2 = ui->def2_lineEdit->text();
            QString def3 = ui->def3_lineEdit->text();
            QString def4 = ui->def4_lineEdit->text();
            QString type;

            if(ui->noun_checkBox->isChecked()){
                type = "noun";
            }
            else if(ui->verb_checkBox->isChecked()){
                type = "verb";
            }
            else if(ui->adjective_checkBox->isChecked()){
                type = "adjective";
            }
            else if(ui->adverb_checkBox->isChecked()){
                type = "adverb";
            }


            if(!connOpen()){
                qDebug() << "Failed to open database";
                return;
            }

            connOpen();

            QSqlQuery qry;
            qry.prepare("insert into dictionary (word,definition1,definition2,definition3,definition4,type) values ('"+add_word+"','"+def1+"','"+def2+"','"+def3+"','"+def4+"','"+type+"')");

            if(qry.exec()){
                QMessageBox::information(this,tr("Insert"),tr("Added"));
                connClose();
            }
            else{
                QMessageBox::critical(this,tr("Error"),qry.lastError().text());
            }

        }
    }
}

void MainWindow::on_search_button_clicked()
{
    if(ui->search_lineEdit->text()==""){
        QMessageBox::information(this, tr("WARNING"), tr("Please type in the word you are searching for"));
    }
    else{
        cout << "Search button clicked!" << endl;

        QString search_word = ui->search_lineEdit->text();
        QString search_length = QString::number(search_word.size());
        search_word = ui->search_lineEdit->text();

        if(!connOpen()){
            qDebug() << "Failed to open database";
            return;
        }

        QSqlQueryModel* modal = new QSqlQueryModel();

        connOpen();

        QSqlQuery qry;
        qry.prepare("select * from dictionary where substr(word,1,"+search_length+")='"+search_word+"'");

        if(qry.exec()){
            modal->setQuery(qry);
            ui->dictionary_tableView->setModel(modal);
            connClose();
        }
        else{
            QMessageBox::critical(this,tr("Error"),qry.lastError().text());
        }
    }
}

void MainWindow::on_remove_button_clicked()
{
    if(ui->search_lineEdit->text()==""){
        QMessageBox::information(this, tr("WARNING"), tr("Please type in the word you want to remove"));
    }
    else{
       cout << "Remove button clicked!" << endl;

       QString del_word = ui->search_lineEdit->text();

       if(!connOpen()){
           qDebug() << "Failed to open database";
           return;
       }

       connOpen();
       QSqlQuery qry;
       qry.prepare("Delete from dictionary where word='"+del_word+"'");


       if(qry.exec()){
           QMessageBox::information(this,tr("Delete"),tr("Deleted"));
           connClose();
       }
       else{
           QMessageBox::critical(this,tr("Error"),qry.lastError().text());
       }
    }
}

void MainWindow::on_list_all_button_clicked()
{
    cout << "List all button clicked!" << endl;

    QSqlQueryModel* modal = new QSqlQueryModel();

    connOpen();
    QSqlQuery* qry = new QSqlQuery(mydb);

    qry->prepare("select word,definition1,definition2,definition3,definition4 from dictionary");
    qry->exec();
    modal->setQuery(*qry);
    ui->dictionary_tableView->setModel(modal);

    connClose();

    for(int row=0; row<modal->rowCount(); row++){
        ui->dictionary_tableView->setRowHeight(row,60);
    }
}
