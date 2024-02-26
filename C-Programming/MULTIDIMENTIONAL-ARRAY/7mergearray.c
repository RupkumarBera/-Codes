#include<stdio.h>
int main(){
    int i,j;

    int a[]={1,3,-1,-2,-4,5,6,6,61,5,2,3,3,3,2,-1};
    int size =sizeof(a)/sizeof(a[0]);

    int mid;
    mid=size/2;
    //int a1[mid];
    // //int a1[mid];
    // for(int i=0;i<mid;i++){
    //     for (int j=0;j<mid;j++){
    //         if(a1[j]>a[j+1]){
    //             int temp=a1[j+1];
    //             a1[j+1]=a1[j];
    //             a1[j]=temp;
    //             //printf("the sorted array is:");
    //         }
    //         //printf("\n\n");
    //     }
    //     //printf("the sorted array is:");
    // }
    // for(int i=0;i<mid;i++)
    // printf("\t %d",a[i]);
    // return 0;
    for(i=0;i<mid;i++){
        for(j=0;j<mid;j++){
            if(a[j]>a[j+1]){
                int temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;

            }
            
        }
        
    }
    
        for(i=0;i<mid;i++){
            printf("\t %d",a[i]);
        }
            printf("\n\n");
         printf("mid +1  saorted element\n");
            for(i=mid;i<size;i++){
        for(j=mid;j<size;j++){
            if(a[j]>a[j+1]){
                int temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;

            }
            
        }
        
    }
    
        for(i=mid;i<size;i++){
            printf(" \t %d",a[i]);
        }
            return 0;
}


