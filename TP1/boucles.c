// Nom de fichier: Boucle
// Auteur: Amin Belguidoum
// Objectif : Utiliser une boucle pour dessiner un triangle rectangle





#include <stdio.h>
int main (){
    int compteur = 0;
    int max = 7;
    int k = 0;
    int i = 0;
    for (compteur = 1;compteur < max;compteur++) {
        if (compteur == 1 || compteur == 2 || compteur == max - 1){// Condition pour mettre une * au bord du triangle
            for (k=0;k<compteur;k++){
                printf("*");
            }
            printf("\n");
        }
        else {// Sinon on remplis le triangle avec des #
            for (i = 0; i <compteur; i++){
                if (i== 0 || i == compteur-1){
                    printf("*");
                }
                else{
                    printf("#");
                }
            
            }
            printf("\n");    
        }
    } 

}

