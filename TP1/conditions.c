// Nom de fichier: conditions.c
// Auteur: Tristan BELLET
// Objectif : Conditions et boucles avec divisibilité

int main(){
    int fin_boucle = 1000;
    int i = 0;
    int cond_a[1000];
    int cond_b[1000];
    int cond_c[1000];
    for (i=0;i<= fin_boucle;i++){ //boucle qui essaye la condition
        if (i%2 == 0 )
            if (i%15 == 0){
                cond_a[i]=i;
                printf("La condition A est respecté par :%i \n",i);
                }
            else
            {
                continue;
            }

        if (i%103 == 0 || i %107 == 0)
        {
            cond_b[i]=i;
            printf("La condition B est respecté par :%i \n",i);
        }

        if (i%7 == 0 || i%5 == 0)
        {
            if (i%3 != 0){
                cond_c[i]=i;
                printf("La condition C est respecté par :%i \n",i);
            }
            else
            {
                continue;
            }
        }


        
            
        }
       

       }
