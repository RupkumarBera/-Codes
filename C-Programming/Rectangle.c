/*Find the Area of Rectangle is gearter thans its perimeter*/
#include<stdio.h>
int main ()
{
    int l,w,area ,perimeter;
    //area= l*w;
    
   // perimeter= 2*l+2*w;
   
    printf("Enter the l,w :");
    scanf("%d%d",&l,&w);
    area= l*w;
    perimeter= 2*l+2*w;
    
   // Printf ("The perimeter:");
    // printf("The Area :");
    if (area>perimeter)
    {
        printf("The area is Gretar than perimeter :");
    }
     else
     {
       printf("The perimeter is gretar:");
      }

    return 0;
}