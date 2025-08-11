#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    scanf("%c", &ch);

    // Convert to lowercase for easy checking
    ch = tolower(ch);

    if (ch >= 'a' && ch <= 'z') {  // Check if it's a letter
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            printf("Vowel");
        else
            printf("Consonant");
    } else {
        printf("Not an alphabet character");
    }

    return 0;
}
