/*
write  a programe to print the multiplication table of the number entered by the user . the table 
should be displayed in the fllowing
29*1=29
29*2=58
...
*/
#include<stdio.h>
int main (){

    int i,j,mul,n1,n2;
    printf ("Enter the n1 value:");
    scanf("%d",&n1);
    printf("Enter the n2 value:");
    scanf("%d",&n2);
    for(i=1;i<=n1;i++){
        for(j=1;j<=n2;j++)
        {
            mul=i*j;
            printf("i=%d j=%d mul=%d\n",i,j,mul);
        }
    }
    return 0;
}