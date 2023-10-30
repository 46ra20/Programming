// #include<stdio.h>
// #include<string.h>
// int is_palindrome(char *ch){
//     int x=strlen(ch),r=1;
//     char s[1000];
//     for(int i=x-1,j=0;i>=0;i--,j++) s[j]=ch[i];
//     s[x] = '\0';

//     for(int i=0;i<x;i++){
//         if(s[i] != ch[i]) r=1;
//     }
//     printf("%d ",r);
//     if(r) return 1;
//     else return 0;
// }
// int main(){
//     char ch[1000];
//     scanf("%s",ch);
//     printf("%d",is_palindrome(ch));
//     // if(is_palindrome(ch)) printf("Palindrome");
//     // else printf("Not Palindrome");
//     return 0;
// }

#include<stdio.h>
#include<string.h>
int is_palindrome(char *ch){
    int x=strlen(ch);
    char s[1000];
    for(int  i=x-1,j=0;i>=0;i--,j++) s[j] = ch[i];
    s[x] = '\0';
    if(strcmp(ch, s)==0) return 1;
    else return 0;
}
int main(){
    char ch[1000];
    scanf("%s",ch);
    if(is_palindrome(ch)) printf("Palindrome");
    else printf("Not Palindrome");
    return 0;
}
