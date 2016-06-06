#include "mainwindow.h"
#include "ui_mainwindow.h"
 #include "zobowiazania.h"
#include "ui_zobowiazania.h"
#include "dochody.h"
#include "prognoza.h"

Inwestycje::Inwestycje(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Inwestycje)
{
   ui->setupUi(this);

   for(int i=0; i==3; i++)
   {
       okno[i] = new QMainWindow (this);

       okno[1]->connect(ui->actionZobowiazania, SIGNAL(triggered(bool)),this,SLOT(on_actionZobowiazania_triggered()));
  okno[2]->connect(ui->actionPrognoza, SIGNAL(triggered(bool)),this,SLOT(on_actionPrognoza_triggered()));
    okno[1]->connect(ui->actionZobowiazania,SIGNAL(triggered(bool)),this,SLOT(close()));
       okno[i]->hide();
   }

}


Inwestycje::~Inwestycje()
{
    delete ui;
}
void Inwestycje::noweokno()
{


    okno[0]->show();
    okno[1]->hide();
    okno[2]->hide();

}
void Inwestycje::noweokno1()
{



    okno[1]->show();
    okno[0]->hide();
    okno[2]->hide();
}

void Inwestycje::noweokno2()
{





    okno[2]->show();
    okno[0]->hide();
    okno[1]->hide();
}


void Inwestycje::on_actionZobowiazania_triggered()

    {    zobowiazania zob;
         zob.setModal(true);
              zob.exec();


    }


void Inwestycje::on_dochody_clicked()
{
    dochody doch;
        doch.setModal(true);
        doch.exec();
}



void Inwestycje::on_actionPrognoza_triggered()
{
   Prognoza prog;
   prog.setModal(true);
   prog.exec();

}


