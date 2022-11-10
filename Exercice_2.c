/*
   Ecrire un programme qui permet de saisir un ensemble d�entiers obligatoirement positifs  jusqu�� taper 0. L�, le  programme s�arr�te et affiche l�entier r�sultat comme suit
    Ex 1 :     1  2  3  4  0   on affiche : 4321
    Ex 2 :     5  4  7  0       on affiche : 745

*/

/*
  La logique � proc�der�:
        Dans cet exercice, on demande de l'utilisateur de taper des entiers jusqu'il tape 0.le  programme s�arr�te et affiche tous les entiers entr�es avant de taper 0 mais de fa�on inverse

    Probl�mes confront�s�:
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

    int a,result,i;
     /*
        i : Initialiser le compteur par 1 pour que la boucle do-while it�re au moins une fois
    */

    i=1;
    /*
        -D�claration de la boucle do-while :
            Premi�rement , Sachant que le programme voudrait afficher tous les entiers entr�es par l'utilisateur jusqu'� l'utilisateur entre le 0,donc on va utiliser la boucle it�rative do-while car l'op�ration va se r�p�t�e plusieur fois jusqu'� l'utilisateur tape 0 ,La boucle va s'arr�ter.
            Deuxi�mement,i repr�sente un compteur initialis� � 1. Il sera augment� de 1 � chaque it�ration(Pas), jusqu'� ce qu'il tape 0.
    */
    do
    {
        //Demander � l'utilisateur de saisir un entier
        printf("Donner un nombre ");
        //Lire l'entier saisie par l'utilisateur
        /*
            %d : le type de la valeur entr�e par l'utilisateur
        */
        scanf("%d",&a);
        //Si a la valeur entr�e par l'utilisateur est sup�rieure de 0, je l'affecte vers la variable result
        if(a>0)
        {
            result=a;
        }
        //Incrementation de compteur i de la boucle do-while
        i++;
    }
    while(a>0);

    //Affichage de r�sultat
    printf("%d %d %d \n ",result);
    //retour � la ligne
    printf("\n");
    system("pause");

}
