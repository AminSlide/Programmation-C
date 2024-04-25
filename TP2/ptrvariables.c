// Nom de fichier: ptrvariables.c
// Auteur: Tristan BELLET
// Objectif : Manipulation des Variables de Types de Base avec des Pointeurs

#include <stdio.h>
int main (){
short s = 0xa478;  // création de la donnée
short *my_short_addr = &s; //  Association de l'adresse du short à une variable
printf("Avant la manipulation :\n");
printf("adresse de s : %p",my_short_addr);
printf(", Valeur de s : %x \n",s);
s = s - 0x0001; // Manipulation du short, ici juste -1
printf("Après la manipulation :\n");
printf("adresse de s : %p",my_short_addr);
printf(", Valeur de s : %x \n",s);

}

