/*
    Ecrire un programme qui permet de saisir un entier « a » puis le programme affiche des étoiles de a
ligne

*/
/*
  La logique à procéder :
        Dans cet exercice, on demande de l'utilisateur de taper des entiers .L'entier entrées saisie est le nombre de ligne .le  programme  affiche les étoiles et les espaces de la maniere demandé et avec le nombre de ligne respecté
        pour nbr : nombre de ligne
           pour nbr = 5
        pour la 1 ere ligne :
             - le nombre des étoiles est 5 au fur et à mesure de saut de ligne les etoiles diminue par 1
             - le nombre des espaces est 0 au fur et à mesure de saut de ligne les espaces augmente par 1
    Problèmes confrontés :
    Le seul souci dans cet exercice était : comment afficher les étoiles



*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        -Déclaration des variables
            *nbr:Il s'agit de l'entier entrée par l'utilisateur (Nombre de ligne)
            *i:Un compteur est souvent utilisé à l'intérieur de la boucle - une variable entière
            *j:Un compteur est souvent utilisé à l'intérieur de la boucle - une variable entière
            *k:Un compteur est souvent utilisé à l'intérieur de la boucle - une variable entière

    */
    int nbr,i,j,k;

    //Demander à l'utilisateur de saisir un entier
    printf("Donner le nombre des lignes ");
    //Lire l'entier saisie par l'utilisateur
    /*
        %d : le type de la valeur entrée par l'utilisateur
    */
    scanf("%d",&nbr);


    //Boucle des lignes
    for(i=0;i<nbr;i++)
    {   //Boucle des espaces
        for(k=0;k<i+1;k++)
        {
            printf(" ");

        }
        //Boucle des étoiles
        for(j=0;j<nbr-i;j++)
        {
            printf("*");
        }
        //Instruction de saut de ligne
        printf("\n");

    }





}
