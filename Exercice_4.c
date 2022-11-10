/*
Ecrire un programme qui permet de saisir un entier a, puis le programme l�affiche invers�
Ex�: a= 1234 le r�sultat sera 4321

*/

/*
  La logique � proc�der�:
        Dans cet exercice, on demande de l'utilisateur de taper un entiers .le  programme affiche l'entier entr�es invers�
    Probl�mes confront�s�:
    Le seul souci dans cet exercice �tait�: comment afficher l'entier de mani�re invers�



*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
     /*
        -D�claration des variables
            *a:Il s'agit de l'entier entr�e par l'utilisateur
            *result:Un compteur est souvent utilis� � l'int�rieur de la boucle - une variable enti�re
            *modulo:Un compteur est souvent utilis� � l'int�rieur de la boucle - une variable enti�re


    */
    int a,result,modulo,i;

    //Demander � l'utilisateur de saisir un entier
    printf("Taper un entier ");
    //Lire l'entier saisie par l'utilisateur
    /*
        %d : le type de la valeur entr�e par l'utilisateur
    */
    scanf("%d",&a);
    /*
        -D�claration de la boucle do-while :
            Premi�rement , Sachant que le programme voudrait afficher  l'entiers entr�es par l'utilisateur ,donc on va utiliser la boucle it�rative do-while car l'op�ration va se r�p�t�e plusieur fois jusqu'� l'entier sera invers�  .
            Deuxi�mement,i repr�sente un compteur initialis� � 0. Il sera augment� de 1 � chaque it�ration(Pas).
    */
    /*
        i : Initialiser le compteur par 0 pour que la boucle do-while it�re au moins une fois
    */
    i=0;
    while(a!=0)
    {
        //modulo re�oit le modulos de a
        modulo = a%10;
        //a re�oit la division de a sur 10
        a=a/10;
        //result re�oit le result *10 plus le modulo
        result=result*10+modulo;
        //Incrementation
        i++;
    }
    //Affichage de resultat
    printf("Le resultat est  %d",result);
}
