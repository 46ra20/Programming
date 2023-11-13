#include<stdio.h>
#include<string.h>
int main(){
    char s[1001];
    scanf("%s",s);
    int i=0,j=strlen(s)-1;
    int flag = 1;
    while(i<j){
        if(s[i] != s[j]) flag=0;
        j--;
        i++;
    }
    if(flag) printf("YES");
    else printf("NO");

    return 0;
}