#include <stdio.h>
#include <stdlib.h>

int main(){

    int num,k,prime,sum=0;

    for(num=2;num<=100;++num){

    prime=0;

    for(k=2;k<=num/2;k++){

        if((num % k) == 0){
        prime++;
        break;
        }
    }
   if(prime==0)
   sum += num;
   }

   printf("\n  Sum of prime numbers is:   %d ",sum);

   return 0;

}

