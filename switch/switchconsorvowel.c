#include <stdio.h>

int main() {
    char ch;
    printf("Enter an alphabet: ");
    scanf("%c", &ch);

    switch (ch) {
        case 'a': 
        case 'e': 
        case 'i': 
        case 'o': 
        case 'u': 
        case 'A': 
        case 'E': 
        case 'I': 
        case 'O': 
        case 'U':
            printf("%c is a Vowel", ch);
            break;

        default:
            if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
                printf("%c is a Consonant", ch);
            else
                printf("Invalid input! Please enter an alphabet.");
    }

    return 0;
}
