#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,result=0;
    printf("Enter num1 and num2 (where result = num1/num2) ");
    scanf("%d%d",&num1,&num2);
    if(num2==0)
        printf("Can't divide by zero");
    else
    {
        while(num1>0 && num1>=num2)
        {
            num1 = num1-num2;
            result++;
        }
        printf("The result is %d",result);
    }
    return 0;
}

