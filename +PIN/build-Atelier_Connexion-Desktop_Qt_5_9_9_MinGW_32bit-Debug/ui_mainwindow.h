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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLineEdit *CODE_FORMATION;
    QLineEdit *NOM_FOR;
    QLineEdit *NOM_ENCADREUR;
    QLineEdit *TYPE_FOR;
    QLineEdit *DURE_FOR;
    QPushButton *pushButtonAjouter;
    QPushButton *Mod_2;
    QPushButton *rechercher_button_2;
    QWidget *tab_4;
    QTableView *tab_for;
    QLabel *label_18;
    QLineEdit *code_supp;
    QPushButton *supp;
    QPushButton *Mod_4;
    QPushButton *rechercher_button;
    QPushButton *qrcodegen;
    QLabel *qrcodecommande;
    QGroupBox *groupBox;
    QRadioButton *radioButton_croissant;
    QRadioButton *radioButton_dcroissant;
    QPushButton *rechercher_button_22;
    QWidget *tab;
    QPushButton *statsmed;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1047, 603);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 1141, 531));
        tabWidget->setTabShape(QTabWidget::Triangular);
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        label_13 = new QLabel(tab_3);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(40, 90, 131, 41));
        label_14 = new QLabel(tab_3);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(30, 50, 131, 21));
        label_15 = new QLabel(tab_3);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(40, 150, 131, 31));
        label_16 = new QLabel(tab_3);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(40, 220, 61, 16));
        label_17 = new QLabel(tab_3);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(40, 280, 141, 16));
        CODE_FORMATION = new QLineEdit(tab_3);
        CODE_FORMATION->setObjectName(QStringLiteral("CODE_FORMATION"));
        CODE_FORMATION->setGeometry(QRect(220, 50, 113, 20));
        NOM_FOR = new QLineEdit(tab_3);
        NOM_FOR->setObjectName(QStringLiteral("NOM_FOR"));
        NOM_FOR->setGeometry(QRect(220, 100, 113, 20));
        NOM_ENCADREUR = new QLineEdit(tab_3);
        NOM_ENCADREUR->setObjectName(QStringLiteral("NOM_ENCADREUR"));
        NOM_ENCADREUR->setGeometry(QRect(220, 160, 113, 20));
        TYPE_FOR = new QLineEdit(tab_3);
        TYPE_FOR->setObjectName(QStringLiteral("TYPE_FOR"));
        TYPE_FOR->setGeometry(QRect(220, 220, 113, 20));
        DURE_FOR = new QLineEdit(tab_3);
        DURE_FOR->setObjectName(QStringLiteral("DURE_FOR"));
        DURE_FOR->setGeometry(QRect(220, 280, 113, 20));
        pushButtonAjouter = new QPushButton(tab_3);
        pushButtonAjouter->setObjectName(QStringLiteral("pushButtonAjouter"));
        pushButtonAjouter->setGeometry(QRect(580, 210, 75, 23));
        Mod_2 = new QPushButton(tab_3);
        Mod_2->setObjectName(QStringLiteral("Mod_2"));
        Mod_2->setGeometry(QRect(580, 160, 75, 23));
        rechercher_button_2 = new QPushButton(tab_3);
        rechercher_button_2->setObjectName(QStringLiteral("rechercher_button_2"));
        rechercher_button_2->setGeometry(QRect(520, 290, 181, 28));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tab_for = new QTableView(tab_4);
        tab_for->setObjectName(QStringLiteral("tab_for"));
        tab_for->setGeometry(QRect(10, 30, 761, 271));
        label_18 = new QLabel(tab_4);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(60, 390, 111, 20));
        code_supp = new QLineEdit(tab_4);
        code_supp->setObjectName(QStringLiteral("code_supp"));
        code_supp->setGeometry(QRect(180, 390, 113, 22));
        supp = new QPushButton(tab_4);
        supp->setObjectName(QStringLiteral("supp"));
        supp->setGeometry(QRect(410, 400, 93, 28));
        Mod_4 = new QPushButton(tab_4);
        Mod_4->setObjectName(QStringLiteral("Mod_4"));
        Mod_4->setGeometry(QRect(410, 360, 93, 28));
        rechercher_button = new QPushButton(tab_4);
        rechercher_button->setObjectName(QStringLiteral("rechercher_button"));
        rechercher_button->setGeometry(QRect(410, 440, 93, 28));
        qrcodegen = new QPushButton(tab_4);
        qrcodegen->setObjectName(QStringLiteral("qrcodegen"));
        qrcodegen->setGeometry(QRect(830, 260, 200, 28));
        qrcodegen->setStyleSheet(QStringLiteral(""));
        qrcodecommande = new QLabel(tab_4);
        qrcodecommande->setObjectName(QStringLiteral("qrcodecommande"));
        qrcodecommande->setEnabled(true);
        qrcodecommande->setGeometry(QRect(830, 60, 200, 200));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(qrcodecommande->sizePolicy().hasHeightForWidth());
        qrcodecommande->setSizePolicy(sizePolicy);
        qrcodecommande->setMinimumSize(QSize(200, 200));
        qrcodecommande->setMaximumSize(QSize(200, 200));
        groupBox = new QGroupBox(tab_4);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(810, 350, 191, 111));
        radioButton_croissant = new QRadioButton(groupBox);
        radioButton_croissant->setObjectName(QStringLiteral("radioButton_croissant"));
        radioButton_croissant->setGeometry(QRect(10, 40, 161, 20));
        radioButton_dcroissant = new QRadioButton(groupBox);
        radioButton_dcroissant->setObjectName(QStringLiteral("radioButton_dcroissant"));
        radioButton_dcroissant->setGeometry(QRect(10, 80, 171, 20));
        rechercher_button_22 = new QPushButton(tab_4);
        rechercher_button_22->setObjectName(QStringLiteral("rechercher_button_22"));
        rechercher_button_22->setGeometry(QRect(110, 440, 181, 28));
        tabWidget->addTab(tab_4, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        statsmed = new QPushButton(tab);
        statsmed->setObjectName(QStringLiteral("statsmed"));
        statsmed->setGeometry(QRect(770, 430, 181, 28));
        tabWidget->addTab(tab, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1047, 26));
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
        label_13->setText(QApplication::translate("MainWindow", "nom formation", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "code formation", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "nom encadreur", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "type formation", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "dure formation", Q_NULLPTR));
        pushButtonAjouter->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        Mod_2->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        rechercher_button_2->setText(QApplication::translate("MainWindow", "ajouter un code pin ", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Ajouter formation", Q_NULLPTR));
        label_18->setText(QApplication::translate("MainWindow", "code formation", Q_NULLPTR));
        supp->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        Mod_4->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        rechercher_button->setText(QApplication::translate("MainWindow", "Rechercher", Q_NULLPTR));
        qrcodegen->setText(QApplication::translate("MainWindow", "G\303\251n\303\251rer QR Code", Q_NULLPTR));
        qrcodecommande->setText(QString());
        groupBox->setTitle(QApplication::translate("MainWindow", "Trier  NOM par ordre:", Q_NULLPTR));
        radioButton_croissant->setText(QApplication::translate("MainWindow", "Alphab\303\251tique Croissant", Q_NULLPTR));
        radioButton_dcroissant->setText(QApplication::translate("MainWindow", "Alphab\303\251tique D\303\251croissant", Q_NULLPTR));
        rechercher_button_22->setText(QApplication::translate("MainWindow", "ajouter un code pin ", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "Afficher formation", Q_NULLPTR));
        statsmed->setText(QApplication::translate("MainWindow", "Appliquer la statistique", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Statistique", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
