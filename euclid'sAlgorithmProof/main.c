#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, i, result;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    for(i=1; i <= num1 && i <= num2; ++i)
    {
        if(num1%i==0 && num2%i==0){
            result = i;
        }
    }

    printf("%d and %d GFC result : %d", num1, num2, result);

    return 0;
}
