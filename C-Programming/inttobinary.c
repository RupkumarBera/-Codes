/* Integer to binary convertion with out usingn funtion
#include<stdio.h>

int main(){
    int decimal,binary =0,base=1,reminder;
    printf("Enter the decimal number :");
    scanf("%d",&decimal);
    while(decimal>0)
    {
        reminder=decimal%2;
        binary=binary+reminder*base;
        decimal=decimal/2;
        base= base*10;
    }

    printf("Bianry number is :%d",binary);
    return 0 ;
}*/
//Integer to binary convertion using funtion
#include<stdio.h>
long long decimaltobinary(int decimal  ){
 long long binary = 0;
 int base=1;
 int reminder;

 while(decimal>0)
    {
        reminder=decimal%2;
        binary=binary+reminder*base;
        decimal=decimal/2;
        base= base*10;
    }
    return binary;
}
    int main () {
        int decimal;
        printf("Enter the decimal number :");
    scanf("%d",&decimal); 
   
    printf("Bianry number is :%lld",decimaltobinary(decimal));
    return 0;
    }

