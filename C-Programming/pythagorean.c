//write a program to generate all pythagorean triplets withs side length less than or equal to to 30
#include<stdio.h>
#include<math.h>
int main ()
{
    int a,b,c;

    printf("Pythagorean triplets with length is<=30\n");
    
    for(a =1; a<=30;a++){
        for(b=a;b<=30;b++){
            c=a*a+b*b;
            c=(int)sqrt(c);
            if(c*c==a*a+b*b && c<=30){
                printf("%d,%d,%d\n",a,b,c);

            }
        }
    
   
    }
    return 0;
}
