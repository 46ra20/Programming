#include<stdio.h>
#include<string.h>
int main(){
    char a[20],b[10];
    scanf("%s %s",a,b);
    for(int i=0;i<strlen(b);i++){
        a[i]=b[i];
    }
    a[strlen(b)]='\0';
    printf("%s\n",a);
    printf("%s",strcpy(a,b));

    
    return 0;
}