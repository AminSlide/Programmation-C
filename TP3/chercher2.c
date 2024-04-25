// Nom de fichier: chercher2
// Auteur: Amin Belguidoum
// Objectif : Chercher si la phrase à rechercher est dans un tableau contenant des phrases




#include <stdio.h>

// Fonction pour comparer deux chaînes de caractères
int comparerChaines(const char *chaine1, const char *chaine2) {
    while (*chaine1 != '\0' && *chaine2 != '\0') {
        if (*chaine1 != *chaine2) {
            return 0; // Les chaînes sont différentes
        }
        chaine1++;
        chaine2++;
    }
    return (*chaine1 == '\0' && *chaine2 == '\0'); // Les chaînes sont identiques
}

int main() {
    // Tableau de 10 phrases
    const char *phrases[10] = {
        "Bonjour, comment ça va ?",
        "Le temps est magnifique aujourd'hui.",
        "C'est une belle journée.",
        "La programmation en C est amusante.",
        "Les tableaux en C sont puissants.",
        "Les pointeurs en C peuvent être déroutants.",
        "Il fait beau dehors.",
        "La recherche dans un tableau est intéressante.",
        "Les structures de données sont importantes.",
        "Programmer en C, c'est génial."
    };

    // Phrase à rechercher
    const char *phraseRecherchee = "Programmer en C, c'est génial.";

    int trouve = 0;

    // Parcourir le tableau de phrases
    for (int i = 0; i < 10; i++) {
        if (comparerChaines(phrases[i], phraseRecherchee)) {
            trouve = 1;
            break;
        }
    }

    // Afficher le résultat
    if (trouve) {
        printf("Phrase trouvée.\n");
    } else {
        printf("Phrase non trouvée.\n");
    }

    return 0;
}
