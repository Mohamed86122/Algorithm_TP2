/*

Ecrire un programme qui permet de saisir un entier puis le programme affiche son Factoriel
Exemple  pour a=5 5 !=5*4*3*2*1


*/

/*

  La logique à procéder :
        Dans cet exercice, on demande de l'utilisateur de taper un entier .le  programme va calculer le factorielle d'un nombre donnée
        pour calculer le factoriel il faudra utiliser une formule f=f*i;
        f : signifie la variable entré par l'utilisateur
        i : signifie le compteur de la boucle la boucle va itérer et va multiplier le factoriel avec le compteur i jusqu'à

    Problèmes confrontés :
    Le seul souci dans cet exercice était : Comment trouver la formule pour calculer le factoriel.

*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
     /*
        -Déclaration des variables
            *a:Il s'agit de l'entier entrée par l'utilisateur
            *i:Un compteur est souvent utilisé à l'intérieur de la boucle - une variable entière
    */
    int a,i,f;
    //Demander à l'utilisateur de saisir un entier
    printf("Saisir un nombre ");
    //Lire l'entier saisie par l'utilisateur
    /*
        %d : le type de la valeur entrée par l'utilisateur
    */
    scanf("%d",&a);
    f=1;
    for(i=0;i<a;i++)
    {
        f=f*i;

    }
    printf(f);

    system("pause");

}
