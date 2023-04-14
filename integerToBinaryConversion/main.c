#include <stdio.h>
#include <stdlib.h>

int main(){
    int num,temp,i=1,binary[100];

    printf("Enter a positive number: ");
    scanf("%d",&num);

    temp = num;
    while(temp != 0){
        binary[i]= temp % 2;
        temp = temp / 2;
        i++;
    }

    printf("%d binary type transformation : ", num);
    for(int b = i-1 ; b>0 ; b--)
        printf("%d",binary[b]);

}
