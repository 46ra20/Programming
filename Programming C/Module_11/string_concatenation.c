#include<stdio.h>
#include<string.h>
int main(){
    char a[20],b[10];
    scanf("%s %s",a,b);
    // printf("%s\n",strcat(a,b));
    int c=strlen(a);
    for(int i=0;i<strlen(b);i++){
        a[c]=b[i];
        c++;
    }
    printf("%s\n",a);
    return 0;
}