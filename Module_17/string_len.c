#include<stdio.h>
int fun(char *ch,int i){
    if(ch[i]=='\0') return 0;
    int count = fun(ch,i+1);
    return count+1;
}
int main(){
    char ch[29] = "Hello hello\0";
    int x = fun(ch,0);
    printf("%d ",x);
    return 0;
}