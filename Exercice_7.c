/*
    Ecrire un programme qui affiche la liste des nombres parfaits compris entre 1 et n (n étant un
    nombre positif saisi au clavier). Un nombre est dit parfait s’il est égal à la somme de ses diviseurs.
    Exemple : 6=3+2+1
*/




#include <stdio.h>
#include <stdlib.h>
/*
  La logique à procéder :
        Dans cet exercice, on demande de l'utilisateur de taper un entier n  .le  programme affiche la liste des nombres parfaits compris entre 1 et n
    Exemple : 6=3+2+1

    Problèmes confrontés :
    Le seul souci dans cet exercice était : comment Savoir que l'entier est parfait
     un nombre parfait est un entier naturel égal à la moitié de la somme de ses diviseurs ou encore à la somme de ses diviseurs stricts.



*/
int main()
{
    int n,cpt,i,j;
    /*
        -Déclaration des variables
            *n:Il s'agit de l'entier entrée par l'utilisateur
            *i:Un compteur est souvent utilisé à l'intérieur de la boucle - une variable entière
            *cpt:Un compteur est souvent utilisé à l'intérieur pour le nombre est dit parfait s’il est égal à la somme de ses diviseurs

    */
    //Demander à l'utilisateur de saisir un entier
    printf("Donner un nombre n : ");
    //Lire l'entier saisie par l'utilisateur
    /*
        %d : le type de la valeur entrée par l'utilisateur
    */
    scanf("%d",&n);
    /*
        -Déclaration de la boucle for :
            Premièrement , Sachant que le programme voudrait afficher la liste des nombres parfaits compris entre 1 et l'entiers entrées par l'utilisateur,donc on va utiliser la boucle itérative do-while car l'opération va se répétée plusieur fois jusqu'à l'entier sera inversé  .
            Deuxièmement,i représente un compteur initialisé à 0. Il sera augmenté de 1 à chaque itération(Pas).
    */
    /*
        i : Initialiser le compteur par 1 pour que la boucle pour itére et il va s'arrêter jusqu'à le compteur atteint n ou superieure à n */
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
