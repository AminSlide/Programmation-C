// Nom de fichier: etudiant.c
// Auteur: Tristan BELLET
// Objectif : Gestion des Données d'Étudiant.e.s en C avec des Structure
    

#include <stdio.h>
int main(){
//Création de la DATA des etudiants (Informations fausses)
char noms_Prenoms[5][20]={"ANSELME Leonard","BELGUIDUM Amin","BACHELOT Aurelien","JARRY Alexandre","BELLET Tristan"};
char adresses[5][100]={"Rue du 4 Août 1789","Rue Anatole France","Rue Jean Jaurès","Avenue Henri Barbusse","Boulevard Eugène Réguillon"};
float Note_prog[5]={ 2,4,19,3,20};
float Note_exploit[5]={18,16,1,17,0};
int i = 0;
    //Boucle d'affichage parcourant les tableaux
for (i=0;i<5;i++){
    printf("L'étudiant : %s",noms_Prenoms[i]);
    printf(" habitant au %s \n", adresses[i]);
    printf("Il a reçu la note de %f en Programmation et",Note_prog[i]);
     printf(" %f en explotation \n",Note_exploit[i]);
    



}




}
