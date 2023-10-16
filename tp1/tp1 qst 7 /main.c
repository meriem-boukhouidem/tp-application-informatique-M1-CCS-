//Écrivez un programme qui trouve le plus grand nombre dans un tableau d'entiers (2D , matrice).
#include <stdio.h>

int main() {
    int matrice[3][3] = {
        {15, 7, 25},
        {10, 18, 12},
        {30, 20, 5}
    };

    int lignes = 3;
    int colonnes = 3;
    int plus_grand = matrice[0][0];

    for (int i = 0; i < lignes; i++) {
        for (int j = 0; j < colonnes; j++) {
            if (matrice[i][j] > plus_grand) {
                plus_grand = matrice[i][j];
            }
        }
    }

    printf("Le plus grand nombre dans la matrice est : %d\n", plus_grand);

    return 0;
}
