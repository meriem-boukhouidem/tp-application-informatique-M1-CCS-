//Tableaux et Boucles 
// Créez un tableau de 5 entiers et initialisez-le avec des valeurs. Affichez ensuite ces valeurs.
#include <stdio.h>

int main() {
    int tableau[5] = {10, 5, 7, 20, 15};


    for (int i = 0; i < 5; i++) {
        printf("Valeur à l'indice %d : %d\n", i, tableau[i]);
    }

    return 0;
}
