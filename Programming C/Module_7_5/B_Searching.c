#include<stdio.h>
int main(){
    int n,search=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    scanf("%d",&search);
    for(int i=0;i<n;i++)
        {
            if(search==arr[i])
                {
                    search=1;
                    printf("%d",i);
                    break;
                }
        }
    if(search!=1)
        printf("-1");
    return 0;
}