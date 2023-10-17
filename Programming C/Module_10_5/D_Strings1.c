#include<stdio.h>
#include<string.h>
int main(){
    char a[10],b[10],tem;
    scanf("%s %s",a,b);
    printf("%d %d\n",strlen(a),strlen(b));
    printf("%s%s\n",a,b);
    tem = a[0];
    a[0]=b[0];
    b[0]=tem;
    printf("%s %s\n",a,b); 
    return 0;
}