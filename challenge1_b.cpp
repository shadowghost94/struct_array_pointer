#include <iostream>
using namespace std;

struct point
{
    char c;
    int x,y;
};

void affiche_contenu(point A)
    {
        cout<<"le point "<<A.c<<" d'abcisse "<<A.x<<" et d'ordonnées "<<A.y<<endl<<endl;

    };

int main()
    {
        point B;
        B.c='C';
        B.x=5;
        B.y=7;

        affiche_contenu(B);
    }
