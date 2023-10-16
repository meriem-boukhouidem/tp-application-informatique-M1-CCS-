//Exercice 1 : Calcul de la somme des termes d'une suite arithmétique
#include <stdio.h>

int sommeSuiteArithmetique(int a, int d, int n) {
    if (n == 1) {
        return a;
    } else {
        return a + sommeSuiteArithmetique(a + d, d, n - 1);
    }
}

int main() {
    int premierTerme, difference, nombreTermes;

    printf("Entrez le premier terme de la suite : ");
    scanf("%d", &premierTerme);

    printf("Entrez la différence entre les termes : ");
    scanf("%d", &difference);

    printf("Entrez le nombre de termes : ");
    scanf("%d", &nombreTermes);

    int somme = sommeSuiteArithmetique(premierTerme, difference, nombreTermes);
    printf("La somme des %d premiers termes de la suite arithmétique est : %d\n", nombreTermes, somme);

    return 0;
}
