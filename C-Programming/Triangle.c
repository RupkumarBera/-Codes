#include<stdio.h>
#include<conio.h>


    int main ()
    {
        int a,b,c;
        printf("Enter the Degree of a :");
        scanf("%d",&a);
        printf("Enter the Degree of b :");
        scanf("%d",&b);
        printf("Enter the Degree of c :");
        scanf("%d",&c);

        if (a+b+c==180)
        printf("There is a Triangle :");
        else
        printf("That is not a Triangle :");
        return 0;


        
        
    }