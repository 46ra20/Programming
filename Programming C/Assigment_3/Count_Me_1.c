#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n],count=0,j=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            count++;
        }
        else if(arr[i]%3==0){
            j++;
        }
        
    }
    printf("%d %d\n",count,j);
    return 0;
}