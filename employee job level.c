

#include <stdio.h>

int main() {
    int years, performance;

    scanf("%d", &years);
    scanf("%d", &performance);

    if (years > 7 && performance >= 85) {
        printf("Senior");
    }
    else if (years >= 3 && years <= 7 && performance >= 80) {
        printf("Mid-Level");
    }
    else {
        printf("Junior");
    }

    return 0;
}
