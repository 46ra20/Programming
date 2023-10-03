#include<stdio.h>
int main(){
    int tk;
    scanf("%d",&tk);
    if(tk>=100){
        printf("Bat Khabo\n");
        if(tk>=500){
            printf("Bater shathe gosto khabo\n");
        }
        else if (tk>=200)
        {
            printf("Bater shathe morgi khabo\n");
        }
        else{
            printf("Bater shathe mach khabo\n");
        }
        
    }
    else{
        printf("Bon kola khabo\n");
    }
    return 0;
}