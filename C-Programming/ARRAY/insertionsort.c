#include<stdio.h>
#include<ctype.h>
void insertionsort(int arr[],int n){
    int i,key,j;
    for(int i=1;i<n;i++){
        key=arr[i];
        j=i-1;

        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]= key;
    }
}
int main(){
    int n;
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("The %d element\n" ,n);
    for(int i=0;i<n;++i){
        scanf("%d",&arr[i]);
    }
    insertionsort(arr,n);
    printf("sorted array: \t");
    printf("\n");
    for(int i= 0;i<n;i++){
    printf( " %d ", arr[i] );
    }

    return 0;
        }




