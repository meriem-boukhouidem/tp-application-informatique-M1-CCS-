//Variables et Opérations
//Écrivez un programme qui demande à l'utilisateur son nom, puis affiche un message de bienvenue avec le nom.
#include <stdio.h>

int main() {
    char nom[50];

    printf("Entrez votre nom : ");
    scanf("%s", nom);


    printf("Bienvenue, %s !\n", nom);

    return 0;
}
