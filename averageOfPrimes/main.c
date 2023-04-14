#include <stdio.h>

int isPrime(int num)
{
    if(num < 2)
    {
        return 0;
    }

    for(int i = 2; i <= num/2; i++)
    {
        if(num % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    int start, end, count = 0;
    float sum = 0.0, avg;

    printf("Enter the start and end integers: ");
    scanf("%d %d", &start, &end);

    for(int i = start; i <= end; i++)
    {
        if(isPrime(i))
        {
            sum += i;
            count++;
        }
    }

    avg = sum / count;

    printf("The average of prime numbers between %d and %d is %.2f\n", start, end, avg);

    return 0;
}

