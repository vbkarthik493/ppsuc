#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    // Take absolute values because height uses magnitude
    if (x < 0) x = -x;
    if (y < 0) y = -y;

    int height = (x > y) ? x : y;

    printf("%d", height);

    return 0;
}

