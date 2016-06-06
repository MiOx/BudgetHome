#include "prognoza.h"
#include "ui_prognoza.h"

Prognoza::Prognoza(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Prognoza)
{
    ui->setupUi(this);
}

Prognoza::~Prognoza()
{
    delete ui;
}
