//Exercice 3 : Vérification d'une suite croissante.
#include <stdio.h>

int estSuiteCroissante(int tableau[], int taille) {
    if (taille <= 1) {
        return 1;
h
        if (tableau[taille - 1] < tableau[taille - 2]) {
            return 0;

        } else {
            return estSuiteCroissante(tableau, taille - 1);
        }
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

    int estCroissante = estSuiteCroissante(tableau, taille);

    if (estCroissante) {
        printf("La suite est croissante.\n");
    } else {
        printf("La suite n'est pas croissante.\n");
    }

    return 0;
}





