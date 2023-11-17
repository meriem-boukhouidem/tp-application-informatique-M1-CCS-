#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isUpperCase(char c) {
    return (c >= 'A' && c <= 'Z');
}

int isLowerCase(char c) {
    return (c >= 'a' && c <= 'z');
}

int isDigit(char c) {
    return (c >= '0' && c <= '9');
}

int isSpecialChar(char c) {
    char specialChars[] = "!@#$%^&*()_+[]{}|;':\",.<>?/";
    int i;
    for (i = 0; specialChars[i] != '\0'; i++) {
        if (c == specialChars[i]) {
            return 1;
        }
    }
    return 0;
}

int isSecurePassword(char password[]) {
    int length = strlen(password);
    int hasUpperCase = 0, hasLowerCase = 0, hasDigit = 0, hasSpecialChar = 0;

    if (length < 8) {
        return 0;
    }

    for (int i = 0; i < length; i++) {
        if (isUpperCase(password[i])) {
            hasUpperCase = 1;
        } else if (isLowerCase(password[i])) {
            hasLowerCase = 1;
        } else if (isDigit(password[i])) {
            hasDigit = 1;
        } else if (isSpecialChar(password[i])) {
            hasSpecialChar = 1;
        }
    }

    return (hasUpperCase && hasLowerCase && hasDigit && hasSpecialChar);
}

int main() {
    char password[100];

    printf("Entrez votre mot de passe : ");
    scanf("%s", password);

    if (isSecurePassword(password)) {
        printf("Le mot de passe est sécurisé.\n");
    } else {
        printf("Le mot de passe ne respecte pas les critères de sécurité.\n");
    }

    return 0;
}

