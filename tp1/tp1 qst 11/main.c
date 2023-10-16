//Créez un programme qui simule un jeu de devinette, où l'utilisateur doit deviner un nombre secret.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int nombreSecret, nombreDevine, tentatives = 0;
    const int MAX_TENTATIVES = 5;

    srand(time(0));

    nombreSecret = rand() % 100 + 1;

    printf("Bienvenue dans le jeu de devinette !\n");

    while (1) {

        printf("Devinez le nombre secret (entre 1 et 100) : ");
        scanf("%d", &nombreDevine);
        tentatives++;

        if (nombreDevine == nombreSecret) {
            printf("Bravo ! Vous avez deviné le nombre en %d tentatives.\n", tentatives);
            break;
        } else if (tentatives >= MAX_TENTATIVES) {
            printf("Désolé, vous avez atteint le nombre maximum de tentatives. Le nombre secret était %d.\n", nombreSecret);
            break;
        } else if (nombreDevine < nombreSecret) {
            printf("Le nombre secret est plus grand. Essayez encore.\n");
        } else {
            printf("Le nombre secret est plus petit. Essayez encore.\n");
        }
    }

    return 0;
}
