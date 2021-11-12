/*#include "mail.h"

mail::mail()
{

}
void Matriel:: sendMail()
{

    Smtphakim* smtp = new Smtphakim(ui->name->text(),ui->mail_2->text(), ui->titre->text(), ui->contenue->text());
        connect(smtp, SIGNAL(status(QString)), this, SLOT(mailSent(QString)));

        if( !files.isEmpty() )
            smtp->sendMail(ui->uname->text(), ui->rcpt->text() , ui->subject->text(),ui->msg->toPlainText(), files );
        else
            smtp->sendMail(ui->uname->text(), ui->rcpt->text() , ui->subject->text(),ui->msg->toPlainText());
    }
}

void gestion_produit_fournisseur::mailSent(QString status)
{
    if(status == "Message sent")
        QMessageBox::warning( 0, tr( "Qt Simple SMTP client" ), tr( "Message sent!\n\n" ) );
}
*/
