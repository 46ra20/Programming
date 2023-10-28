#include<stdio.h>
int main(){
    int arr[3],c_arr[3];
    for(int i=0;i<3;i++) scanf("%d",&arr[i]);
    for(int i=0;i<3;i++) c_arr[i] = arr[i];
    
    for(int i=0;i<3-1;i++){
        for(int j=i+1;j<3;j++){
            if(arr[i]>arr[j]){
                int tem= arr[i];
                arr[i] = arr[j];
                arr[j] = tem;
            }

        }
    }
    for(int i=0;i<3;i++) printf("%d\n",arr[i]);
    printf("\n");
    for(int i=0;i<3;i++) printf("%d\n",c_arr[i]);
    return 0;
}