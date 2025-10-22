#include <stdio.h>
int main() {
    int marks, i;
    float pass[10], fail[10];
    int passCount = 0, failCount = 0;
    float passSum = 0, failSum = 0;

    printf("Enter quiz marks for students (enter -1 to stop):\n");

    for (i = 0; i < 10; i++) {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", &marks);

        if (marks == -1)
            break;

        if (marks >= 5 && marks <= 10) {
            pass[passCount] = marks;
            passSum += marks;
            passCount++;
        }

        else if (marks >= 0 && marks < 5) {
            fail[failCount] = marks;
            failSum += marks;
            failCount++;
        } 
        else {
            printf("Invalid marks! Please enter between 0-10.\n");
            i--;
        }
    }
    
    printf("\n--- Results ---\n");

    if (passCount > 0) {
        printf("Pass students' marks: ");
        for (i = 0; i < passCount; i++)
            printf("%.0f ", pass[i]);
        printf("\nAverage of pass students = %.2f\n", passSum / passCount);
    } else {
        printf("No pass students.\n");
    }

    if (failCount > 0) {
        printf("Fail students' marks: ");
        for (i = 0; i < failCount; i++)
            printf("%.0f ", fail[i]);
        printf("\nAverage of fail students = %.2f\n", failSum / failCount);
    } else {
        printf("No fail students.\n");
    }

    return 0;
}

