/*
    Ecrire un programme qui permet de saisir un entier �  a � puis le programme affiche les 3 entiers qui le suivent
    Exemple : a= 5                          r�sultat   6    7   8


*/
/*
  La logique � proc�der�:
        Dans cet exercice, on demande de l'utilisateur de taper des entiers jusqu'il tape 0.le  programme s�arr�te et affiche tous les entiers entr�es avant de taper 0 mais de fa�on inverse

    Problemes confront�s�:
    Le seul souci dans cet exercice �tait�: comment afficher tous les entiers de la mani�re demand�



*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        -D�claration des variables
            *a:Il s'agit de l'entier entr�e par l'utilisateur
            *i:Un compteur est souvent utilis� � l'int�rieur de la boucle - une variable enti�re
            *result:Affiche le r�sultat de l'op�ration
    */

    int a,i,result;

    //Demander � l'utilisateur de saisir un entier
    printf("Saisir un entier ");
    //Lire l'entier saisie par l'utilisateur
    /*
        %d : le type de la valeur entr�e par l'utilisateur
    */
    scanf("%d",&a);

    //Initialiser la variable par 0
    result=0;

     /*
        -D�claration de la boucle pour :
            Premi�rement , Sachant que le programme voudrait afficher les 3 entiers suivant � partir de la valeur entr�e par l'utilisateur.Si le programme nous a demand� d'afficher seulement un seul entier suivant,l'op�ration va �tre dans une seule ligne mais le programme a demand� d'afficher les 3 entiers suivant ,donc on va utiliser la boucle it�rative pour car l'op�ration va se r�p�t�e 3 fois.
            Deuxi�mement,i repr�sente un compteur initialis� � 1. Il sera augment� de 1 � chaque it�ration(Pas), jusqu'� ce qu'il soit �gal � 3.

        -result = a+i
            * Op�ration qui calcul les 3 entiers qui le suivent
            * a+i
                - pour a = 5 + i= 1 va s'affecter � la variable result = 6
            * result re�oit les valeurs de l'op�ration a+i

        -printf("%d",result);
            *affichage de r�sultat
    */

    for(i=1;i<=3;i++)
    {
        result=a+i;
        printf("%d",result);
    }
    //Retour � la ligne
    printf("\n");
    system("pause");
}
