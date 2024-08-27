/*
  Write a program to calculate and return the sum of absolute differences between the adjacent numbers in an array.
*/

#include <stdio.h>
#include <stdlib.h>


int sum_of_absolute_differences(int arr[], int size) {
    int sum = 0;

   
    for (int i = 0; i < size - 1; i++) {
        sum += abs(arr[i + 1] - arr[i]);
    }

    return sum;
}

int main() {
    int arr[] = {2, 5, 1, 8, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = sum_of_absolute_differences(arr, size);

    printf("The sum of absolute differences is: %d\n", result);

    return 0;
}
