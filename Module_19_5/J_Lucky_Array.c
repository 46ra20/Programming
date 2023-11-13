#include<stdio.h>
#include<limits.h>
int main(){
    int n,min=INT_MAX,count=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i]<=min){
            if(min==a[i]){
                count++;
            }
            else{
                min = a[i];
                count=0;
            }
        }
    }
    if((count+1) % 2 ==0) printf("Unlucky");
    else printf("Lucky");
    return 0;
}