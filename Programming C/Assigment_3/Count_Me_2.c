#include<stdio.h>
#include<string.h>
int main(){
    char s[100001],vowel[6]={'a','e','i','o','u','\0'};
    scanf("%s",s);
    s[strlen(s)]='\0';
    int count=0,len=strlen(s);
    for(int i=0;i<len;i++){
        for(int j=0;j<strlen(vowel);j++){
            if(s[i]==vowel[j]){
                count++;
            }
        }
    }
    printf("%d",len-count);
    return 0;
}