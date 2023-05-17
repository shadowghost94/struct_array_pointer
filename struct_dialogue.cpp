#include <iostream>
using namespace std;

const int LG_NOM = 30;
struct date
    {
        int jour;
        int mois;
        int annee;
    };

struct personne
    {
        char nom[LG_NOM + 1];
        date date_embauche;
        date date_poste;
    };



void fonction_remplir(personne *personne0)
    {
        char yes_or_no;
        cout<<"veuillez entrer votre Nom: ";
        cin>>personne0->nom;
        cout<<"Date embauche (jj mm aa) : ";
        cin>>personne0->date_embauche.jour>>personne0->date_embauche.mois>>personne0->date_embauche.annee;
            cout<<"date poste = date embauche ? (O/N) ";
            cin>>yes_or_no;
                if( yes_or_no == 'O')
                    {
                        personne0->date_poste.jour = personne0->date_embauche.jour;
                        personne0->date_poste.mois = personne0->date_embauche.mois;
                        personne0->date_poste.annee = personne0->date_embauche.annee;
                    }else
                    {
                        cout<<"Date poste (jj mm aa) : ";
                        cin>>personne0->date_poste.jour>>personne0->date_poste.mois>>personne0->date_poste.annee;
                    }

    };

void fonction_affiche(personne personne1)
    {
        cout<<"Nom: "<<personne1.nom<<endl;
        cout<<"date embauche (jj mm aa): "<<personne1.date_embauche.jour<<" "<<personne1.date_embauche.mois<<" "<<personne1.date_embauche.annee<<endl;
        cout<<"date poste ( jj mm aa ): "<<personne1.date_poste.jour<<" "<<personne1.date_poste.mois<<" "<<personne1.date_poste.annee<<endl;
    };

int main()
    {
        personne ma_personne;
        fonction_remplir(&ma_personne);
        fonction_affiche(ma_personne);
    }
