#include <stdio.h>

int main()
{
    int day, month, year, days_count = 0;
    int days_in_month[] = {31,28,31,30,31,30,31,31,30,31,30,31};

    printf("Enter the date (dd mm yyyy): ");
    scanf("%d %d %d", &day, &month, &year);


    if((year%4==0 && year%100!=0) || year%400==0)
    {
        days_in_month[1] = 29;
    }


    for(int i = 0; i < month-1; i++)
    {
        days_count += days_in_month[i];
    }

    days_count += day;

    printf("The number of days from the beginning of the year is %d\n", days_count);

    return 0;
}

