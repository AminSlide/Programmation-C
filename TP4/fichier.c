// exercice 4.2
// createur : BELLET Tristan
// date : octobre 2023
// objectif : On crée les fonctions lire fichier et ecrire_dans_fichier

#include <stdio.h>
#include <stdlib.h>
#include "fichier.h"

void lire_fichier(const char *nom_de_fichier) {
    FILE *fichier = fopen(nom_de_fichier, "r");
    if (fichier == NULL) {
        printf("Erreur lors de l'ouverture du fichier.\n");
        return;
    }

    char c;
    //tant que le caractère lu depuis le fichier à l'aide de fgetc(fichier) n'est pas égal à la 
    //constante EOF (End of File), continuez la boucle
    while ((c = fgetc(fichier)) != EOF) //{
        printf("%c", c);
    }

    fclose(fichier);
}

void ecrire_dans_fichier(const char *nom_de_fichier, const char *message) {
    // on ouvre le fichier pour "write"
    FILE *fichier = fopen(nom_de_fichier, "w");
    if (fichier == NULL) {
        printf("Erreur lors de l'ouverture du fichier.\n");
        return;
    }

    fprintf(fichier, "%s", message);

    fclose(fichier);
    printf("Le message a été écrit dans le fichier %s.\n", nom_de_fichier);
}
