// liste.c
#include "liste.h"
#include <stdio.h>
#include <stdlib.h>

void init_liste(struct liste_couleurs *liste) {
    liste->tete = NULL;
}

void insertion(struct couleur *c, struct liste_couleurs *liste) {
    struct noeud *nouveau_noeud = (struct noeud *)malloc(sizeof(struct noeud));
    if (nouveau_noeud == NULL) {
        fprintf(stderr, "Erreur d'allocation mémoire.\n");
        exit(1);
    }

    nouveau_noeud->couleur = *c;
    nouveau_noeud->suivant = liste->tete;
    liste->tete = nouveau_noeud;
}

void parcours(const struct liste_couleurs *liste) {
    const struct noeud *courant = liste->tete;
    while (courant != NULL) {
        printf("Couleur (R: %02X, G: %02X, B: %02X, A: %02X)\n",
               courant->couleur.red, courant->couleur.green,
               courant->couleur.blue, courant->couleur.alpha);
        courant = courant->suivant;
    }
}
