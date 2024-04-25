// Nom de fichier: octets.c
// Auteur: Tristan BELLET et Léonard ANSELME
// Objectif : Comprendre la taille des types de données

#include <stdio.h>

int main() {
    printf("Taille en octets des types de données sur une machine 64 bits :\n");
    printf("--------------------------------------------------------\n");
    printf("Type char : %lu octets\n", sizeof(char));
    printf("Type short : %lu octets\n", sizeof(short));
    printf("Type int : %lu octets\n", sizeof(int));
    printf("Type long : %lu octets\n", sizeof(long));
    printf("Type long long : %lu octets\n", sizeof(long long));
    printf("Type float : %lu octets\n", sizeof(float));
    printf("Type double : %lu octets\n", sizeof(double));
    printf("Type long double : %lu octets\n", sizeof(long double));

    return 0;
}

