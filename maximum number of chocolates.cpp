#include <stdio.h>

int main() {
    int X, Y, Z;
    scanf("%d", &X);
    scanf("%d", &Y);
    scanf("%d", &Z);

    int totalMoney = X * 5 + Y * 10;
    int chocolates = totalMoney / Z;

    printf("%d", chocolates);

    return 0;
}

