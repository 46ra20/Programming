// #include<stdio.h>
// // int recursion(int x){
// //     if(x>=0) recursion(x--);
// // }
// int fun(int x){
//     x--;
//     return fun(x);
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     // printf("%d ",recursion(n));
//     printf("%d ",fun(n));
//     return 0;
// }


// #include<stdio.h>
// int fun(int i){
//     printf("%d \n",i--);
//     if(i>0) fun(i);
// }
// int main(){
//     fun(5);
//     return 0;
// }

#include<stdio.h>
int fun(int i){
    printf("%d \n",i);
    if(i<5) fun(i+1);
}
int main(){
    fun(1);
    return 0;
}