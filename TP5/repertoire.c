#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "repertoire.h"
#include <dirent.h>
#include <sys/types.h>
#include <string.h>
#include <time.h>

// Fonction pour lire le contenu d'un dossier de manière non récursive
int lecture_dossier(char *chemin) {
    DIR *dirp = opendir(chemin);

    if (dirp == NULL) { 
        perror("opendir"); // Vérifie si le dossier est accessible
        return -1;
    }
    struct dirent *ent;

    while ((ent = readdir(dirp)) != NULL) {
        if (ent->d_name[0] != '.') { // Ignorer les fichiers cachés commençant par '.'
            printf("%s\n", ent->d_name);
        }
    }
    closedir(dirp); 
    return 0;
}

// Fonction pour lire le contenu d'un dossier de manière récursive
void lecture_dossier_recursif(char *chemin) {
    DIR *dirp = opendir(chemin);

    if (dirp == NULL) {
        perror("opendir");
        return;
    }
    struct dirent *ent;

    while ((ent = readdir(dirp)) != NULL) {
        if (strcmp(ent->d_name, ".") == 0 || strcmp(ent->d_name, "..") == 0) {
            continue; // Ignorer les entrées spéciales "." et ".."
        }
        printf("%s\n", ent->d_name);
        if (ent->d_type == DT_DIR) { 
            char path[500];
            snprintf(path, sizeof(path), "%s/%s", chemin, ent->d_name); // Utiliser snprintf pour éviter les débordements de tampon
            lecture_dossier_recursif(path); // Appel récursif
            printf("\n");
        }
    }
    closedir(dirp);
}

// Fonction pour lire le contenu d'un dossier de manière itérative
void lecture_dossier_iteratif(char *chemin) {
    DIR *dirp;
    struct dirent *ent;
    int compteur = 1;

    char adresse_dir[256][256];
    int ptr_liste = 1;
    char copie[256] = "";
    strcpy(copie, chemin);

    while (compteur != 0) {
        dirp = opendir(chemin);
        if (dirp == NULL) {
            perror("opendir");
            return;
        }

        ptr_liste = 1; // Réinitialiser le pointeur de liste pour chaque itération
        while ((ent = readdir(dirp)) != NULL) {
            if (strcmp(ent->d_name, ".") == 0 || strcmp(ent->d_name, "..") == 0) {
                continue; // Ignorer les entrées spéciales "." et ".."
            }
            if (ent->d_type == DT_DIR) {
                printf("chemin %s\n", ent->d_name);
                snprintf(copie, sizeof(copie), "%s/%s", chemin, ent->d_name);
                strcpy(adresse_dir[ptr_liste], copie);
                ptr_liste++;
                compteur++;
                printf("\n");
            }
            printf("%s\n", ent->d_name);
            printf("\n");
        }
        sleep(2);
        closedir(dirp);
        strcpy(chemin, adresse_dir[compteur - 1]); // Utiliser le compteur pour accéder à la dernière adresse
        compteur--;
    }
}

int main(int argc, char **argv) {
    if (argc < 2) {
        printf("Usage: readdir path\n");
        return EXIT_FAILURE;
    }
    lecture_dossier_recursif(argv[1]); // Appel de la fonction pour lire récursivement le contenu du répertoire
    return 0;
}


