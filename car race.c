

#include <stdio.h>

int main()
{
    int a, b, c, car;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &car);

    if (a % car == 0)
    {
        printf("Car 1 goes into road A");
    }
    else if (b % car == 0)
    {
        printf("Car 1 goes into road B");
    }
    else if (c % car == 0)
    {
        printf("Car 1 goes into road C");
    }
    else
    {
        printf("No path exists");
    }

    return 0;
}
