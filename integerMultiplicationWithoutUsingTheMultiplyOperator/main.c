#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,result=0;

    printf("Enter first number:");
    scanf("%d" , &num1);

    printf("Enter second number:");
    scanf("%d" , &num2);

    for(int i=1;i<=num1;i++){
        result=result+num2;
    }

    printf("Multiply result: %d" , result);

    return 0;
}
