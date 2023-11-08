/*
The naatural logarithm can be approximated by following series   
(x-1)/x+(1/2)*((x-1)*(x-1))/(x*x)+(1/2)*((x-1)*(x-1)*(x-1))/(x*x*x)+(1/2)*((x-1)*(x-1)*(x-1)*(x-1))/(x*x*x*x)...
if x is input through the keyboard .write a program to calculate the sum of frist seven trems of the series.
*/
#include<stdio.h>
#include<math.h>
 
 int main () {
     double x, sum = 0;
     printf("Enter the value of  x ");
     scanf("%lf",&x);
     sum = (x-1)/x+(1/2)*((x-1)*(x-1))/(x*x)+(1/2)*((x-1)*(x-1)*(x-1))/(x*x*x)+(1/2)*((x-1)*(x-1)*(x-1)*(x-1))/(x*x*x*x)+(1/2)*((x-1)*(x-1)*(x-1)*(x-1)*(x-1))/(x*x*x*x*x)+(1/2)*((x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1))/(x*x*x*x*x*x)+(1/2)*((x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1))/(x*x*x*x*x*x*x);
    // sum = (x-1)/x +(1/2)pow()
    printf ("sum of frist seven terms :%lf\n",sum);

 }