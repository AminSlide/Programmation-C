// exercice 4.3
// createur : BELLET Tristan
// date : octobre 2023
// objectif : On cherche à crée un tableau avec la structure etudiant du programme etudiant2.c, après avoir renseigné
//les informations de chaques étudiants sont à la fin rajouté sur un fichier etudiant.txt grâce à la fonction ecrire_dans_fichier

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Définition de la structure Étudiant
typedef struct {
    char nom[50];
    char prenom[50];
    char adresse[100];
    float note1;
    float note2;
} Etudiant;

// Fonction pour écrire dans un fichier
void ecrire_dans_fichier(char* nomFichier, Etudiant etudiants[], int nbEtudiants) {
    FILE* fichier = fopen(nomFichier, "w");
    if (fichier == NULL) {
        printf("Erreur lors de l'ouverture du fichier.\n");
        exit(1);
    }
    for (int i = 0; i < nbEtudiants; i++) {
        fprintf(fichier, "%s;%s;%s;%.2f;%.2f\n", etudiants[i].nom, etudiants[i].prenom, etudiants[i].adresse, etudiants[i].note1, etudiants[i].note2);
    }
    fclose(fichier);
}

int main() {
    int nbEtudiants = 5;
    Etudiant etudiants[nbEtudiants];
    char buf;
    for (int i = 0; i < nbEtudiants; i++) {
        printf("Entrez les détails de l'étudiant %d :\n", i + 1);
        printf("Nom : ");
        scanf("%s", etudiants[i].nom);
        printf("Prénom : ");
        scanf("%s", etudiants[i].prenom);
        printf("Adresse : ");
        scanf("%c",&buf);
        scanf("%[^\n]", etudiants[i].adresse);
        printf("Note 1 : ");
        scanf("%c",&buf);
        scanf("%f", &etudiants[i].note1);
        printf("Note 2 : ");
        scanf("%c",&buf);
        scanf("%f", &etudiants[i].note2);
    }

    ecrire_dans_fichier("etudiant.txt", etudiants, nbEtudiants);

    return 0;
}
