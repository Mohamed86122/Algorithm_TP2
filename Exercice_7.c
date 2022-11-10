/*
    Ecrire un programme qui affiche la liste des nombres parfaits compris entre 1 et n (n �tant un
    nombre positif saisi au clavier). Un nombre est dit parfait s�il est �gal � la somme de ses diviseurs.
    Exemple : 6=3+2+1
*/




#include <stdio.h>
#include <stdlib.h>
/*
  La logique � proc�der�:
        Dans cet exercice, on demande de l'utilisateur de taper un entier n  .le  programme affiche la liste des nombres parfaits compris entre 1 et n
    Exemple : 6=3+2+1

    Probl�mes confront�s�:
    Le seul souci dans cet exercice �tait�: comment Savoir que l'entier est parfait
     un nombre parfait est un entier naturel �gal � la moiti� de la somme de ses diviseurs ou encore � la somme de ses diviseurs stricts.



*/
int main()
{
    int n,cpt,i,j;
    /*
        -D�claration des variables
            *n:Il s'agit de l'entier entr�e par l'utilisateur
            *i:Un compteur est souvent utilis� � l'int�rieur de la boucle - une variable enti�re
            *cpt:Un compteur est souvent utilis� � l'int�rieur pour le nombre est dit parfait s�il est �gal � la somme de ses diviseurs

    */
    //Demander � l'utilisateur de saisir un entier
    printf("Donner un nombre n : ");
    //Lire l'entier saisie par l'utilisateur
    /*
        %d : le type de la valeur entr�e par l'utilisateur
    */
    scanf("%d",&n);
    /*
        -D�claration de la boucle for :
            Premi�rement , Sachant que le programme voudrait afficher la liste des nombres parfaits compris entre 1 et l'entiers entr�es par l'utilisateur,donc on va utiliser la boucle it�rative do-while car l'op�ration va se r�p�t�e plusieur fois jusqu'� l'entier sera invers�  .
            Deuxi�mement,i repr�sente un compteur initialis� � 0. Il sera augment� de 1 � chaque it�ration(Pas).
    */
    /*
        i : Initialiser le compteur par 1 pour que la boucle pour it�re et il va s'arr�ter jusqu'� le compteur atteint n ou superieure � n */
    for (  i = 1; i <= n; i++)
    {
        //Initialisation de cpt par 0
        cpt=0;
        for ( j = 1; j <= i/2; j++)
        {
            //si le modulos de i est 0 le cpt augmente un pas en plus
            if(i%j == 0)
            {
                //Incrementation Par 1
                cpt+=j;
            }
        }
        if (i == cpt)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
