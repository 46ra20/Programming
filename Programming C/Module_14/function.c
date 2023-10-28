#include<stdio.h>
int add(int a,int b){
    return a+b;
}

int add_no_return(int a,int b){
    printf("add_no_return = %d\n",a+b);
}
int return_no_parameter(void){
    int a,b;
    scanf("%d %d",&a,&b);
    return a+b;
}

int no_return_no_parameter(void){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("no return no parameter = %d\n",a+b);
}

int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    add_no_return(x,y);
    printf("return with parameter = %d\n",add(x,y));
    printf("return no parameter = %d\n",return_no_parameter());
    no_return_no_parameter();
    return 0;
}