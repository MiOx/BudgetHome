#ifndef PROGNOZA_H
#define PROGNOZA_H

#include <QDialog>

namespace Ui {
class Prognoza;
}

class Prognoza : public QDialog
{
    Q_OBJECT

public:
    explicit Prognoza(QWidget *parent = 0);
    ~Prognoza();

private:
    Ui::Prognoza *ui;
};

#endif // PROGNOZA_H
