// exercice 4.5
// createur : Amin Belguidoum
// date : octobre 2023
// objectif : On souhaite calculer la factorielle d'un nomnbre



#include <stdio.h>

// Définition de la fonction factorielle
int factorielle(int num) {
  // la factorielle de 0 vaut 1
  if (num == 0) {
    printf("fact(0): 1\n");
    return 1;
  } else {
    // recursivite
    int valeur = num * factorielle(num - 1);
    printf("fact(%d): %d\n", num, valeur);
    return (valeur);
  }
}

int main() {
  int n;
  printf("%d\n",factorielle(5));

  return 0;
}
