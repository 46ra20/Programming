#include <stdio.h>
int main()
{
    // Arithmatic Operator, Logical Operator, Relational Operator
    //+,-,/,*  this called is arithamatic operator
    //<,>,<=,>=,!=,== this is relational operator
    //&&,|| this is logical operator
    printf("%d\n", 6 + 5);
    printf("%d\n", 6 - 5);
    printf("%d\n", 6 * 5);
    printf("%f\n", 6.0 / 4);

    // printf("%s",6==6);
    int tk;
    scanf("\n%d", &tk);
    if (tk >= 5000)
    {
        printf("Cox'bazar jabo");
    }
    else
    {
        printf("Jabo na");
    }

    return 0;
}