/*
Ecrire un programme qui permet de saisir un entier a, puis le programme l’affiche inversé
Ex : a= 1234 le résultat sera 4321

*/

/*
  La logique à procéder :
        Dans cet exercice, on demande de l'utilisateur de taper un entiers .le  programme affiche l'entier entrées inversé
    Problèmes confrontés :
    Le seul souci dans cet exercice était : comment afficher l'entier de manière inversé



*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
     /*
        -Déclaration des variables
            *a:Il s'agit de l'entier entrée par l'utilisateur
            *result:Un compteur est souvent utilisé à l'intérieur de la boucle - une variable entière
            *modulo:Un compteur est souvent utilisé à l'intérieur de la boucle - une variable entière


    */
    int a,result,modulo,i;

    //Demander à l'utilisateur de saisir un entier
    printf("Taper un entier ");
    //Lire l'entier saisie par l'utilisateur
    /*
        %d : le type de la valeur entrée par l'utilisateur
    */
    scanf("%d",&a);
    /*
        -Déclaration de la boucle do-while :
            Premièrement , Sachant que le programme voudrait afficher  l'entiers entrées par l'utilisateur ,donc on va utiliser la boucle itérative do-while car l'opération va se répétée plusieur fois jusqu'à l'entier sera inversé  .
            Deuxièmement,i représente un compteur initialisé à 0. Il sera augmenté de 1 à chaque itération(Pas).
    */
    /*
        i : Initialiser le compteur par 0 pour que la boucle do-while itére au moins une fois
    */
    i=0;
    while(a!=0)
    {
        //modulo reçoit le modulos de a
        modulo = a%10;
        //a reçoit la division de a sur 10
        a=a/10;
        //result reçoit le result *10 plus le modulo
        result=result*10+modulo;
        //Incrementation
        i++;
    }
    //Affichage de resultat
    printf("Le resultat est  %d",result);
}
