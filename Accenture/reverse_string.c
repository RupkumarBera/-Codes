/*
Write a program to reverse a given string without using built-in library functions.
*/

#include <stdio.h>


int string_length(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}


void reverse_string(char str[]) {
    int length = string_length(str);
    int start = 0;
    int end = length - 1;
    char temp;

   
    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[100];

    
    printf("Enter a string: ");
    scanf("%s", str);

    reverse_string(str);

    printf("Reversed string: %s\n", str);

    return 0;
}
