#include<stdio.h>
#include<string.h>
int main(){
    char a[1001],b[1001];
    scanf("%s",&a);
    scanf("%s",&b);
    printf("%d %d\n",strlen(a),strlen(b));
    printf("%s %s",a,b);
    return 0;
}