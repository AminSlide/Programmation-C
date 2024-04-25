// Nom de fichier: couleur_compteur.c
// Auteur: Tristan BELLET
// Objectif : Compter les couleurs distinctes dans un tableau de 100 couleurs aléatoires 


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    //Création des tableaux
    unsigned char liste_rouge[100];
    unsigned char liste_bleu[100];
    unsigned char liste_vert[100];
    unsigned char liste_alpha[100];

    // Initialiser le générateur de nombres aléatoires avec une graine
    srand(time(NULL));

    // Remplir le tableau avec des valeurs hexadécimales aléatoires
    for (int i = 0; i < 100; i++) {
        liste_rouge[i] = rand() ; 
        liste_bleu[i] = rand() ;
        liste_vert[i] = rand() ;
        liste_alpha[i] = rand();
    }
    // On choisit des valeurs entre 0x00 et 0xFF 

    struct couleur
    {
        int rouge;
        int vert;
        int bleu;
        int alpha;
        
    };
   // Création des objets couleur
    struct couleur couleur[100];
    {  for (int i = 0; i<100;i++){
        couleur[i].rouge = liste_rouge[i];
        couleur[i].vert = liste_vert[i];
        couleur[i].bleu = liste_bleu[i];
        couleur[i].alpha = liste_alpha[i];
    }
    struct {
        struct couleur couleur;
        int occurrences;
    } couleurs_distinctes[100];
    
    int nb_couleurs_distinctes = 0;

    
    for (int i = 0; i < 100; i++) {
        int est_present = 0;

        for (int j = 0; j < nb_couleurs_distinctes; j++) {
            if (couleur[i].rouge == couleurs_distinctes[j].couleur.rouge &&
                couleur[i].vert == couleurs_distinctes[j].couleur.vert &&
                couleur[i].bleu == couleurs_distinctes[j].couleur.bleu &&
                couleur[i].alpha == couleurs_distinctes[j].couleur.alpha) {
                couleurs_distinctes[j].occurrences++;
                est_present = 1;
                break;
            }
        }

        if (!est_present) {
            couleurs_distinctes[nb_couleurs_distinctes].couleur = couleur[i];
            couleurs_distinctes[nb_couleurs_distinctes].occurrences = 1;
            nb_couleurs_distinctes++;
        }
    // Afficher les couleurs distinctes avec leurs occurrences
    for (int i = 0; i < nb_couleurs_distinctes; i++) {
            printf("Couleur R=%d G=%d B=%d A=%d : %d occurrence(s)\n",
                   couleurs_distinctes[i].couleur.rouge, couleurs_distinctes[i].couleur.rouge, couleurs_distinctes[i].couleur.vert, couleurs_distinctes[i].couleur.alpha,couleurs_distinctes[i].occurrences);
            
        }
    }
        
    
    };
}
