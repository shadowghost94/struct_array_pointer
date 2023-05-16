#include <iostream>
using namespace std;

int const NMOIS = 12 ;
struct enreg
    {
        int stock;
        float prix;
        int ventes [NMOIS];
    };

void raz(enreg *recuperation)
    {

        for(int i=0; i<NMOIS; i++)
        {
            recuperation->ventes[i]=0;
        }
    };

void affiche_enreg( enreg affichage)
    {
        cout<<"Stock: "<<affichage.stock<<" kg"<<endl;
        cout<<"Prix: "<<affichage.prix<<" FCFA"<<endl;
        for(int i=0, j=1; i<NMOIS; i++, j++)
            {
                cout<<"Ventes mois "<<j<<" = "<<affichage.ventes[i]<<endl;
            }
    };

int main()
    {
        enreg instance1;
        instance1.stock =25;
        instance1.prix=17500;
        for(int i=0,j=1; i<NMOIS; i++, j++)
            {
                cout<<"Ventes mois "<<j<<" : ";
                cin>>instance1.ventes[i];
            };

        affiche_enreg(instance1);
        cout<<endl<<endl;
        cout<<"Nous remplaçons toute les valeurs de l'instance par zero...."<<endl<<endl;
        raz(&instance1);
        cout<<"Affichage à nouveau de l'instance...."<<endl;
        affiche_enreg(instance1);
    }
