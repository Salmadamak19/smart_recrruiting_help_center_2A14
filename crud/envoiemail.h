#ifndef ENVOIEMAIL_H
#define ENVOIEMAIL_H

#include <QMainWindow>

namespace Ui {
class Envoiemail;
}

class Envoiemail : public QMainWindow
{
    Q_OBJECT

public:
    explicit Envoiemail(QWidget *parent = nullptr);
    ~Envoiemail();

private:
    Ui::Envoiemail *ui;
};

#endif // ENVOIEMAIL_H
