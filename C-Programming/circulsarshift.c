/* 
given the variables  x ,y,z write a funtion to circularly shift ther values to right.
*/
#include<stdio.h>
#include<math.h>
 
 void  circularshift (int *a , int *b, int *c ){
int temp= *a;
*a=*c;
*c=*b;
*b=temp;
 }
 


 int main(){
     int x ,y,z;
     printf ("Enter the number of x");
     scanf("%d",&x);
     printf ("Enter the number of y");
     scanf("%d",&y);
     printf ("Enter the number of z");
     scanf("%d",&z);
     circularshift(&x,&y,&z);

     printf(" After circularshift  : x=%d, y=%d, z=%d",x,y,z);

     return 0;
 }