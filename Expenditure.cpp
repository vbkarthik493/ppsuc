#include <stdio.h>

int main() {
    int X, Y;

    // Read input values
    scanf("%d", &X);
    scanf("%d", &Y);

    int required = 30 * Y;

    if (X >= required) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}

