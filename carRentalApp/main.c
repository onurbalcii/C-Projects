#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cars,geartype,drivers, cardlimit;
    int car1=50, car2=20, car3=70;
    int geartype1=10, geartype2=0;
    int driver=30;
    int days;
    int bill=0;

    printf("Enter your cardlimit: ");
    scanf("%d",&cardlimit);

    printf("How many days you are gonna rent: ");
    scanf("%d", &days);

    printf("Please select your car: (1)BMW=50, (2)FIAT=20, (3)BENZ=70");
    scanf("%d",&cars);

    if(cars==1)
    {
        bill+= car1*days;

    }
    if(cars==2)
    {
        bill+=car2*days;
    }
    if (cars==3)
    {
        bill+=car3*days;
    }

    printf("Which geartype do you choose: (1)Automatic, (2)Manuel");
    scanf("%d", &geartype);

    if (geartype=1)
    {
        bill+=geartype1*days;
    }
    if (geartype=2)
    {
        bill+=geartype2*days;
    }

    printf("Do you want a driver? (1)Yes, (2)No");
    scanf("%d", &drivers);

    if(drivers=1)
    {
        bill+=driver*days;
    }
    printf("Your bill is %d", bill);

    if (bill > cardlimit)
    {
        printf("Your cardlimit is not enough.");
    }
    return 0;
    }
