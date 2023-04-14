#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n,b,i,m;

	printf("Enter the no upto which do you want to print prime no \n");
	scanf("%d",&m);
	for(b=2;b<=m;b++){

 	 i=2;
 	while(b%i!=0){
  		i++;
  	}

       if(i==b){
		printf("%d\n",b) ;
        }

  }
 	return 0;
}

