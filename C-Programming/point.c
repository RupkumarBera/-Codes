//The points lies on x axis or y axis or origin
#include <stdio.h>
#include<math.h>
int main ()
{
    int x1,y1;
    printf("Enter the number :");
    scanf("%d%d",&x1,&y1);
    if (x1==0 && y1==0)
    
        printf ("lies on origin");

    
    if (x1==0)
    
        printf("Lies on x axis");

    
    if (y1==0)
    
        printf ("Lies on y axis);
        return 0;

    
}