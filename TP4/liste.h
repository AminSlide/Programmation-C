// liste.h
#ifndef LISTE_H
#define LISTE_H

struct couleur {
    unsigned char red;
    unsigned char green;
    unsigned char blue;
    unsigned char alpha;
};

struct noeud {
    struct couleur couleur;
    struct noeud *suivant;
};

struct liste_couleurs {
    struct noeud *tete;
};

void init_liste(struct liste_couleurs *liste);
void insertion(struct couleur *c, struct liste_couleurs *liste);
void parcours(const struct liste_couleurs *liste);

#endif
