//The three points fall on straight line or not
#include<stdio.h>
int main()
{
    int x1,y1, x2,y2, x3,y3,m ,n;
    printf("Enter the x1,y1 value:\n");
    scanf("%d%d",&x1,&y1);
    printf("Enter the x2,y2 value:\n");
    scanf("%d%d",&x2,&y2);
    printf("Enter the x3,y3 value:\n");
    scanf("%d%d",&x3,&y3);
   //scanf("%d%d%d%d%d%d",&x1,&x2,&x3,&y1,&y2,&y3);
   // area= x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y3);
   m= (y2-y1)/(x2-x1);
   n= (y3-y2)/(x3-x2);
    //printf("The area is");
    if (m==n)
    {
        printf ("This is lies on stright line");

    }
    else
    {
        printf("not  lies straghit liens");
    }
    
    return 0;

}