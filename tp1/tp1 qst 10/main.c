//Structures de Contrôle 
//Écrivez un programme qui demande à l'utilisateur de saisir un nombre entre 1 et 7, puis affiche le jour de la semaine correspondant.
#include <stdio.h>

int main() {
    int numeroJour;

    printf("Entrez un nombre entre 1 et 7 : ");
    scanf("%d", &numeroJour);

    switch (numeroJour) {
        case 1:
            printf("Lundi\n");
            break;
        case 2:
            printf("Mardi\n");
            break;
        case 3:
            printf("Mercredi\n");
            break;
        case 4:
            printf("Jeudi\n");
            break;
        case 5:
            printf("Vendredi\n");
            break;
        case 6:
            printf("Samedi\n");
            break;
        case 7:
            printf("Dimanche\n");
            break;
        default:
            printf("Le nombre saisi n'est pas valide.\n");
            break;
    }

    return 0;
}
