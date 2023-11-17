#include <stdio.h>

void findCongruentIntegers(int a, int n) {
    printf("Les entiers congruents à %d modulo %d dans l'intervalle [0, %d] sont : ", a, n, n-1);
    for (int b = 0; b < n; b++) {
        if ((a - b) % n == 0) {
            printf("%d ", b);
        }
    }
    printf("\n");
}

int main() {
    int a, n;

    printf("Entrez la valeur de a : ");
    scanf("%d", &a);

    printf("Entrez la valeur de n : ");
    scanf("%d", &n);

    findCongruentIntegers(a, n);

    return 0;
}

