/*parmutation and combination*/
#include<stdio.h>


int factorial(int x){
   int fact =1 ;
   for(int i=2;i<=x;i++){
      fact =fact*i;
   }

  // int combination =(n*fact)/((r*fact)*((n-r)*fact));
   return fact;

}
int main (){
    
    int n;
    printf("enter the n :");
    scanf("%d", &n);
    int r;
    printf("Enter r :");
    scanf("%d",&r);
    int ncr=factorial(n)/(factorial(r)*factorial(n-r));
  printf("%d",ncr);
     return 0;
}