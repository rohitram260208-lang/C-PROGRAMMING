

#include <stdio.h>

int main() {
    float X, R, Y;
    float interest, amount, discount, settlement;

    scanf("%f", &X);
    scanf("%f", &R);
    scanf("%f", &Y);

    interest = (X * R * Y) / 100;
    amount = X + interest;
    discount = interest * 2 / 100;
    settlement = amount - discount;

    printf("%.2f\n", interest);
    printf("%.2f\n", amount);
    printf("%.2f\n", discount);
    printf("%.2f\n", settlement);

    return 0;
}
