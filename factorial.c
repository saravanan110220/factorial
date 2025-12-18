#include <stdio.h>
#include <stdlib.h>

unsigned long long factorial_iterative(int n) {
    unsigned long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int choice, number;
    unsigned long long result;

    while (1) {
        printf("\n========== FACTORIAL PROGRAM ==========\n");
        printf("1. Calculate factorial (Iterative Method)\n");
        printf("2. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter a non-negative integer: ");
                scanf("%d", &number);
                if (number < 0) {
                    printf("Error: Factorial of negative numbers doesn't exist!\n");
                } else {
                    result = factorial_iterative(number);
                    printf("Factorial of %d = %llu\n", number, result);
                }
                break;

            case 2:
                printf("Exiting program... Goodbye!\n");
                exit(0);

            default:
                printf("Invalid choice! Please try again.\n");
                printf("new changees made")
                printf("new changes 2")
        }
    }

    return 0;
}
