/*population of a town today 100000 .The poulation has increased  steadily at rate of 10% per year for last 
10 years . write a programe to determine the population at the end of  each year in the last decade*/
#include<stdio.h>
#include<math.h>
int main () {

     double p,r,i;
     
     p=100000;
     r=.10;
     for (i=10; i<=10; i++){

        p += p*r;
       
        printf("%.2lf\t%.2lf\n",p,i);
      
     }
   
     return 0;
}