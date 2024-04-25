// Nom de fichier: couleur.c
// Auteur: Léonard ANSELME & Tristan BELLET
// Objectif : Gestion des Couleurs en Format RGBA avec des Structures
    

#include <stdlib.h>
#include <stdio.h>
#include<string.h>



int main()
//Création des données des différentes couleurs
{
    int rouge[10] = {0x1A,0x2F,0x4C,0x7D,0x88,0xA3,0xB9,0xE6,0xF0,0x5A};
    int vert[10] = {0x1A,0x2F,0x4C,0x7D,0x88,0xA3,0xB9,0xE6,0xF0,0x5A};
    int bleu[10] = {0x6D,0x92,0xAB,0xC5,0xD8,0x3E,0x77,0x9F,0x24,0x5B};
    int alpha[10] = {0x8A,0xF4,0x1C,0x49,0x6F,0x8D,0xA8,0xE1,0xFB,0x0B};

//Création de la structure RGBA
    struct rgba
    {
        unsigned char rouge;
        unsigned char vert;
        unsigned char bleu;
        unsigned char alpha;


    };
// Création des objets rgba
    struct rgba couleur[10];
    {for (int i = 0; i<10;i++){
        couleur[i].rouge = rouge[i];
        couleur[i].rouge = bleu[i];
        couleur[i].vert = vert[i];
        couleur[i].alpha = alpha[i];
        }

    // Boucle d'affichage
    for (int i = 0; i < 10 ;i++){
        printf("Couleur n° : %d \n",i+1);
        printf("Rouge : %d\n",couleur[i].rouge);
        printf("Vert : %d\n",couleur[i].vert);
        printf("Bleu : %d\n",couleur[i].bleu);
        printf("Alpha : %d \n \n",couleur[i].alpha);


        }
    




}
}

  



  




