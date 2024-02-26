/*
For the following set n data points (x,y) write a program to compute  the
correlation cofficient r, given by
*/
#include<stdio.h>
#include<math.h>

int main(){
double x[]={34.22,39.87,41.85,43.23,40.06,53.29,53.29,54.14,49.12,40.71,55.15};
double y[]={102.43,200.93,97.43,97.81,98.32,100.07,97.81,98.32,100.07,97.08,91.59,94.85,94.65};
int n =sizeof(x)/sizeof(x[0]);
double meanx=0,meany=0;
for(int i=0;i<n; i++){
    meanx+=x[i];
    meany+=y[i];
}
meanx  /=n;
meany  /=n;

double numerator=0,denominatorx=0,denominatory=0;
for(int i=0;i<n;i++){
    numerator+=(x[i]-meanx)*(y[i]-meany);
    denominatorx += pow(x[i]-meanx,2);
    denominatory += pow(y[i]-meany,2);
}
double correlation = numerator/sqrt(denominatorx*denominatory);

printf("Correaltion coeficient : %2lf\n",correlation);

return 0;
}