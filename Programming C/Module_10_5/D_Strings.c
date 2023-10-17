#include<stdio.h>
#include<string.h>
int main(){
    char a[12],b[12],tem;
    scanf("%s %s",a,b);
    printf("%d %d\n",strlen(a),strlen(b));

    int len= strlen(a)+strlen(b);
    char ans[len];
    for(int i=0;i<strlen(a);i++)
        ans[i]=a[i];
    int j=0;
    for(int i=strlen(a);i<len;i++){
        ans[i]=b[j];
        j++;
    }
    ans[len] ='\0';

    tem = a[0];
    a[0]=b[0];
    b[0]=tem;
    printf("%s\n%s %s\n",ans,a,b); 
    return 0;
}