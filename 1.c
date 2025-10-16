#include <stdio.h>
int main() {
    int a[5], i, temp;

    printf("Enter 5 integers:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    temp = a[4];                 // store last element
    for(i = 4; i > 0; i--) {
        a[i] = a[i - 1];         // shift elements right
    }
    a[0] = temp;                 // move last element to first

    printf("Array after right shift:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
    printf("\n"); // important for clean output

    return 0;
}


