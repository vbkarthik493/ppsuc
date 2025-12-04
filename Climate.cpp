#include <stdio.h>

int main() {
    int C;

    // Read temperature
    scanf("%d", &C);

    if (C > 20) {
        printf("HOT");
    } else {
        printf("COLD");
    }

    return 0;
}

