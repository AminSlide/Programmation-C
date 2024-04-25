// Nom de fichier: binaire.c
// Auteur:Amin BELGUIDUM
// Objectif : Affichage d'un nombre en format binaire


#include <stdio.h> 
int main() {
    int n = 13; // Déclare et initialise la variable n à 13 (nombre décimal à convertir en binaire).

    int max = 0; // Déclare la variable max, qui n'est pas utilisée dans le programme.

    int q = n; // Initialise q avec la valeur de n.

    int tab[32]; // Déclare un tableau de 32 éléments pour stocker les chiffres binaires.

    for (int i = 0; i < 32; i++) {
        tab[i] = 0; // Initialise chaque élément du tableau à 0.
    }

    int ind = 31; // Initialise un indice pour suivre la position dans le tableau.

    while (q >= 2) { // Convertit le nombre en binaire tant que q est supérieur ou égal à 2.
        tab[ind] = q % 2; // Stocke le reste de la division de q par 2 dans le tableau.

        ind--; // Décrémente l'indice.

        q = (q - (q % 2)) / 2; // Met à jour q en le divisant par 2 après soustraction du reste.
    }

    tab[ind] = q; // Stocke la dernière valeur de q dans le tableau.

    for (int i = 0; i < 32; i++) {
        printf("%d", tab[i]); // Affiche chaque élément du tableau (représentation binaire).
    }

    printf("\n"); // Affiche une ligne vide pour séparer la sortie.

    // Les lignes de code suivantes sont actuellement commentées et ne sont pas actives.

    /*
    if (q == 1) {
        printf("1");
    } else {
        printf("0");
    }
    */
}
