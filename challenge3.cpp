/*ce programme lit en donnée des valeur pour remplir le tableau de type structure où chaque cellule est une structure*/

#include <iostream>
using namespace std;

int const NP = 4;      //constate NP de valeur 4

struct point
    {
        char c;     //nom du point
        int x,y;    //coordonnées du point
    };


/**
 * fonction destinée à l'affichage des instance
 * il reçoit en paramètre un tableau de même type que le astructure point
 * il ne renvoie rien comme valeur
 */
void affiche(point tableau[NP])
    {
        for(int i=0; i<NP; i++)
            {
                cout<<tableau[i].c<<"( "<<tableau[i].x<<", "<<tableau[i].y<<" )"<<endl;
            };
    };

int main()
    {
        point courbe[NP];
        for(int i=0; i<NP; i++)
            {
                cout<<"veuillez entrer le nom du point en utilisant un caractère: ";
                cin>>courbe[i].c;
                cout<<"veuillez entrer la valeur de l'abcisse: ";
                cin>>courbe[i].x;
                cout<<"veuillez entrer la valeur de l'ordonnée: ";
                cin>>courbe[i].y;
            }

        affiche(courbe);
    }
