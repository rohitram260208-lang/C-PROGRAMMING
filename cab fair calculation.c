#include <stdio.h>
#include <string.h>

int main() {
    double distance, fare = 100;
    char member[10];

    scanf("%lf %9s", &distance, member);

    if (distance > 10) {
        fare = fare + (distance - 10) * 20;
    }

    if (strcmp(member, "true") == 0) {
        fare = fare * 0.90;
    }

    printf("Final Fare: \xE2\x82\xB9%.0f\n", fare);

    return 0;
}