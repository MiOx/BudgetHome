#include "dochody.h"
#include "ui_dochody.h"
#include "mainwindow.h"
dochody::dochody(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dochody)
{
    ui->setupUi(this);

    left=0;
    right=0;

    isComma=false;
    Opt=this->Nooperation;
    isleft=false;
    isright=false;
    ScreenClear=false;

}

dochody::~dochody()
{
    delete ui;
}

void dochody::AddToScreen(QString Text)
{
    QString oldtext= ui->Polewyswietlania->text();
    if(oldtext.length()>=ui->Polewyswietlania->maxLength())return;
    if(oldtext=="0")oldtext.clear();
 if(ScreenClear)
 {
         oldtext.clear();
         ScreenClear=false;
}
    oldtext.append(Text);
            ui->Polewyswietlania->setText(oldtext);
}
void dochody::OptionClicked()
{
    if(!isleft)
{
      left=ui->Polewyswietlania->text().toDouble();
        isleft=true;
        ScreenClear=true;

}
}
void dochody::on_jeden_clicked()
{
    AddToScreen("1");
}

void  dochody::on_dwa_clicked()
{
     AddToScreen("2");
}
void  dochody::on_trzy_clicked()
{
    AddToScreen("3");
}
void  dochody::on_cztery_clicked()
{
   AddToScreen("4");
}
void  dochody::on_piec_clicked()
{
    AddToScreen("5");
}
void  dochody::on_szesc_clicked()
{
    AddToScreen("6");
}
void  dochody::on_siedem_clicked()
{
   AddToScreen("7");
}
void  dochody::on_osiem_clicked()
{
    AddToScreen("8");
}
void dochody::on_dziewiec_clicked()
{ AddToScreen("9");
}
void dochody::on_zero_clicked()
{
    AddToScreen("0");
}

void dochody::on_akceptuj_clicked()
{



}

