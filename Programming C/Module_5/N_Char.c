#include<stdio.h>
int main(){
    char chr;
    scanf("%c",&chr);
    if(chr>=65 && chr<=90)
        printf("%c",chr+32);
    else
        printf("%c",chr-32);
    return 0;
}