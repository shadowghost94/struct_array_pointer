#include <iostream>
using namespace std;

struct point
    {
        char c;     //nom de l'instance de point
        int x,y;    //cordonnées de l'instance de point
    };

//
point receiver(point *ptr)
    {
        point newstruct;    //création d'une nouvelle instance de point pour y stocker les modfications apportées

        //modification.....
        newstruct.c = ptr-> c;
        newstruct.x = ptr ->y;
        newstruct.y = ptr ->x;

        return newstruct;//retourne la nouvelle instance crée
    };

void affich_struct(point receiver)
    {
        cout<<receiver.c<<"("<<receiver.x<<", "<<receiver.y<<")"<<endl<<endl;
    };

int main()
    {
        point acceuil_instance;
        point instance0;
        instance0.c='A';
        instance0.x=0;
        instance0.y=1;
      affich_struct(instance0);
      cout<<"Après modification....."<<endl;

      acceuil_instance=receiver(&instance0);
      affich_struct(acceuil_instance);
    }
