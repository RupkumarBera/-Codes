#include <stdio.h>

int main() {
    int numbers[5];

   
    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; ++i) {
        scanf("%d", &numbers[i]);
    }

    // Categorize and display results
    printf("\nResults:\n");
    for (int i = 0; i < 5; ++i) {
        if (numbers[i] % 2 == 0) {
            printf("%d is even ", numbers[i]);
        } else {
            printf("%d is odd ", numbers[i]);
        }

        if (numbers[i] > 0) {
            printf("and positive.\n");
        } else if (numbers[i] < 0) {
            printf("and negative.\n");
        } else {
            printf("and zero.\n");
        }
    }
    return 0;
}