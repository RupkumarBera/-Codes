#include<stdio.h>



int main(){
    int n;
    printf("Enter the number array :");
    scanf("%d",&n);



    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    int *ptr=arr;
    int s= *ptr;

    for(int i=1;i<n;++i){
        if(*(ptr+i)<s){
            s=*(ptr+i);
        }
    }

        printf("The smallest number is %d",s);
    return 0;
}