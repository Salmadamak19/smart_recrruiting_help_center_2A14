#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "formation.h"
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

    void on_pushButtonAjouter_clicked();

  void on_code_supp_clicked();

private:
    Ui::MainWindow *ui;
     Formation Etmp;
};

#endif // MAINWINDOW_H
