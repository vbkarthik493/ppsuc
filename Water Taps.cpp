#include <stdio.h>

int main() {
    int X, Y;
    scanf("%d %d", &X, &Y);

    int time = (X * Y) / (X + Y);

    printf("%d", time);

    return 0;
}

