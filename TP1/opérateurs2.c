// Nom de fichier: Opérateurs2
// Auteur : Tristan Bellet
// Objectif : L'utilisateur rentre 2 nombres et choisis l'opération qu'il veut effectuer




#include <stdio.h>

int main(){
    // Déclarations des Variables
    int num1, num2;
    char op;

    //Choix pr l'utilisateur

    printf("Entrez num1 : ");
    scanf("%d", &num1);
    printf("Entrez num2 : ");
    scanf("%d", &num2);
    printf("Entrez l'opérateur (+, -, *, /, %, &, |, ~) : ");
    scanf(" %c", &op); // l'espace avant %c pour ignorer les espaces blancs et les sauts de ligne

    switch (op) // on utilise la méthode switch/case
    {
    case '+': 
            printf("Vous avez réalisé l'opération :\n");
            printf("%i + ",num1);
            printf("%i",num2);
            printf(" = %i",num1 + num2);
            break;
     case '-': 
            printf("Vous avez réalisé l'opération :\n");
            printf("%i - ",num1);
            printf("%i",num2);
            printf(" = %i",num1 - num2);
            break;
     case 'x': 
            printf("Vous avez réalisé l'opération :\n");
            printf("%i x ",num1);
            printf("%i",num2);
            printf(" = %i",num1 * num2);
            break;
     case '/': 
            printf("Vous avez réalisé l'opération :\n");
            printf("%i ÷ ",num1);
            printf("%i",num2);
            printf(" = %i",num1 / num2);
            break;
     case '%':
            if (num2 != 0) {
                printf("Vous avez réalisé l'opération : \n");
                printf("%d %% %d = %d\n", num1, num2, num1 % num2);
            } else {
                printf("Modulo par zéro n'est pas autorisé.\n");
            }
            break;
     case '&': 
            printf("Vous avez réalisé l'opération :\n");
            printf("%i & ",num1);
            printf("%i",num2);
            printf(" =  %i",num1 & num2);
            break;
     case '|': 
            printf("Vous avez réalisé l'opération :\n");
            printf("%i | ",num1);
            printf("%i",num2);
            printf("%i",num1 | num2);
            break;
     case '~': 
            printf("Vous avez réalisé l'opération :\n");
            printf("%i ~ ",num1);
            printf("%d",~num1);
            break;
        default:
            printf("Vous n'avez pas saisit une opéaration possible");
            break;
    }
    return 0;
    
}