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

    for(i=0; i<9; i++){
        for(j=i+1;j<10;j++){
            if (A[i]>A[j]){
                enk=A[i];
                A[i]=A[j];
                A[j]=enk;
            }
        }
    }

    printf("\nDizinin Sirali hali.:\n");
    for(i=0;i<10;i++){
        printf("%d ", A[i]);
    }

    printf("\nEn kucugu:%d" , A[0]);
    printf("\n2. En kucuk:%d" , A[1]);
    printf("\nEn buyugu:%d" , A[9]);

    return 0;

}



