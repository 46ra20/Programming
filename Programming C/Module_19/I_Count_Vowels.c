#include<stdio.h>
#include<string.h>
int fun(char *ch,int i,int count){
    if((strlen(ch)) == i) return count;
    char vowel[] = {'a','e','i','o','u'},s_ch;
    s_ch = ch[i];
    if(s_ch>='A' && s_ch<='Z') s_ch = ch[i]+32;
    for(int j=0;j<5;j++){
        if(vowel[j] == s_ch){
            count++;
            // printf("%c ",ch[i]);
        }
    }
    fun(ch,i+1,count);
}
int main(){
    char s[205];
    fgets(s,205,stdin);
    s[strlen(s)] = '\0';
    int x = fun(s,0,0);
    printf("%d",x);
    return 0;
}