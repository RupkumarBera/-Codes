// Sum of 25 natural number without funtioncall
// #include<stdio.h>

// int main(){
//     int num1=0,sum;
    
//     for(int num2=1;num2<=25;num2++){
//         sum=num1+num2;
//         num1=sum;
//     }
//     printf("Sum of the 25 natural number is :%d",sum);
// }
// //using funtion call
#include<stdio.h>

int sumofn(int n ){
    if(n==0){
        return 0;

    }
    else{
        return n + sumofn(n-1);
    }
}

int main(){
    int result=sumofn(25);
    printf("sum is:  %d",result);
    return 0;
}