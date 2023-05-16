#include <iostream>
using namespace std;

struct point
{
    char c;
    int x,y;
};

void affiche_contenu(point *A)
    {
        cout<<"le point "<<A->c<<" d'abcisse "<<A->x<<" et d'ordonnées "<<A->y<<endl<<endl;

        /*affectation de nouvelle valeur qui éventuellemet pourront agir sur l'adresse passer en paramètre*/
        A->c='D';
        A->x=12;
        A->y=10;

    };

int main()
    {
        point B;//création d'une instance de la structure "point"
        //affectation de valeur à cahque champ
        B.c='C';
        B.x=5;
        B.y=7;

//affichage du contenu de l'instance B par la foncion affiche_contenu
        affiche_contenu(&B);

/*reaffichage du contenu de l'instance de la structure B après modification pour montrer l'effet l'utilisation des pointeurs*/
        cout<<"le point "<<B.c<<" d'abcisse "<<B.x<<" et d'ordonnées "<<B.y<<endl;
    }
