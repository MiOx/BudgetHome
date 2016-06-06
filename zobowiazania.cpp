#include "zobowiazania.h"
#include "ui_zobowiazania.h"

zobowiazania::zobowiazania(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::zobowiazania)
{
    ui->setupUi(this);
}

zobowiazania::~zobowiazania()
{
    delete ui;
}
