#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int value, num, result = 0;
	printf("\nEnter an number : ");
	scanf("%i", &num);
	while(num > 0) {
		value = num % 10;
		result = result + value;
		num = num / 10;
	}
	printf("\nSum of result in numbers : %i", result);
	return 0;
}
