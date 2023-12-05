#include<stdio.h>
#include<math.h>

float calculateArea(float a, float b, float c) {
    float s =(a+b+c)/2;
    float area = sqrt(s * (s-a)*(s-b)* (s-c));
    return area ;
}
int main(){
    float side1,side2,side3;
    printf("Enter the sides :\n");
    scanf("%f %f %f",&side1,&side2,&side3);
    float trianglearea = calculateArea(side1, side2, side3);
    printf("The area of triangle =%.2lf", trianglearea);
    return 0;
}