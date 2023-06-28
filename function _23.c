
//Write a function to find whether a character is alphanumeric.
#include <stdio.h>

int isAlphanumeric(char ch) {
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) {
        return 1; 
    } else {
        return 0; 
    }
}

int main() {
    char character;

    printf("Enter a character: ");
    scanf("%c", &character);

    if (isAlphanumeric(character)) {
        printf("The character is alphanumeric.\n");
    } else {
        printf("The character is not alphanumeric.\n");
    }

    return 0;
}
