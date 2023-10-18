#include<stdio.h>
#include<string.h>
int main(){
    char a[10],b[10];
    scanf("%s %s",a,b);
    // printf("%d",strcmp(a,b));
    int i=0;
    while (1)
    {
        if(a[i]=='\0'){
            printf("a choto\n");
            break;
        }
        else if(b[i]=='\0'){
            printf("b choto\n");
            break;
        }
        else if(a[i]==b[i]){
            printf("both are same\n");
            break;
        }
        i++;
    }
    
    return 0;
}