#include<stdio.h>

int isPrime(int n) {
    if (n <= 1) return 0;
    if (n == 2 || n == 3) return 1;
    if (n % 2 == 0 || n % 3 == 0) return 0;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return 0;
    }
    return 1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 5, 11, 7, 7, 8, 8};
    int len = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;

    
    for(int i = 0; i < len; i++) {
        if(isPrime(i)) {
            sum += arr[i];
        }
    }

    printf("The sum is %d\n", sum);
    return 0;
}
