/*

Exercice 8�: Ecrire un programme qui permet de saisir 10 entiers puis le programme affiche le Max et
le Min des entiers saisis
Exemple�: 1 5 8 4 6 9 7 Le Max est�: 9 Le Min est�: 1

*/



/*
  La logique � proc�der�:
        Dans cet exercice, on demande de l'utilisateur de taper un entiers .le  programme affiche affiche le Max et le Min des entiers saisis
    Probl�mes confront�s�:
    Le seul souci dans cet exercice �tait�: comment afficher le max et le min des entiers

*/



#include <stdio.h>
#include <stdlib.h>

int main()
{
     /*
        -D�claration des variables
            *n:Il s'agit de l'entier entr�e par l'utilisateur
            *max:Une variable enti�re est souvent utilis� pour savoir la maximum
            *min:Une variable enti�re est souvent utilis� pour savoir la minimum


    */
    int i, n, max, min;
    /*
        i : Initialiser le compteur par 0 pour que la boucle for it�re au moins une fois
    */
    for(i=1; i<=10; i++)
    {
        //Demander � l'utilisateur de saisir un entier

        printf("entrer un nombre %d: ",i);

        //Lire l'entier saisie par l'utilisateur
        /*
            %d : le type de la valeur entr�e par l'utilisateur
        */
        scanf("%d ", &n);
        if(i==1)
        {
            max = min = n;
        }
        else if(n < min)
        {
            min = n;
        }
        else if (n > max)
        {
            max = n ;
        }
    }
    printf("le max %d, et le min %d", max, min);
    return 0;

}
