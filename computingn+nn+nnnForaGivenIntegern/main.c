#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num,result;
    printf("Enter a integer:\n");
    scanf("%d" ,&num);

    result = num + num*11 + num*111;

    printf("Result: %d" , result);

    return 0;
}
