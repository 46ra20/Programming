#include<stdio.h>
int arr[3][3],ans=1;
int main(){
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i != j && arr[i][j] != 0){
                ans = 0;
                break;
            }
            else if(i == j && arr[i][j] != 1){
                ans = 0;
                break;
            }
        }
    }
    if (ans)
    {
        printf("YES");
    }
    else printf("NO");
    

    return 0;
}