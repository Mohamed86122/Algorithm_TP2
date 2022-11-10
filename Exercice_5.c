/*
Enonc�
Ecrire un programme qui saisit un nombre et qui d�termine combien de fois il est divisible par deux.
    Ex�: 8 est divisible 3 fois par 2
    4 est divisible 2 fois par 2

*/
/*

  La logique � proc�der�:
        Dans cet exercice, on demande de l'utilisateur de taper un entier .le  programme va divis� la valeur sur 2 et affiche combien de fois il est divisible par deux.

    Probl�mes confront�s�:
    Le seul souci dans cet exercice �tait�: combien de fois il est divisible par deux.

*/



#include <stdio.h>
#include <stdlib.h>

int main()
{
     /*
        -D�claration des variables
            *a:Il s'agit de l'entier entr�e par l'utilisateur (Nombre de ligne)
            *i:Un compteur est souvent utilis� � l'int�rieur de la boucle - une variable enti�re
    */
    int a,i;

    //Demander � l'utilisateur de saisir un entier
    printf("Donner un entier ");
    //Lire l'entier saisie par l'utilisateur
    /*
        %d : le type de la valeur entr�e par l'utilisateur
    */
    scanf("%d",&a);

     /*
        -D�claration de la boucle do while :
            Premi�rement , Sachant que le programme voudrait d�terminer combien de fois il est divisible par deux � partir de la valeur entr�e par l'utilisateur.Donc on va utiliser la boucle it�rative pour car l'op�ration va se r�p�t�e 3 fois.
            Deuxi�mement,i repr�sente un compteur initialis� � 1. Il sera augment� de 1 � chaque it�ration(Pas), jusqu'� ce le diviseur a pour modulos diff�rent de 0.

        -a = a/2
            * Op�ration qui calcul la division sur 2
            * a/2
                - pour a = 8 /2  va s'affecter � la variable a = 4
                La boucle  it�rer jusqu'� qu'il trouve une valeur differente de 0 dans le modulos d'une op�ration
            * result re�oit les valeurs de compteur i

        -printf("%d",i);
            *affichage de r�sultat
    */

    //Initialiser la variable par 0
    i=0;
    do
    {
        a=a/2;
        //Incrementation
        i++;

        //Condition d'arr�t
    }while(a%2==0);

    printf("%d",i);

    return 0;
}
