//Fonctions 
//Écrivez une fonction qui calcule la factorielle d'un nombre.
#include <stdio.h>

unsigned long long factorielle(int n) {
    if (n == 0) {
        return 1;
    } else {
        unsigned long long resultat = 1;
        for (int i = 1; i <= n; i++) {
            resultat *= i;
        }
        return resultat;
    }
}

int main() {
    int nombre;


    printf("Entrez un nombre : ");
    scanf("%d", &nombre);

    unsigned long long fact = factorielle(nombre);

    printf("%d! = %llu\n", nombre, fact);

    return 0;
}
