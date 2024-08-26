//Find a pair with the maximum product in an array of Integers. in c program

#include <stdio.h>
#include <limits.h>

void findMaxProductPair(int arr[], int n) {
    if (n < 2) {
        printf("No pairs exist\n");
        return;
    }

    
    int max1 = INT_MIN, max2 = INT_MIN;
  
    int min1 = INT_MAX, min2 = INT_MAX;

    
    for (int i = 0; i < n; i++) {
        
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2) {
            max2 = arr[i];
        }

     
        if (arr[i] < min1) {
            min2 = min1;
            min1 = arr[i];
        } else if (arr[i] < min2) {
            min2 = arr[i];
        }
    }


    int product1 = max1 * max2;
    int product2 = min1 * min2;

    if (product1 > product2) {
        printf("The pair with the maximum product is: (%d, %d)\n", max1, max2);
    } else {
        printf("The pair with the maximum product is: (%d, %d)\n", min1, min2);
    }
}

int main() {
    int arr[] = {1, 4, 3, 6, 7, 0, -1, -2, -5,12};
    int n = sizeof(arr) / sizeof(arr[0]);

    findMaxProductPair(arr, n);

    return 0;
}
