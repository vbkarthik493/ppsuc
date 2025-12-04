#include <stdio.h>

int main() {
    int X1, Y1, X2, Y2;
    scanf("%d %d %d %d", &X1, &Y1, &X2, &Y2);

    int cost1 = X1 + Y1;
    int cost2 = X2 + Y2;

    if (cost1 < cost2)
        printf("%d", cost1);
    else
        printf("%d", cost2);

    return 0;
}

