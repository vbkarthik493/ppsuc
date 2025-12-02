#include <stdio.h>

int main() {
    int X;
    scanf("%d", &X);

    int total = 4 * X;  // cost for 4 friends

    if (total <= 1000) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}

