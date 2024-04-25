#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int SIZE = 100;
    int tab[100] = {};

    for (int i = 0; i < SIZE; i++) {
        tab[i] = rand() % 100 + 1;
    }

    // Tri du tableau (bubblesort)
    for (int i = 0; i < SIZE - 1; i++) {
        for (int j = 0; j < SIZE - i - 1; j++) {
            if (tab[j] > tab[j + 1]) {
                int tmp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = tmp;
            }
        }
    }

    printf("Tableau trié : ");
    for (int i = 0; i < SIZE; ++i) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    int entierRecherche;
    printf("Entrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &entierRecherche);

    int gauche = 0;
    int droite = SIZE - 1;
    int trouve = 0;

    while (gauche <= droite) {
        int milieu = gauche + (droite - gauche) / 2;

        if (tab[milieu] == entierRecherche) {
            trouve = 1; // L'entier est présent
            break;
        }
        if (tab[milieu] < entierRecherche) {
            gauche = milieu + 1;
        } else {
            droite = milieu - 1;
        }
    }

    if (trouve) {
        printf("Résultat : entier présent\n");
    } else {
        printf("Résultat : entier absent\n");
    }

    return 0;
}


