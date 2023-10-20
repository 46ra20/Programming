#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    char s[10001];
    while (t--)
    {
        scanf("%s",s);
        int count[3]={0};
        for(int i=0;i<strlen(s);i++){
            if(s[i]>='A' && s[i]<='Z') count[0]++;
            else if(s[i]>='a' && s[i]<='z') count[1]++;
            else if(s[i]>='0' && s[i]<='9') count[2]++;
        }
        for(int i=0;i<3;i++) printf("%d ",count[i]);
        printf("\n");
    }
    
    return 0;
}