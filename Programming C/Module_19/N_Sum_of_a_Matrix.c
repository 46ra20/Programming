// #include<stdio.h>
// int main(){
//     int n,m;
//     scanf("%d%d",&n,&m);
//     int a[n][m],b[n][m],c[n][m];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             scanf("%d",&a[i][j]);
//         }
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             scanf("%d",&b[i][j]);
//         }
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             c[i][j]=a[i][j]+b[i][j];
//             printf("%d ",c[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }


#include<stdio.h>
void fun(int i,int j,int n,int m,int a[n][m],int b[n][m]){
    if(i<n){
        if(j<m){
            printf("%d ",a[i][j]+b[i][j]);
            fun(i,j+1,n,m,a,b);
        }
        else{
            printf("\n");
            fun(i+1,0,n,m,a,b);
        }
    }
    else return;
}
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int a[n][m],b[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&b[i][j]);
        }
    }
    fun(0,0,n,m,a,b);

    
    return 0;
}