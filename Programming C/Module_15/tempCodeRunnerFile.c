#include<stdio.h>
int main(){
    int arr[5] ={1,2,4,5,6};
    printf("%d\n",arr[8]); 
    printf("%d\n",*(arr+8));
    
    return 0;
}