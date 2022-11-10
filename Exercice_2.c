/*
   Ecrire un programme qui permet de saisir un ensemble d’entiers obligatoirement positifs  jusqu’à taper 0. Là, le  programme s’arrête et affiche l’entier résultat comme suit
    Ex 1 :     1  2  3  4  0   on affiche : 4321
    Ex 2 :     5  4  7  0       on affiche : 745

*/

/*
  La logique à procéder :
        Dans cet exercice, on demande de l'utilisateur de taper des entiers jusqu'il tape 0.le  programme s’arrête et affiche tous les entiers entrées avant de taper 0 mais de façon inverse

    Problèmes confrontés :
    Le seul souci dans cet exercice était : comment afficher tous les entiers de la maniére demandé



*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        -Déclaration des variables
            *a:Il s'agit de l'entier entrée par l'utilisateur
            *i:Un compteur est souvent utilisé à l'intérieur de la boucle - une variable entière
            *result:Affiche le résultat de l'opération
    */

    int a,result,i;
     /*
        i : Initialiser le compteur par 1 pour que la boucle do-while itére au moins une fois
    */

    i=1;
    /*
        -Déclaration de la boucle do-while :
            Premièrement , Sachant que le programme voudrait afficher tous les entiers entrées par l'utilisateur jusqu'à l'utilisateur entre le 0,donc on va utiliser la boucle itérative do-while car l'opération va se répétée plusieur fois jusqu'à l'utilisateur tape 0 ,La boucle va s'arrêter.
            Deuxièmement,i représente un compteur initialisé à 1. Il sera augmenté de 1 à chaque itération(Pas), jusqu'à ce qu'il tape 0.
    */
    do
    {
        //Demander à l'utilisateur de saisir un entier
        printf("Donner un nombre ");
        //Lire l'entier saisie par l'utilisateur
        /*
            %d : le type de la valeur entrée par l'utilisateur
        */
        scanf("%d",&a);
        //Si a la valeur entrée par l'utilisateur est supérieure de 0, je l'affecte vers la variable result
        if(a>0)
        {
            result=a;
        }
        //Incrementation de compteur i de la boucle do-while
        i++;
    }
    while(a>0);

    //Affichage de résultat
    printf("%d %d %d \n ",result);
    //retour à la ligne
    printf("\n");
    system("pause");

}
