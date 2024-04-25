// Nom du fichier: chaine
// Auteur: Amin Belguidoum
// Objectif : Copier un mot ou concatener des mots






#include<stdio.h>
int main(){
    // Declaration des variables
    int compteur=0;
    char ch1[]="Bonjour";
    char ch2[]="Monde";
    char ch3[7];
    char fin = '\0';
    int i=0;
    // On calcule la taille de notre chaine de caractere
    i=0;
    while(ch1[i]!=fin){// Tant que c'est pas la derniere lettre
        // on incremente l'indice et le compteur
        compteur++;
        i++;
    }
    printf("Taille:%d",compteur);
    // On copie notre chaine de caractere
    char copier[compteur];
    while(ch1[i]!= fin ){
        copier[i]= ch1[i];
        i++;
    }
    for(i=0;copier[i]!= fin;i++){
        printf("%c",copier[i]);
    }
    // On concatene
    int compteur1 = 0;
    int compteur2 = 0;
    i = 0;
    while(ch1[i]!= fin){
        compteur1++;
        i++;
    }
    i=0;
    while(ch2[i]!= fin){
        compteur2++;
        i++;
    }
    char mot_final[compteur1+compteur2]; // taille du nouveau mot qui est la somme de la taille des 2 mots
    i=0;
    while(ch1[i]!=fin){
        mot_final[i]=ch1[i];
        i++;
    }
    printf("\n");
    i=0;
    while(ch2[i]!=fin){
        mot_final[compteur1+i]=ch2[i]; // On commence par l'indice compteur1 + 1 car les premiers indices (compteur1 indices) sont pris par le 1er mot
        i++;
    }
    i=0;
    while(mot_final[i]!=fin){
        printf("%c",mot_final[i]);// On affiche le mot final
        i++;
    }
    printf("\n");

}