#include <stdio.h>

int main() {
    int d;
    printf("Enter the Distance: ");
    scanf("%d", &d);

    float area;
    area = 3.14 * d * d;

    if (area - (int)area <= 0.5) {
        printf("Area as integer: %d\n", (int)area);
    } else {
        printf("Rounded Area: %d\n", (int)(area + 1));
    }

    return 0;
}
