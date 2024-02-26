#include <stdio.h>

void fitLine(int n, double x[], double y[], double *a, double *b) {
    double sumX = 0, sumY = 0, sumXY = 0, sumX2 = 0;

    for (int i = 0; i < n; i++) {
        sumX += x[i];
        sumY += y[i];
        sumXY += x[i] * y[i];
        sumX2 += x[i] * x[i];
    }


    *b = (n * sumXY - sumX * sumY) / (n * sumX2 - sumX * sumX);

    *a = (sumY - *b * sumX) / n;
}

int main() {
    
    int n = 5;
    double x[]={3.0,4.5,5.5,6.5,7.5,8.5,8.0,9.0,9.5,10.0};
    double y[]={1.5,2.0,3.5,5.0,6.0,7.5,9.0,10.5,12.0,14.0};

    double a, b;


    fitLine(n, x, y, &a, &b);

    
    printf("Fitted line: y = %.2f + %.2fx\n", a, b);

return 0;
}
