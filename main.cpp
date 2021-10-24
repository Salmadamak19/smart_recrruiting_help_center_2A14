#include <iostream>
#include<string>
#include"header.h"


using namespace std;

int main()
{ compte c1 ;
float m,solde;

c1.saisir();
c1.affiche();
   cout << "donenr le montant"  << endl;
    cin >> m ;
  /*  solde=c1.recharge(m);
    cout<<"votre solde est : "<<solde<<endl;*/
    c1.recharge(m);
    return 0;
}
