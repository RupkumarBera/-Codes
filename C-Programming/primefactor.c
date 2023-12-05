#include<stdio.h>
void primefactors(int n){
    while (n % 2 == 0){
    printf ("%d",2);
    n = n/2;
    }
    for (int i = 3 ;i*i <= n ;i = i+2){
        while(n % i == 0){
            printf("%d",i);
            n = n/i;
        }

       }
    if(n > 2){
        printf("%d",n);
    }
}
int main (){
    int num;
    printf("Enter the number ");
    scanf("%d",&num);

    printf("prime factors are:\n ");
    primefactors(num);

    return 0;
}