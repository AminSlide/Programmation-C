// Nom de fichier: Tableauptr
// Auteur: Amin Belguidoum
// Objectif : Multiplier les nombres dont l'indice est pair dans un tableau 



#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
   int tabint[11];
   float tabfloat[11];
   int *ptrint =&tabint[0];
   float *ptrfloat =&tabfloat[0];
   // On genere des nombres aléatoires dans les tableaux
   srand(time(NULL));
    for(int i=0;i<11;i++){
        *(ptrint+i) = rand()%100;
        *(ptrfloat+i)= (rand()%100)/7.0; // On prend des nombres modulo 100 pour eviter d'avoir des nombres trop grands et on divise par 7.0 pour avoir des nombres reels
    }
    for(int i=0;i<11;i++){
        printf("%i,%f\n",*(ptrint+i),*(ptrfloat+i)); // On affiche les tableaux
    }
    printf("\n\n");
    for(int i=0;i<11 ;i++){
        if (i%2==0){ // Si l'indice du tableau est pair
            int val=*(ptrint+i);
            *(ptrint+i)=*(ptrint+i) * 3; // On multiplie l'entier par 3
            *(ptrfloat+i)=*(ptrfloat+i)*3; // On multiplie le reel par 3
            printf("pour i=%d, on a changé %d en %d\n", i, val, *(ptrint+i));
            getchar();
            }
         
    }
    for(int i=0;i<11;i++){
        printf("%i,%f\n",*(ptrint+i),*(ptrfloat+i)); // On affiche les nouveaux tableaux
    }
}