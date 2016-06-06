#ifndef DOCHODY_H
#define DOCHODY_H

#include <QDialog>

namespace Ui {
class dochody;
}

class dochody : public QDialog
{
    Q_OBJECT

public:
    explicit dochody(QWidget *parent = 0);
    ~dochody();

private slots:
    void on_jeden_clicked();
    void on_dwa_clicked();
    void on_trzy_clicked();
    void on_cztery_clicked();
    void on_piec_clicked();
    void on_szesc_clicked();
    void on_siedem_clicked();
    void on_osiem_clicked();
    void on_dziewiec_clicked();
    void on_zero_clicked();
    void on_akceptuj_clicked();

private:
    Ui::dochody *ui;
    void  AddToScreen(QString Text);
    void OptionClicked();
    void NextOperation();
    enum Operation
       {

           Nooperation

       };
    QString ShowOperation();

    double left;
    double right;
     bool isleft;
     int Opt;
     bool isright;
     bool isComma;
     bool ScreenClear;
};

#endif // DOCHODY_H
