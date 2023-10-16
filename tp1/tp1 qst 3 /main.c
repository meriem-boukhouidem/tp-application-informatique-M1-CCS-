//Conditions et Boucles 
 //Écrivez un programme qui vérifie si un nombre saisi par l'utilisateur est pair ou impair.
#include <stdio.h>

int main() {
    int nombre;


    printf("Entrez un nombre : ");
    scanf("%d", &nombre);


    if (nombre % 2 == 0) {
        printf("%d est un nombre pair.\n", nombre);
    } else {
        printf("%d est un nombre impair.\n", nombre);
    }

    return 0;
}
