#include <stdio.h>

int main() {
    int a, b;

    // Read the two numbers
    scanf("%d", &a);
    scanf("%d", &b);

    // Compare and print the biggest
    if (a > b) {
        printf("%d", a);
    } else {
        printf("%d", b);
    }

    return 0;
}

