/*
Jack has an array A of Length N. He wants to label whether the number
in the array is even or odd.Your task is to help him find and return a 
string with labels even or odd in sequence accourding to which  the number appar 
in the array
*/

#include<stdio.h>
#include<string.h>


int main(){
    char ans[100]= "";
    int arr[]={2,3,5,6,7};

    int len = sizeof(arr)/sizeof(arr[0]);
    for(int i =0;i<len ;i++){
        if(arr[i]%2 == 0){
            strcat(ans, "even ");
        }
        else{
            strcat(ans, "odd ");
        }
    }

    printf("%s\n ",ans);
    return 0;

}
