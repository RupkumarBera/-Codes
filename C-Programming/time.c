/*
write a program to print 24 hours in day with suitble suffixes like AM, PM,NOON, MIDNIGHT
*/
#include<stdio.h>
int main (){
     int hour;
    // printf("Enter the time\n");
     //scanf("%d",hour);
     for(hour =0;hour<24;hour++) {
        if (hour==0){
        printf("12 midnight\n");}
        else if(hour<12){
        printf("%d AM\n",hour);}
        else if (hour == 12){
        printf(" 12 NOON\n",hour);}
        else  {
        printf("%d Pm\n",hour-12);}

     }
return 0;
}