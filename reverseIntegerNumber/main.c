#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,reverb;

    printf("Enter a number: ");
    scanf("%d",&num);

    printf("Reverb the number: ");
    while(num > 0){

        reverb = num % 10;
        printf("%d",reverb);
        num = num / 10;
    }
}

