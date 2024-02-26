/*
Write a program to find if a square metrix is symmetric.
*/
#include<stdio.h>
int main(){
    int a[2][2];
    int b[2][2];
    int i,j;
    for(i=0;i<2;i++){
        //for(j=0;j<2;j++){
            printf("Enter the array elements:");
            scanf("%d %d",&a[i][0],&a[i][1]);


        //}
    }
    for(i=0;i<2;i++){
        //for(j=0;j<2;j++){
            printf("%d %d\n",a[i][0],a[i][1]);
        //}
    }
    for(i=0;i<2;i++){
        //for(j=0;j<2;j++){
            printf("Enter the B array elements:");
            scanf("%d %d",&b[i][0],&b[i][1]);


        //}
    }
    for(i=0;i<2;i++){
        //for(j=0;j<2;j++){
            printf("%d %d\n",b[i][0],b[i][1]);
        //}
    }
    if(a[0][0]==b[0][0]||a[0][1]==b[1][0]||a[1][0]==b[0][1]||a[1][1]==b[1][1]){
        printf("matrix symetric");

    }
    else {
        printf ("The array is not symetric: ");
    }

    
    return 0;
}