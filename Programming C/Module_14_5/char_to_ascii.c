#include<stdio.h>
int char_to_ascii(char ch){
    printf("%d\n",ch);
    // return ch;
}
int main(){
    char c;
    scanf(" %c",&c);
    // printf("%d",char_to_ascii(c));
    char_to_ascii(c);
    return 0;
}