//Date de création: 27/09/2002
//Auteur: Léonard ANSELME
// Objectif de ce programme: écrire un programme 
//qui prend deux entiers, a et b, en entrée et affiche la valeur de a élevé à la puissance b. 

#include <stdio.h>

int main()

{
    int a=3, b=3, resultat=1, compteur; // initialisation des entier a et b et d'une variable resultat pour stocker l'opération  a^b
    //resultat a été initialisé à 1, pour traiter le cas b=0

    for(compteur=1; compteur<b+1; compteur++  )/*création d'une boucle for, qui va permettre de multiplier a par lui même b fois
    
    */

    {
        resultat*=a; // resultat de l'opération a^b

    }

    printf("%d\n", resultat);//affichage du résultat
    return 0;

}






