//Write a function to find whether a character is alphanumeric.

#include <stdio.h>

int isAlphanumeric(char c) {
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
        return 1;  
    else
        return 0;  
}

int main() {
    char input;
    printf("Enter a character: ");
    scanf("%c", &input);

    if (isAlphanumeric(input))
        printf("The character %c is alphanumeric.\n", input);
    else
        printf("The character %c is not alphanumeric.\n", input);

    return 0;
}
