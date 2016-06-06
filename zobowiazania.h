#ifndef ZOBOWIAZANIA_H
#define ZOBOWIAZANIA_H

#include <QDialog>

namespace Ui {
class zobowiazania;
}

class zobowiazania : public QDialog
{
    Q_OBJECT

public:
    explicit zobowiazania(QWidget *parent = 0);
    ~zobowiazania();

private:
    Ui::zobowiazania *ui;
};

#endif // ZOBOWIAZANIA_H
