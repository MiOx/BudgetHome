#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "zobowiazania.h"
#include "mainwindow.h"
#include "dochody.h"
#include <QObject>
#include <QtGui>
#include <QtCore>
#include <QTextEdit>
#include "prognoza.h"

namespace Ui {
class Inwestycje;
}

class Inwestycje : public QMainWindow
{
    Q_OBJECT

public:
    explicit Inwestycje(QWidget *parent = 0);
    ~Inwestycje();

private slots:




    void on_actionZobowiazania_triggered();

    void on_dochody_clicked();

    void on_actionPrognoza_triggered();




private:
    Ui::Inwestycje *ui;
    QMainWindow * okno[3];
public slots:
    void noweokno();
    void noweokno1();
    void noweokno2();
};




#endif // MAINWINDOW_H






