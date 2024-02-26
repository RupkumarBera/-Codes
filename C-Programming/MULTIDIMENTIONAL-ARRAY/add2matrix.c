/*
Write a program to add two 6x6 matrices.
*/
#include <stdio.h>
int main()
{
    int i,j;
    int a[2][2];
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
        printf("Enter the A array element a[%d][%d]:",i,j);
        scanf("%d",&a[i][j]);
        }
    }

    printf("The  array is:\n");
    for (i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d \t",a[i][j]);
        }
        printf("\n\n");
    }
         int b[2][2];
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
        printf("Enter the A array element b[%d][%d]:",i,j);
        scanf("%d",&b[i][j]);
        }
    }
    printf("The  array is:\n");
    for (i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d \t",b[i][j]);
        }
        printf("\n\n");
    }
    printf("The addition of two array is :\n");
    for (i=0;i<2;i++){
        for(j=0;j<2;j++){
        printf("%d \t",a[i][j]+b[i][j]);
    }
        printf("\n\n");

    }
    return 0;

}