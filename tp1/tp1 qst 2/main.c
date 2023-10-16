//Écrivez un programme qui calcule la somme de deux nombres saisis par l'utilisateur.
#include <stdio.h>

int main() {
    double nombre1, nombre2, somme;

    printf("Entrez le premier nombre : ");
    scanf("%lf", &nombre1);

    printf("Entrez le deuxième nombre : ");
    scanf("%lf", &nombre2);

    somme = nombre1 + nombre2;


    printf("La somme de %.2lf et %.2lf est %.2lf\n", nombre1, nombre2, somme);

    return 0;
}
