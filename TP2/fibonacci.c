// Nom de fichier: Finbonacci
// Auteur: Amin Belguidoum
// Objectif : Calculer les valeurs de la suite de fibonacci pour un n donné



#include<stdio.h>

int main(){
    int n=7,k=1,i=1;
    int tab[n]; // creation d'un tableau de taille n
    int U0=0,U1=1;
    // On initialise les 2 premiers indices du tableau
    tab[0]= U0; 
    tab[1]= U1;
    for(i=2;i<=n;i++){ // On parcours le tableau
        tab[i]= tab[i-1]+tab[i-2]; // la valeur du nombre de l'indice i du tableau vaut la somme des nombres des 2 indices precedents
    }
    for(k=1;k<=n;k++){
        printf("%d\n",tab[k-1]); // On affiche les valeurs
    }
    
}