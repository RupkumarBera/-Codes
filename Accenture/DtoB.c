/*
Write a program for Decimal to Binary Conversion.
*/

#include <stdio.h>

void decimalToBinary(int n) {
    
    int binaryNum[32];

    
    int i = 0;
    while (n > 0) {
        
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }

    
    printf("Binary equivalent: ");
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binaryNum[j]);
    printf("\n");
}

int main() {
    int num;

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Binary equivalent: 0\n");
    } else {
        decimalToBinary(num);
    }

    return 0;
}
