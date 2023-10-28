#include<stdio.h>
int my_len(char *ch){
    int i=0;
    for(;ch[i]!='\0';i++);
    return i;
}
int main(){
    char ch[20];
    scanf("%s",&ch);
    printf("%d",my_len(ch));
    return 0;
}