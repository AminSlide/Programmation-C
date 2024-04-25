// Nom de fichier: cercle
// Auteur: Amin Belguidoum
// Objectif : Calcul le perimetre et l'air d'un cercle




#include <stdio.h>
#include <math.h>
int main() {
    float rayon = 5 ; //Création de la donnée rayon ici : 5
    float perimetre = 2*M_PI*rayon ; //formule du périmètre
    float aire = M_PI*rayon*rayon ; // formule de l'air
    printf("Le périmètre vaut %f \n",perimetre) ; // affichage périmètre
    printf("L'aire vaut %f \n", aire) ; // affichage aire
    return 0; // pas de pb = return 0
}