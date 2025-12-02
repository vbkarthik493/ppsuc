#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    int sum = A + B;
    int output = sum * 10 + 1;

    printf("%d", output);

    return 0;
}

