#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,pathaan=0,tiger=0;
        scanf("%d",&n);
        char ch[n+1];
        scanf("%s",ch);
        for(int i=0;ch[i]!='\0';i++){
            if(ch[i]=='t'||ch[i]=='T') tiger++;
            else if(ch[i]=='p' || ch[i]=='P') pathaan++;
        }
        if(pathaan>tiger) printf("Pathaan\n");
        else if(pathaan<tiger) printf("Tiger\n");
        else printf("Draw\n");
    }
    return 0;
}