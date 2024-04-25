//Date de création: 10/2023
//Auteur: Léonard ANSELME
// Objectif de ce programme: implémenter les fonctions demandées en utilisant une structure switch pour sélectionner l'opérateur approprié.
#include <stdio.h>
#include <stdlib.h>
#include "operator.h"

/* Définition des fonctions de base */
int somme(int num1, int num2){
    return num1+num2;

}


int difference (int num1, int num2){ 
    return num1-num2;
}


int produit (int num1, int num2){
    return num1*num2;
}

int quotient (int num1, int num2){
    return num1/num2;
}


int modulo (int num1, int num2){
    return num1%num2;
}

int et (int num1, int num2){
    return num1&num2;

}

int ou (int num1, int num2){
    return num1|num2;
}

int negation (int num1){
    return ~num1;
}



