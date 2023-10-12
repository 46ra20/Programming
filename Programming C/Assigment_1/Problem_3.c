#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d",&n);
    if(n>=0){
        if(n%3==0)
            printf("YES");
        else
            printf("NO");
    }
    return 0;
}
