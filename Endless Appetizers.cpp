#include <stdio.h>

int main() {
    int X, Y, R;
    scanf("%d %d %d", &X, &Y, &R);

    int extra = R / 30;      // extra sticks he ate
    int total = X + extra;   // total sticks eaten

    // Calculate maximum plates (ceil division)
    int plates = (total + Y - 1) / Y;

    printf("%d", plates);

    return 0;
}

