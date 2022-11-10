/*
    Ecrire un programme qui permet de saisir un entier ��a�� puis le programme affiche des �toiles de a
ligne

*/
/*
  La logique � proc�der�:
        Dans cet exercice, on demande de l'utilisateur de taper des entiers .L'entier entr�es saisie est le nombre de ligne .le  programme  affiche les �toiles et les espaces de la maniere demand� et avec le nombre de ligne respect�
        pour nbr : nombre de ligne
           pour nbr = 5
        pour la 1 ere ligne :
             - le nombre des �toiles est 5 au fur et � mesure de saut de ligne les etoiles diminue par 1
             - le nombre des espaces est 0 au fur et � mesure de saut de ligne les espaces augmente par 1
    Probl�mes confront�s�:
    Le seul souci dans cet exercice �tait�: comment afficher les �toiles



*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        -D�claration des variables
            *nbr:Il s'agit de l'entier entr�e par l'utilisateur (Nombre de ligne)
            *i:Un compteur est souvent utilis� � l'int�rieur de la boucle - une variable enti�re
            *j:Un compteur est souvent utilis� � l'int�rieur de la boucle - une variable enti�re
            *k:Un compteur est souvent utilis� � l'int�rieur de la boucle - une variable enti�re

    */
    int nbr,i,j,k;

    //Demander � l'utilisateur de saisir un entier
    printf("Donner le nombre des lignes ");
    //Lire l'entier saisie par l'utilisateur
    /*
        %d : le type de la valeur entr�e par l'utilisateur
    */
    scanf("%d",&nbr);


    //Boucle des lignes
    for(i=0;i<nbr;i++)
    {   //Boucle des espaces
        for(k=0;k<i+1;k++)
        {
            printf(" ");

        }
        //Boucle des �toiles
        for(j=0;j<nbr-i;j++)
        {
            printf("*");
        }
        //Instruction de saut de ligne
        printf("\n");

    }





}
