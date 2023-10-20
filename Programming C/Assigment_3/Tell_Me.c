#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        int arr[n],x,count=0;
        for(int i=0;i<n;i++) scanf("%d",&arr[i]);
        scanf("%d",&x);
        for(int i=0;i<n;i++){
            if(arr[i]==x) {
                count=1;
                break;
            }
            else count=0;
        }
        if(count == 1) printf("YES\n");
        else printf("NO\n");
    }
    
    return 0;
}