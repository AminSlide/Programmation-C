//Date de création: 04/09/2002
//Auteur: Léonard ANSELME
/*Objectif: Écrivez un programme en C nommé grand_petit.c qui crée un tableau de 100 entiers 
et calcule à la fois le numéro le plus grand et le numéro le plus petit dans ce tableau. 
Le programme doit générer des valeurs aléatoires pour remplir le tableau.*/

#include <stdio.h>
#include <stdlib.h>  // Pour srand() et rand()
#include <time.h>    // Pour time()

int main(){

    srand(time(NULL));

    int tableau[100];

    for(int i=0;i<100;i++){

        tableau[i]=rand()%1000 +1;

    }

    int petit = tableau[0];
    int grand = tableau[0];

    for(int i=1;i<100;i++){

        if (tableau[i]>grand)
        {
            grand=tableau[i];
        }

        if (tableau[i]<petit){
            petit= tableau[i];
        }

    }

    printf("Le nombre le plus petit est %d et le plus grand est %d\n",petit, grand);
    
   
}