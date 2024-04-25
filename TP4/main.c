#include <stdio.h>
#include <stdlib.h>
#include "operator.h"

#include <string.h>
#include "fichier.h"

#include "liste.h"

//Date de création: 10/2023
//Auteur: Léonard ANSELME
//Objectif de ce programme: l'utilisateur peut saisir 2 valeurs d'entier, puis l'opérateur mathétmatique qu'il souhaite appliquer au calcul
//Exercice 1

int main(){
    printf("===================== EXO 1 =======================\n \n \n");

    // Déclarations des Variables
    int num1, num2;
    int resultat;
    char op;

    //Choix par l'utilisateur

    printf("Entrez num1 : ");
    scanf("%d", &num1);
    printf("Entrez num2 : ");
    scanf("%d", &num2);
    printf("Entrez l'opérateur (+, -, *, /, %%, &, |, ~) : ");
    scanf(" %c", &op); // espace avant %c pour ignorer les espaces blancs et les sauts de ligne

    switch (op) // on utilise la méthode switch/case
    {
    case '+': 
            printf("Vous avez réalisé l'opération :\n");
            resultat=somme(num1,num2);
            printf(" %d\n",resultat);
        
            break;
     case '-': 
            printf("Vous avez réalisé l'opération :\n");
            resultat=difference(num1,num2);
            printf(" %d\n",resultat);
          
            break;
     case 'x': 
            printf("Vous avez réalisé l'opération :\n");
            resultat=produit(num1,num2);
            printf(" %d\n",resultat);
          
            break;
     case '/': 
            printf("Vous avez réalisé l'opération :\n");
            resultat=quotient(num1,num2);
            printf(" %d\n",resultat);
         
            break;
     case '%':
            if (num2 != 0) {
                printf("Vous avez réalisé l'opération : \n");
                resultat=modulo(num1,num2);
                printf(" %d\n",resultat);
            } else {
                printf("Modulo par zéro n'est pas autorisé.\n");
            }
            break;
     case '&': 
            printf("Vous avez réalisé l'opération :\n");
            resultat=et(num1,num2);
            printf(" %d\n",resultat);
        
            break;
     case '|': 
            printf("Vous avez réalisé l'opération :\n");
            resultat=ou(num1,num2);
            printf(" %d\n",resultat);
        
            break;
     case '~': 
            printf("Vous avez réalisé l'opération :\n");
            resultat=negation(num1);
            printf(" %d\n",resultat);
           
            break;
        default:
            printf("Vous n'avez pas saisi une opération possible");
            break;
    }
//Date de création: 10/2023
//Auteur: BELLET Tristan
// Objectif de ce programme: l'utilisateur peut saisir 2 valeurs d'entier, puis l'opérateur mathétmatique qu'il souhaite appliquer au calcul
// Exercice 2
    printf("============================== EXO 2 ========================= \n \n \n");


    int choix;
    char nom_fichier[256];
    char message[256];

    while (1) {
        printf("Que souhaitez-vous faire ?\n");
        printf("1. Lire un fichier\n");
        printf("2. Écrire dans un fichier\n");
        printf("3. Quitter\n");
        printf("Votre choix : ");
        scanf("%d", &choix);

        if (choix == 1) {
            printf("Entrez le nom du fichier à lire : ");
            scanf("%s", nom_fichier);
            lire_fichier(nom_fichier);
        } else if (choix == 2) {
            printf("Entrez le nom du fichier dans lequel vous souhaitez écrire : ");
            scanf("%s", nom_fichier);
            printf("Entrez le message à écrire : ");
            scanf("%s", message);
            ecrire_dans_fichier(nom_fichier, message);
            printf("Le message a été écrit dans le fichier %s.\n", nom_fichier);
        } else if (choix == 3) {
            break;
        } else {
            printf("Choix invalide. Veuillez choisir 1, 2 ou 3.\n");
        }
    // Pour lancer gcc -o exo2 fichier.c main.c
    // puis ./exo2
        
//Date de création: 10/2023
//Auteur: Léonard ANSELME
//Objectif de ce programme: Gestion d'une liste de couleur puis convertion
//Exercice 7
    struct liste_couleurs ma_liste;
    init_liste(&ma_liste);

    // Définition de 10 couleurs
    struct couleur couleur1 = {0xFF, 0x00, 0x00, 0xFF}; // Rouge
    struct couleur couleur2 = {0x00, 0xFF, 0x00, 0xFF}; // Vert
    struct couleur couleur3 = {0x00, 0x00, 0xFF, 0xFF}; // Bleu
    struct couleur couleur4 = {0xFF, 0xFF, 0x00, 0xFF}; // Jaune
    struct couleur couleur5 = {0xFF, 0x00, 0xFF, 0xFF}; // Magenta
    struct couleur couleur6 = {0x00, 0xFF, 0xFF, 0xFF}; // Cyan
    struct couleur couleur7 = {0xFF, 0x80, 0x00, 0xFF}; // Orange
    struct couleur couleur8 = {0x80, 0x00, 0xFF, 0xFF}; // Violet
    struct couleur couleur9 = {0x80, 0x80, 0x80, 0xFF}; // Gris
    struct couleur couleur10 = {0xFF, 0xFF, 0xFF, 0xFF}; // Blanc

    // Insertion des couleurs dans la liste
    insertion(&couleur1, &ma_liste);
    insertion(&couleur2, &ma_liste);
    insertion(&couleur3, &ma_liste);
    insertion(&couleur4, &ma_liste);
    insertion(&couleur5, &ma_liste);
    insertion(&couleur6, &ma_liste);
    insertion(&couleur7, &ma_liste);
    insertion(&couleur8, &ma_liste);
    insertion(&couleur9, &ma_liste);
    insertion(&couleur10, &ma_liste);

    // Affichage de la liste de couleurs
    printf("Liste des couleurs :\n");
    parcours(&ma_liste);

    return 0;
}
