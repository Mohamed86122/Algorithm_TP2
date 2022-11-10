/*
Enoncé
Ecrire un programme qui saisit un nombre et qui détermine combien de fois il est divisible par deux.
    Ex : 8 est divisible 3 fois par 2
    4 est divisible 2 fois par 2

*/
/*

  La logique à procéder :
        Dans cet exercice, on demande de l'utilisateur de taper un entier .le  programme va divisé la valeur sur 2 et affiche combien de fois il est divisible par deux.

    Problèmes confrontés :
    Le seul souci dans cet exercice était : combien de fois il est divisible par deux.

*/



#include <stdio.h>
#include <stdlib.h>

int main()
{
     /*
        -Déclaration des variables
            *a:Il s'agit de l'entier entrée par l'utilisateur (Nombre de ligne)
            *i:Un compteur est souvent utilisé à l'intérieur de la boucle - une variable entière
    */
    int a,i;

    //Demander à l'utilisateur de saisir un entier
    printf("Donner un entier ");
    //Lire l'entier saisie par l'utilisateur
    /*
        %d : le type de la valeur entrée par l'utilisateur
    */
    scanf("%d",&a);

     /*
        -Déclaration de la boucle do while :
            Premièrement , Sachant que le programme voudrait déterminer combien de fois il est divisible par deux à partir de la valeur entrée par l'utilisateur.Donc on va utiliser la boucle itérative pour car l'opération va se répétée 3 fois.
            Deuxièmement,i représente un compteur initialisé à 1. Il sera augmenté de 1 à chaque itération(Pas), jusqu'à ce le diviseur a pour modulos différent de 0.

        -a = a/2
            * Opération qui calcul la division sur 2
            * a/2
                - pour a = 8 /2  va s'affecter à la variable a = 4
                La boucle  itérer jusqu'à qu'il trouve une valeur differente de 0 dans le modulos d'une opération
            * result reçoit les valeurs de compteur i

        -printf("%d",i);
            *affichage de résultat
    */

    //Initialiser la variable par 0
    i=0;
    do
    {
        a=a/2;
        //Incrementation
        i++;

        //Condition d'arrêt
    }while(a%2==0);

    printf("%d",i);

    return 0;
}
