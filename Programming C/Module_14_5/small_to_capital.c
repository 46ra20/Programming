#include<stdio.h>
char small_to_capital(){
    char ch;
    scanf(" %c",&ch);
    if(ch>='a' && ch<='z'){
        ch-=32;
        printf("%c",ch);
    }
    else{
        ch+=32;
        printf("%c",ch);
    }

}


int main(){
    char c;
    // scanf(" %c",&c);
    // printf("%c",small_to_capital(c));
    small_to_capital();
    return 0;
}