//Date de création: 04/09/2002
//Auteur: Léonard ANSELME et Tristan BELLET
/*Objectif de ce programme: écrire un programme nommé tri.c qui crée un tableau de 100 entiers, puis trie ces entiers par ordre croissant
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int SIZE = 100;
    int tab[100] = {};     // Déclaration d'un tableau de 100 éléments initialisé à zéro
    int tmp;
    
    srand(time(NULL));       // Initialisation de la génération de nombres aléatoires 

    for (int i = 0; i < 100; i++) {
        tab[i] = rand() % 100 + 1;  // Remplissage du tableau "tab" avec des nombres aléatoires de 1 à 100
    }

    printf("Tableau initial :\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%4d", tab[i]);  // Affichage du tableau initial
    }
    printf("\n\n");

    // Algorithme de tri à bulles
    for (int i = 0; i < SIZE - 1; i++) {
        for (int j = 0; j < SIZE - i - 1; j++) {
            // Comparaison d'éléments adjacents pour le tri croissant
            if (tab[j] > tab[j + 1]) {
                tmp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = tmp;
            }
        }
    }

    printf("Tableau trié en ordre croissant :\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%4d", tab[i]);  // Affichage du tableau trié en ordre croissant
    }

    return 0;
}
