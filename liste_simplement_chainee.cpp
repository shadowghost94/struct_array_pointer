#include <iostream>
using namespace std;

typedef struct Node Node;
struct Node
{
    int valeur;
    Node *suivant;
};

typedef struct LinkedList LinkedList;
struct LinkedList
{
    int id;
    int taille;
    Node *tete;
};

/*
 * fonction d'initialisation de la liste
 * la fonction prend en paramètre l'adresse de la strcuture à initialiser et un identifiant de type int pour
 * permettre
 * d'identifier la liste au cas où on manipulerait plusieurs listes
 */

void Initialisation(LinkedList *list, int identifiant)
    {
        list->id=identifiant;        /*affectation d'un identifiant à id*/
        list->taille=0;              /*taille de la liste est initiliser à zéro car pas de cellule pour l'instant*/
        list->tete->valeur=0;       /*valeur 0 par défaut à la valeur de la tete de lecture*/
        list->tete->suivant=nullptr; /*le pointeur suivant point sur nullptr car aucune cellule sur laquelle                            pointer pour l'instant*/
    };

void ajoutDebut(LinkedList *list, int val)
    {
        //création de la nouvelle cellule à ajouter
        Node *cellule= new Node;

        //affectation d'une valeur à la nouvelle cellule crée
        cellule->valeur = val;

        //linkage de la tête à la nouvelle cellule
        list->tete->suivant = cellule;
        cellule->suivant =nullptr;
        list->taille+=1;
    };

void ajoutFin(LinkedList *list, int val)
    {
        //création de la nouvelle cellule
        Node *cellule= new Node;
        //affectation d'une valeur à la nouvelle cellule
        cellule->valeur=val;

        //création du current
        Node *cur= new Node;

        //initialisation du current à la tête de la liste
        cur = list->tete;
        //positionnement à la fin de la liste
        while(cur ->suivant != nullptr)
            {
                cur++;
            };
        cur->suivant=cellule->suivant;
        cellule->suivant=nullptr;
        list->taille+=1;
    };

void affiche(LinkedList list)
    {
        Node *cur= new Node;
        cur= list.tete;
        while(cur->suivant != nullptr)
            {
                cout<<cur->valeur<<endl;
                //cur++;
            }
    };


int main()
    {
        LinkedList list1;
        Initialisation(&list1, 1);
        ajoutDebut(&list1, 5);
        ajoutFin(&list1, 7);
        affiche(list1);
    }
