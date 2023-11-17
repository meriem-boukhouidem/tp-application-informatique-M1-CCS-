#include <stdio.h>

// Fonction pour calculer le PGCD de deux entiers a et b
int gcd(int a, int b, int *x, int *y) {
    if (a == 0) {
        *x = 0;
        *y = 1;
        return b;
    }

    int x1, y1;
    int gcd_val = gcd(b % a, a, &x1, &y1);

    *x = y1 - (b / a) * x1;
    *y = x1;

    return gcd_val;
}

int main() {
    int a, b, x, y;

    printf("Entrez la valeur de a : ");
    scanf("%d", &a);

    printf("Entrez la valeur de b : ");
    scanf("%d", &b);

    int gcd_val = gcd(a, b, &x, &y);

    printf("Les coefficients de Bezout pour %d et %d sont x = %d et y = %d, tels que %d * %d + %d * %d = %d\n",
           a, b, x, y, a, x, b, y, gcd_val);

    return 0;
}

