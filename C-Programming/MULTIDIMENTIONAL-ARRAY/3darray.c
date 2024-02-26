/*
How will you initialize a three-dimensional array threed[3][2][3]?
how you will refer the frist and last element of the array?
*/
#include<stdio.h>
int main(){
    int a [3][2][3];
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            printf ("Enter the three element :\n");
            scanf("%d %d %d ",&a[i][j][0],&a[i][j][1],&a[i][j][2]);

        }
    }
    for(i=0;i<3;i++){
    for(j=0;j<2;j++){
        printf("%d %d %d\n ",a[i][j][0],a[i][j][1],a[i][j][2]);


    }
   

    }
     printf("Frist element af the array is : %d\n" ,a[0][0][0]);
    printf("last element af the array is : %d" ,a[2][1][2]);
    return 0;
}