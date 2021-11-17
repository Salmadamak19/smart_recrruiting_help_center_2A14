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

  void on_supp_clicked();

  void on_Mod_2_clicked();

  void on_rechercher_button_clicked();

  //void on_trier_button_clicked();

  void on_qrcodegen_clicked();

private:
    Ui::MainWindow *ui;
     Formation Etmp;
};

#endif // MAINWINDOW_H
