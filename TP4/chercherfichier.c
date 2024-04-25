// exercice 4.6
// createur : Amin Belguidoum
// date : octobre 2023
// objectif : On souhaite retrouver une phrase dans un texte

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Initialisation des variables
    char phrasetrouver[] = "Tristan";
    int sizephrasetrouver = strlen(phrasetrouver);
    char fichier[] = "./fichier.txt";
    // On ouvre le fichier texte
    FILE *f = fopen(fichier, "r");
    // Si le fichier ne s'ouvre pas on envoie un message d'erreur
    if (f == NULL) {
        perror("Erreur lors de l'ouverture du fichier");
        exit(1);
    }

    int ligne = 0;
    char contenueLigne[300]; // Changé le type de tableau à char
    int count;
    // Si le contenue de la ligne dans le texte n'est pas vide 
    while (fgets(contenueLigne, sizeof(contenueLigne), f) != NULL) {
        ++ligne;
        count = 0;
        // i parcourt la ligne jusqu'à arriver à la taille de la phrase à trouver
        for (int i = 0; i < strlen(contenueLigne) - sizephrasetrouver; i++) { 
            int m = 0;
            // ensuite j parcours les caracteres suivants
            for (int j = 0; j < sizephrasetrouver; j++) {
                if (phrasetrouver[j] == contenueLigne[i + j]) {
                    m++;
                }
            }
            if (m == sizephrasetrouver) {
                m = 0;
                count++;
            }
        }
        if (count != 0) {
            printf("Ligne %d : Le mot 'Tristan' apparaît %d fois\n", ligne, count);
        }
    }

    fclose(f); // fermer le fichier après utilisation

    return 0;
}
