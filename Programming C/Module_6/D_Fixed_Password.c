#include<stdio.h>
int main(){
    int a,n=1999;
    while (1)
    {   
        scanf("%d",&a);
        if(n==a)
        {
            printf("Correct");
            break;
        }
        else
            printf("Wrong\n");
    }
    
    return 0;
}