//Écrivez un programme qui trouve le plus grand nombre dans un tableau d'entiers.(1D)
#include <stdio.h>

int main() {
    int tableau[] = {15, 7, 25, 10, 18};
    int taille = sizeof(tableau) / sizeof(tableau[0]);
    int plus_grand = tableau[0];

    for (int i = 1; i < taille; i++) {
        if (tableau[i] > plus_grand) {
            plus_grand = tableau[i];
        }
    }

    printf("Le plus grand nombre dans le tableau est : %d\n", plus_grand);

    return 0;
}
