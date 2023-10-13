//Given the points lies on inside or outsider of the circle
#include <stdio.h>
#include <math.h>
int main()
{
    int x1,y1,x2,y2,r1,r2;
   printf("Enter the value:");
    scanf("%d%d",&x2,&y2);
    x1=0;
    y1=0;
    r1=5;
   //// pow =(x2,y2);
    //c=pow;
    r2= sqrt(pow((x2),2)+pow((y2),2));

    if (r1>r2)

    {
        printf("The point are inside circle");
    }
    else
    {
        printf("The point out side the circle");
    }
    
    return 0;
}