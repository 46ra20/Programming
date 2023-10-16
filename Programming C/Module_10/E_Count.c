#include<stdio.h>
int main(){
    char s[1000001];
    scanf("%s",&s);
    int sum=0, i=0;
    while (s[i]!='\0')
    {
        /* code */
        sum+=(s[i]-'0');
        i++;
    }
    printf("%d",sum);

    return 0;
}