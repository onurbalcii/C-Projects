#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i;

    printf("The numbers divisible by 3 and 5 are: ");

    for(i=1; i<=100; i++)
    {
        if(i%3==0 && i%5==0)
        {
            printf("%d\n", i);
        }
    }
}

