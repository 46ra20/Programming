#include<stdio.h>
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) scanf("%d",&arr[i][j]);
    }
    int x,ans=0;
    scanf("%d",&x);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j] == x){
                ans = 1;
                break;
            }
        }
    }
    if(ans) printf("will not take number");
    else printf("will take number");
    return 0;
}