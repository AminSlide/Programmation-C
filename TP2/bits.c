// Nom de fichier: bits
// Auteur:Tristan BELLET
// Objectif : Vérification des Bits en C en utilisant des masques


#include <stdio.h>
int main() {
int d = 0b000100000000000000000000000000;
if (d & (1<<4) ) // Ici on vérifié si le 4 eme bit est à 1. (car 1 << 4 est équivalent à 0b00010000)
    if (d & (1 << 20)) // Ici vérifie si le vingtième bit de d est activé.
        printf("1");
    else printf("0");
else printf("0");
}
