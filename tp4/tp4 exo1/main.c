#include <stdio.h>

// Fonction pour vérifier la congruence de a et b modulo n
int areCongruent(int a, int b, int n) {
    return ((a - b) % n == 0);
}

int main() {
    int a, b, n;

    printf("Entrez la valeur de a : ");
    scanf("%d", &a);

    printf("Entrez la valeur de b : ");
    scanf("%d", &b);

    printf("Entrez la valeur de n : ");
    scanf("%d", &n);

    if (areCongruent(a, b, n)) {
        printf("%d ≡ %d (mod %d) est vrai.\n", a, b, n);
    } else {
        printf("%d ≡ %d (mod %d) est faux.\n", a, b, n);
    }

    return 0;
}

