/*

Ecrire un programme qui permet de saisir un entier puis le programme affiche son Factoriel
Exemple� pour a=5 5�!=5*4*3*2*1


*/

/*

  La logique � proc�der�:
        Dans cet exercice, on demande de l'utilisateur de taper un entier .le  programme va calculer le factorielle d'un nombre donn�e
        pour calculer le factoriel il faudra utiliser une formule f=f*i;
        f : signifie la variable entr� par l'utilisateur
        i : signifie le compteur de la boucle la boucle va it�rer et va multiplier le factoriel avec le compteur i jusqu'�

    Probl�mes confront�s�:
    Le seul souci dans cet exercice �tait�: Comment trouver la formule pour calculer le factoriel.

*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
     /*
        -D�claration des variables
            *a:Il s'agit de l'entier entr�e par l'utilisateur
            *i:Un compteur est souvent utilis� � l'int�rieur de la boucle - une variable enti�re
    */
    int a,i,f;
    //Demander � l'utilisateur de saisir un entier
    printf("Saisir un nombre ");
    //Lire l'entier saisie par l'utilisateur
    /*
        %d : le type de la valeur entr�e par l'utilisateur
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
