// Nom de fichier: sizeof
// Auteur: Amin Belguidoum
// Objectif : Trouve la taille en octets des differents types de base





#include <stdio.h>
int main(){
    printf("sizeof(char): %lu\n", sizeof (char));
    printf("sizeof(short): %lu\n", sizeof (short));
    printf("sizeof(int): %lu\n", sizeof (int));
    printf("sizeof(long int): %lu\n", sizeof (long int));
    printf("sizeof(long long int): %lu\n", sizeof (long long int));
    printf("sizeof(float): %lu\n", sizeof (float));
    printf("sizeof(double): %lu\n", sizeof (double));
    printf("sizeof(long double): %lu\n", sizeof (long double));
    return 0;
}
