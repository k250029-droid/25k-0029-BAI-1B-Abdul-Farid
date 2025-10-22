#include <stdio.h>
int main() {
    char str[100];
    printf("Enter any characters (alphabets will be ignored):\n");
    scanf("%[^A-Za-z]", str);
    printf("\nNon-alphabetic characters entered:\n");
    printf("%s\n", str);
    return 0;
}

