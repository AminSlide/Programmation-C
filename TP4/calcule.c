//Date de création: 10/2023
//Auteur: Léonard ANSELME
// Objectif de ce programme : calculatrice en ligne de commande qui permet à 
//l'utilisateur de réaliser des opérations arithmétiques et logiques simples entre
 //deux nombres en utilisant différents opérateurs. Les opérations possibles sont l'addition (+), 
//la soustraction (-), la multiplication (*), la division (/), 
//le modulo (%), l'opération ET (&), l'opération OU (|) et la négation (~).

#include <stdio.h>
#include <stdlib.h>
#include "operator.h"

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Usage: %s <operator> <num1> <num2>\n", argv[0]);
        return 1;
    }

    char op = argv[1][0];  // Récupère le premier caractère de l'opérateur.

    int num1 = atoi(argv[2]);  // Convertit la première chaîne en entier.
    int num2 = atoi(argv[3]);  // Convertit la deuxième chaîne en entier.

    int result;

    switch (op) {
        case '+':
            result = somme(num1, num2);
            break;
        case '-':
            result = difference(num1, num2);
            break;
        case '*':
            result = produit(num1, num2);
            break;
        case '/':
            if (num2 != 0) {
                result = quotient(num1, num2);
            } else {
                printf("Erreur : Division par zéro.\n");
                return 2;
            }
            break;
        case '%':
            if (num2 != 0) {
                result = modulo(num1, num2);
            } else {
                printf("Erreur : Modulo par zéro.\n");
                return 2;
            }
            break;
        case '&':
            result = et(num1, num2);
            break;
        case '|':
            result = ou(num1, num2);
            break;
        case '~':
            result = negation(num1);
            break;
        default:
            printf("Opérateur non reconnu : %c\n", op);
            return 1;
    }

    printf("Résultat : %d\n", result);

    return 0;
}

