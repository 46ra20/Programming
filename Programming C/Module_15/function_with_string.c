#include<stdio.h>
#include<string.h>
char fun(char ch[],int x){
    for(int i=0;i<x;i++) printf("%c ",*(ch+i));
}
int main(){
    char ch[20];
    scanf("%s",ch);
    // printf("%d",strlen(ch));
    fun(ch,strlen(ch));
    return 0;
}