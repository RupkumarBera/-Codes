/*
According  to the study ,the approximate level of intelligence of aperson can be calculate using 
flloing formula:i=2+(y+0.5*x)
write a program  taht will produce a table of values of i,y and  x,whwere y varies from 1 to 6 
for each value of y,x varies from 5.5 to 12.5 in steps of 0.5
*/
# include<stdio.h>
int main (){

    int y;
    float i,x;
    //i=2+(y+0.5*x);
    for (y=1;y<=6;y++) 
    {
        for(x=5.5;x<=12.5;x+=0.5)
        {
            i=(2+(y+0.5*x));
            printf("i=%.2f,y=%d,x=%.2f\n",i,y,x);
        }
    }
    return 0;
}