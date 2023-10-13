/*if the three sides of a triangle are enter to the keyboard,write a program to check whether the triangle is isosceles
equilateral,scalene or right angle*/
#include<stdio.h>
# include <math.h>
int main()
{
    int side1,side2,side3;
    printf("\n Enter the three side of triangle\n");
    scanf("%d%d%d",&side1,&side2,&side3);
    
        if(side2+side1>side3 ||side1+side3>side2||side2+side3>side1 )
        {
           if (side1 ==side2 && side2 == side3){
            printf("This is a equilateral\n");
           }
            else if (side1==side2 ||side2==side3 ||side1==side3){
            printf("This is isoseles\n");
           }
                else if (side1*side1==side2*side2+side3*side3 || side2*side2==side1*side1+side3*side3 || side3*side3==side1*side1+side2*side2){
                    printf ("This is right angle\n");
                }
                else{
                     printf ("This is scalene\n");

                }

        

         }
         else{
            printf ("This is not a triangle\n");
         }
    
   
        return 0;
    
    
    
}