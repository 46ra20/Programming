// #include <stdio.h>
// int main()
// {
//     int n, m, flag = 1;
//     scanf("%d%d", &n, &m);
//     int arr[n][m];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//             scanf("%d", &arr[i][j]);
//     }
//     if (m != n)
//         printf("NO\n");
//     else
//     {
//         for (int i = 0, k = n - 1; i < n; i++, k--)
//         {
//             for (int j = 0, h = n - 1; j < m; j++, h--)
//             {
//                 if (i == j)
//                 {
//                     if (arr[i][j] != 1 || arr[i][h] != 1)
//                     {
//                         flag = 0;
//                         break;
//                     }
//                 }
//                 else if (i != h && j != k && arr[i][j] != 0)
//                 {
//                     flag = 0;
//                     break;
//                 }
//             }
//         }
//     }

//     if (flag == 1)
//         printf("YES\n");
//     else
//         printf("NO\n");
//     return 0;
// }


#include<stdio.h>
int main(){
    int n,m,flag=1;
    scanf("%d%d",&n,&m);
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) scanf("%d",&arr[i][j]);
    }
    for(int i=0,k=n-1;i<n;i++,k--){
        for(int j=0,h=m-1;j<m;j++,h--){
            if(i==j){
                if(arr[i][j] != 1 || arr[i][h] != 1){
                    flag = 0;
                    break;
                }
            }
            // printf("%d %d %d %d\n",i,j,k,h);
            else if(i != h && j != k && arr[i][j] !=0 ){
                flag = 0;
                break;
            }
        }
    }
    if(flag==1) printf("YES\n");
    else printf("NO\n");
    return 0;
}