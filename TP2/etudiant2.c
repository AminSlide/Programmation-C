// Nom de fichier: etudiant2.c
// Auteur: Tristan BELLET
// Objectif : Gestion des Données d'Étudiant.e.s en C avec des Structure




#include <stdio.h>
#include <string.h>

int main(){
    // DATA ETUDIANTS : création d'étudiants (bien sur ces informations sont fictives))
    char noms_Prenoms[5][20]={"ANSELME Leonard","BELGUIDUM Amin","BACHELOT Aurelien","JARRY Alexandre","BELLET Tristan"};
    char adresses[5][100]={"Rue du 4 Août 1789","Rue Anatole France","Rue Jean Jaurès","Avenue Henri Barbusse","Boulevard Eugène Réguillon"};
    float Note_prog[5]={ 2,4,19,3,20};
    float Note_exploit[5]={18,16,1,17,0};
    

    // Création de la structure

    struct etudiant
    {
        char nom[100];
        char adresse[1000];
        float note_prog;
        float note_expl;  
    };
    // Création des objets avec la structure etudiant
    struct etudiant etudiant_cpe[5];
    {  for (int i = 0; i<5;i++){
        strcpy(etudiant_cpe[i].nom,noms_Prenoms[i]); // strcpy sert à copier le texte vers etudiant_cpe[i].nom depuis noms_Prenoms[i]
        strcpy(etudiant_cpe[i].adresse,adresses[i]);
        etudiant_cpe[i].note_prog = Note_prog[i];
        etudiant_cpe[i].note_expl = Note_exploit[i];
        
    }
        for (int i = 0; i<5;i++) // Boucle qui permet l'affichage
        {
        printf("Etudiant-e n°%d \n",i+1);
        printf("Nom et Prénom : %s \n",etudiant_cpe[i].nom);
        printf("Adresse : %s \n",etudiant_cpe[i].adresse);
        printf("Note programation  : %f \n",etudiant_cpe[i].note_prog);
        printf("Note explotation : %f \n\n",etudiant_cpe[i].note_expl);
        

        }
    };
    

}
