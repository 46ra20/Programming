#include<stdio.h>
#include<string.h>
int main(){
    char s[1000],ans[1000];
    scanf("%s",s);
    int j=0,answer=1;
    for(int i=strlen(s)-1;i>=0;i--)
        {
            ans[j]=s[i];
            j++;
        }
    ans[strlen(s)]='\0';

    for(int i=0;i<strlen(s);i++){
        if(ans[i]!=s[i]){
            answer=0;
            break;
        }
    }

    if(answer==1)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}