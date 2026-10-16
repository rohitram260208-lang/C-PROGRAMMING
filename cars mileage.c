
#include <stdio.h>

int main()
{
    float mileage;
    int petrol, distance;
    float totalDistance;

    scanf("%f", &mileage);
    scanf("%d", &petrol);
    scanf("%d", &distance);

    totalDistance = mileage * petrol;

    if (totalDistance >= distance)
    {
        printf("Can reach");
    }
    else
    {
        printf("Cannot reach");
    }

    return 0;
}
