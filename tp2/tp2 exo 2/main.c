//Exercice 2 : Calcul la somme d’un tableau
#include <stdio.h>

int sommeTableau(int tableau[], int taille) {
    if (taille == 0) {
        return 0;
    } else {
        return tableau[taille - 1] + sommeTableau(tableau, taille - 1);
    }
}

int main() {
    int taille;
    printf("Entrez la taille du tableau : ");
    scanf("%d", &taille);

    int tableau[taille];
    printf("Entrez les éléments du tableau :\n");

    for (int i = 0; i < taille; i++) {
        printf("Element %d : ", i + 1);
        scanf("%d", &tableau[i]);
    }

    int somme = sommeTableau(tableau, taille);
    printf("La somme des éléments du tableau est : %d\n", somme);

    return 0;
}


