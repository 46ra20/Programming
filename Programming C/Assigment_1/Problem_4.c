#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    scanf("%d",&n);
    if(21<=n && n<=10000){
        for(int i=21;i<=n;i++){
            if(i%3==0&&i%7==0)
                printf("%d\n",i);
        }
    }
    return 0;
}
