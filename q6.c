#include <stdio.h>
int main() {
    char str[100];
    int i, vowels = 0, consonants = 0;

    printf("Enter a word: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {

            if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
                ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            }

            else {
                consonants++;
            }
        }
    }

    printf("\nNumber of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}

