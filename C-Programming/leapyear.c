/*Any year is entered trough the keyboard .
write a funtion to determine whether the year is leap year or not*/
#include<stdio.h>
#include<stdlib.h>


void leapyear(){
   
   printf ("This is a leap year\n");
 
    return ;

}

int main () {
      int year;
    printf("Enter the year\n");
    scanf("%d",&year);
   if(( year%4==0 && year%100!=0)||(year%400==0)) 
   
    printf("leap year\n");
    else
    printf ("not leap year\n");
    void leapyear();
    return 0;

    }
  