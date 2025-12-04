#include <stdio.h>

int main() {
    int n;

    // Read input
    scanf("%d", &n);

    // Check divisibility
    if (n % 9 == 0) {
        printf("True");
    } else {
        printf("False");
    }

    return 0;
}

