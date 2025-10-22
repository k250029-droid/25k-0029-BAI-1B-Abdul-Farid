#include <stdio.h>

int main() {
    int numbers[10];
    int i,searchNum,count = 0;

    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("\nEnter a number to search: ");
    scanf("%d", &searchNum);

    for (i = 0; i < 10; i++) {
        if (numbers[i] == searchNum) {
            count++;
        }
    }
    
    if (count > 0) {
        printf("\nThe number %d occurred %d time(s).\n", searchNum, count);
    } else {
        printf("\nNumber not found.\n");
    }

    return 0;
}

