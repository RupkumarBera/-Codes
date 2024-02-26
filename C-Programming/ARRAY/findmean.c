/*
Find the standard divison given the data set
*/
#include<stdio.h>
#include<math.h> 
int main ( ){
int arr[]={-6,-12,8,13,11,6,7,2,-6,-10,11,10,9,2};
int size = sizeof (arr)/sizeof (arr[0]);
printf ("Display the array ");
for ( int i=0;i<size;++i){
    printf(" %d ",arr[i]);


}
double sum =0;
for(int i=0;i<size;i++){
    sum += arr[i];
}
double mean = sum/size;

double sum_squared_diff = 0;
for(int i= 0;i< size ; ++i){
    sum_squared_diff += pow(arr[i] - mean ,2);
}

double std_dev = sqrt(sum_squared_diff/size);



printf(" Mean : %lf\n" , mean);
printf("Standerd divison : %lf\n",std_dev);

    return 0;
}