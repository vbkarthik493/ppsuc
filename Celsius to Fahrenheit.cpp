#include <stdio.h>

int main() {
    int C;
    scanf("%d", &C);

    float F = (C * 9.0 / 5.0) + 32;

    printf("%.2f", F);

    return 0;
}

