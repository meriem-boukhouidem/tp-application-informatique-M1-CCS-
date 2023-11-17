#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 1000

void encryptMessage(char message[], int shift) {
    int i;
    for (i = 0; i < strlen(message); i++) {
        if (isalpha(message[i])) {
            char base = (isupper(message[i])) ? 'A' : 'a';
            message[i] = base + (message[i] - base + shift) % 26;
    }
}

int main() {
    char message[MAX_LENGTH];
    int shift;

    printf("Entrez le message à chiffrer : ");
    fgets(message, sizeof(message), stdin);

    printf("Entrez le décalage pour le chiffrement de César : ");
    scanf("%d", &shift);


    if (strlen(message) > 0 && message[strlen(message) - 1] == '\n') {
        message[strlen(message) - 1] = '\0';
    }

    encryptMessage(message, shift);

    printf("Message chiffré : %s\n", message);

    return 0;
}

