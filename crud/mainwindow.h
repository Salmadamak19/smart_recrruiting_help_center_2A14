#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "Matriel.h"
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
//les bouttons
    void on_pushButtonAjouter_clicked();
    void on_supp_clicked();
    //void on_modifier_clicked();

private:
    Ui::MainWindow *ui;
     Matriel Mat;
};

#endif // MAINWINDOW_H
