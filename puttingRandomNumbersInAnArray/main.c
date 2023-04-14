#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i,j,enk, A[10];
    srand(time(0));
    printf("Dizinin sirasiz hali:\n");
    for(i=0; i<10; i++) {
        int x=1+rand()%99;
        A[i]=x;
        printf("%d ", A[i]);
    }
}
