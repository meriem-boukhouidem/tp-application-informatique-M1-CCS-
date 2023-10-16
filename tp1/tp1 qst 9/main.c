//Créez une fonction qui prend un tableau d'entiers et renvoie la somme de ses éléments.
#include <stdio.h>


int sommeTableau(int tableau[], int taille) {
    int somme = 0;
    for (int i = 0; i < taille; i++) {
        somme += tableau[i];
    }
    return somme;
}

int main() {
    int tableau[] = {5, 10, 15, 20, 25};
    int taille = sizeof(tableau) / sizeof(tableau[0]);


    int resultat = sommeTableau(tableau, taille);


    printf("La somme des éléments du tableau est : %d\n", resultat);

    return 0;
}
