/*#include<stdio.h>
#include<unistd.h>
int main (){
    int a;
    for (a=1;a<5;a++)
      fork();
    printf ("1");
}*/
#include<stdio.h>
int main ()
{
  int i=4,j=-1,k=0,w,x,y,z;
  w=i||j||k;
  x=i&&j&&k;
  y=i||j&&k;
  z=i&&j||k;
  printf("x=%d,y=%d,w=%d,z=%d",w,x,y,z);
  return 0;
}