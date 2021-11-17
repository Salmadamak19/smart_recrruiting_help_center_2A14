/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *CODE_FORMATION;
    QLineEdit *NOM_FOR;
    QLineEdit *NOM_ENCADREUR;
    QLineEdit *TYPE_FOR;
    QLineEdit *DURE_FOR;
    QLineEdit *ADRESSE;
    QPushButton *pushButtonAjouter;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *DATERES;
    QLineEdit *NBRJOURS;
    QWidget *tab_2;
    QTableView *tab_for;
    QLabel *label_10;
    QLineEdit *code_supp;
    QPushButton *id_supp;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QWidget *tab_3;
    QLabel *label_7;
    QLineEdit *cin_2;
    QTextBrowser *textBrowser;
    QLabel *label_11;
    QWidget *tab_4;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_29;
    QLabel *label_30;
    QLabel *label_31;
    QLineEdit *ID_3;
    QLineEdit *CIN_3;
    QLineEdit *NOM_3;
    QLineEdit *PRENOM_3;
    QLineEdit *NUMTEL_3;
    QLineEdit *ADRESSE_3;
    QLabel *label_32;
    QLabel *label_33;
    QLineEdit *DATERES_3;
    QLineEdit *NBRJOURS_3;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1064, 529);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(20, 0, 1031, 501));
        tabWidget->setTabShape(QTabWidget::Triangular);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 90, 91, 41));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 50, 101, 21));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 150, 111, 31));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(40, 220, 61, 16));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(40, 280, 141, 16));
        label_6 = new QLabel(tab);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(40, 340, 101, 20));
        CODE_FORMATION = new QLineEdit(tab);
        CODE_FORMATION->setObjectName(QStringLiteral("CODE_FORMATION"));
        CODE_FORMATION->setGeometry(QRect(220, 50, 113, 20));
        NOM_FOR = new QLineEdit(tab);
        NOM_FOR->setObjectName(QStringLiteral("NOM_FOR"));
        NOM_FOR->setGeometry(QRect(220, 100, 113, 20));
        NOM_ENCADREUR = new QLineEdit(tab);
        NOM_ENCADREUR->setObjectName(QStringLiteral("NOM_ENCADREUR"));
        NOM_ENCADREUR->setGeometry(QRect(220, 160, 113, 20));
        TYPE_FOR = new QLineEdit(tab);
        TYPE_FOR->setObjectName(QStringLiteral("TYPE_FOR"));
        TYPE_FOR->setGeometry(QRect(220, 220, 113, 20));
        DURE_FOR = new QLineEdit(tab);
        DURE_FOR->setObjectName(QStringLiteral("DURE_FOR"));
        DURE_FOR->setGeometry(QRect(220, 280, 113, 20));
        ADRESSE = new QLineEdit(tab);
        ADRESSE->setObjectName(QStringLiteral("ADRESSE"));
        ADRESSE->setGeometry(QRect(220, 340, 111, 20));
        pushButtonAjouter = new QPushButton(tab);
        pushButtonAjouter->setObjectName(QStringLiteral("pushButtonAjouter"));
        pushButtonAjouter->setGeometry(QRect(910, 390, 75, 23));
        label_8 = new QLabel(tab);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(450, 50, 131, 21));
        label_9 = new QLabel(tab);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(450, 120, 181, 21));
        DATERES = new QLineEdit(tab);
        DATERES->setObjectName(QStringLiteral("DATERES"));
        DATERES->setGeometry(QRect(680, 50, 113, 20));
        NBRJOURS = new QLineEdit(tab);
        NBRJOURS->setObjectName(QStringLiteral("NBRJOURS"));
        NBRJOURS->setGeometry(QRect(680, 120, 113, 20));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tab_for = new QTableView(tab_2);
        tab_for->setObjectName(QStringLiteral("tab_for"));
        tab_for->setGeometry(QRect(20, 40, 611, 331));
        label_10 = new QLabel(tab_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(720, 100, 81, 16));
        code_supp = new QLineEdit(tab_2);
        code_supp->setObjectName(QStringLiteral("code_supp"));
        code_supp->setGeometry(QRect(820, 100, 113, 22));
        id_supp = new QPushButton(tab_2);
        id_supp->setObjectName(QStringLiteral("id_supp"));
        id_supp->setGeometry(QRect(830, 190, 93, 28));
        pushButton_2 = new QPushButton(tab_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(830, 230, 93, 28));
        pushButton_3 = new QPushButton(tab_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(830, 270, 93, 28));
        pushButton_4 = new QPushButton(tab_2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(830, 310, 93, 28));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        label_7 = new QLabel(tab_3);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(40, 50, 47, 14));
        cin_2 = new QLineEdit(tab_3);
        cin_2->setObjectName(QStringLiteral("cin_2"));
        cin_2->setGeometry(QRect(130, 50, 113, 20));
        textBrowser = new QTextBrowser(tab_3);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(130, 110, 256, 192));
        label_11 = new QLabel(tab_3);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(40, 180, 47, 14));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        label_12 = new QLabel(tab_4);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(30, 20, 71, 21));
        label_13 = new QLabel(tab_4);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(30, 60, 81, 41));
        label_14 = new QLabel(tab_4);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(30, 130, 61, 31));
        label_29 = new QLabel(tab_4);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(30, 190, 61, 16));
        label_30 = new QLabel(tab_4);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(30, 250, 141, 16));
        label_31 = new QLabel(tab_4);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(30, 320, 101, 20));
        ID_3 = new QLineEdit(tab_4);
        ID_3->setObjectName(QStringLiteral("ID_3"));
        ID_3->setGeometry(QRect(240, 20, 113, 20));
        CIN_3 = new QLineEdit(tab_4);
        CIN_3->setObjectName(QStringLiteral("CIN_3"));
        CIN_3->setGeometry(QRect(240, 80, 113, 20));
        NOM_3 = new QLineEdit(tab_4);
        NOM_3->setObjectName(QStringLiteral("NOM_3"));
        NOM_3->setGeometry(QRect(240, 130, 113, 20));
        PRENOM_3 = new QLineEdit(tab_4);
        PRENOM_3->setObjectName(QStringLiteral("PRENOM_3"));
        PRENOM_3->setGeometry(QRect(240, 190, 113, 20));
        NUMTEL_3 = new QLineEdit(tab_4);
        NUMTEL_3->setObjectName(QStringLiteral("NUMTEL_3"));
        NUMTEL_3->setGeometry(QRect(240, 250, 113, 20));
        ADRESSE_3 = new QLineEdit(tab_4);
        ADRESSE_3->setObjectName(QStringLiteral("ADRESSE_3"));
        ADRESSE_3->setGeometry(QRect(240, 320, 111, 20));
        label_32 = new QLabel(tab_4);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(500, 20, 131, 21));
        label_33 = new QLabel(tab_4);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setGeometry(QRect(490, 90, 181, 21));
        DATERES_3 = new QLineEdit(tab_4);
        DATERES_3->setObjectName(QStringLiteral("DATERES_3"));
        DATERES_3->setGeometry(QRect(670, 20, 113, 20));
        NBRJOURS_3 = new QLineEdit(tab_4);
        NBRJOURS_3->setObjectName(QStringLiteral("NBRJOURS_3"));
        NBRJOURS_3->setGeometry(QRect(670, 90, 113, 20));
        pushButton = new QPushButton(tab_4);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(830, 300, 93, 28));
        tabWidget->addTab(tab_4, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1064, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Gestion des Clients", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "nom formation", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "code formation", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "nom encadreur", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "type formation", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "dure formation", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Adresse Email :", Q_NULLPTR));
        pushButtonAjouter->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Date de reservation :", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "Nombre de jours \303\240 reserver :", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Ajouter formation", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "Identifiant :", Q_NULLPTR));
        id_supp->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "Trier", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "Rechercher", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Afficher Client", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "Id :", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "Avis :", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Avis", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "Identifiant :", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "Cin :", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "Nom :", Q_NULLPTR));
        label_29->setText(QApplication::translate("MainWindow", "Prenom :", Q_NULLPTR));
        label_30->setText(QApplication::translate("MainWindow", "Numero de telephone :", Q_NULLPTR));
        label_31->setText(QApplication::translate("MainWindow", "Adresse Email :", Q_NULLPTR));
        label_32->setText(QApplication::translate("MainWindow", "Date de reservation :", Q_NULLPTR));
        label_33->setText(QApplication::translate("MainWindow", "Nombre de jours \303\240 reserver :", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "modifier", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "vide", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
