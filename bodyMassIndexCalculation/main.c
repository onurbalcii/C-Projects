#include <stdio.h>
#include <stdlib.h>

int main()
{
    float h, w, bmi;

    printf("Please enter your height in meters: ");
    scanf("%f", &h);

    printf("Please enter your weight in kilograms: ");
    scanf("%f", &w);

    bmi = w / (h * h);

    printf("Your bmi is %f\n", bmi);

    if (bmi < 18.5)
    {
        printf("Your bmi category is: Underweight");
    }
    else if (bmi >= 18.5 && bmi <= 24.9)
    {
        printf("Your bmi category is: Normal");
    }
    else if (bmi >= 25 && bmi <= 29.9)
    {
        printf("Your bmi category is: Overweight");
    }
    else if (bmi >= 30)
    {
        printf("Your bmi category is: Obese");
    }

    return 0;
}
