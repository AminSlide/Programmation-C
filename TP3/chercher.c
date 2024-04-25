// Nom de fichier: chercher
// Auteur: Amin Belguidoum
// Objectif : Chercher si la valeur que rentre l'utilisateur se trouve dans un tableau genere aleatoirement




#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){
    // Introduction des variables
    srand(time(NULL));
    int i;
    int tab[100];
    int val;
    int min=0;
    int max=100;
    for(i=0;i<=99;i++){ // On parcours les indices du tableau
        tab[i] = rand()%100;
        printf("%d\n",tab[i]);
    }
    printf("\nEntrez l'entier que vous souhaitez chercher :\n");
    scanf("%d",&val); // L'utilisateur entre la valeur qu'il souhaite
    for(i=0;i<=99;i++){
        if(tab[i]==val){// On verifie si la valeur qu'a mis l'utilisateur est dans le tableau
            printf("\nLa valeur %d est dans le tableau\n",val);
            return 0;
        }
        
    }
    printf("\nLa valeur %d n'est pas présente dans le tabelau\n",val); // On affiche qu'une seul fois la phrase meme si la valeur est presente plusieurs fois
    
}