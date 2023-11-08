//write a program to read 10 set of p,q,r& n and calculate the corresponding as.
#include<stdio.h>
#include<math.h>
int main () 
{
    int sets;
    for( int i=0;i<10;i++)
    {
     double p,q,n,a,r;
     
     
     printf ("Enter the principal compounds ");
     scanf("%lf",&p);
     printf ("Enter the interest compounds ");
     scanf("%lf",&r);
     printf ("Enter the year ");
     scanf("%lf",&n);
     printf ("Enter the time per year ");
     scanf("%lf",&q);
     a = p*pow(1+(r/(100*q)),(n*q));
     printf("The compound amount a =%.2lf\n",a);
    }
    return 0;


}