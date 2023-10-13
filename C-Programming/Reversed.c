#include<stdio.h>
#include<conio.h>
int main () {

   int a ;
   
   printf ("Enter the  5 digit Number :");
   scanf("%d",&a);
   
int b =(a%10)*10000+((a/10)%10)*1000+((a/100)%10)*100+((a/1000)%10)*10+((a/10000)%10);
printf ( "Revers number: %d ",b);


if (a==b)
  printf("\nequal");
  else
  printf("\nNot equal");
return 0;
    
}