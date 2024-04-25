// Nom de fichier: octets.c
// Auteur: Tristan BELLET
// Objectif : Affichage des octets de différents types de données sous forme hexadécimale 



#include <stdio.h>

int main() {
    // Déclarer des variables de différents types de données
    short s = 12345;
    int i = 1234567890;
    long int li = 1234567890123456789;
    float f = 123.456;
    double d = 123.456789;
    long double ld = 123.456789012345678901234567890123456789;

      // Utiliser des pointeurs pour accéder aux octets individuels
    unsigned char *p_s = (unsigned char *)&s;
    unsigned char *p_i = (unsigned char *)&i;
    unsigned char *p_li = (unsigned char *)&li;
    unsigned char *p_f = (unsigned char *)&f;
    unsigned char *p_d = (unsigned char *)&d;
    unsigned char *p_ld = (unsigned char *)&ld;

     printf("Octets de short : \n");
    for (int j = 0; j < sizeof(short); j++) {
        printf("%02x ", p_s[j]);
    }
    
    printf("\n\nOctets de int : \n");
    for (int j = 0; j < sizeof(int); j++) {
        printf("%02x ", p_i[j]);
    }
    
    printf("\n\nOctets de long int : \n");
    for (int j = 0; j < sizeof(long int); j++) {
        printf("%02x ", p_i[j]);
    }
    
    printf("\n\nOctets de float : \n ");
    for (int j = 0; j < sizeof(float); j++) {
        printf("%02x ", p_f[j]);

    }
    
    printf("\n\nOctets de double : \n");
    for (int j = 0; j < sizeof(double); j++) {
        printf("%02x ", p_d[j]);
    }
    
    printf("\n\nOctets de long double : \n");
    for (int j = 0; j < sizeof(long double); j++) {
        printf("%02x ", p_ld[j]);
    }
}
