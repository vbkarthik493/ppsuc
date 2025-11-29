#include <stdio.h>

int main() {
    int num1, num2;

    // Reading two integers (can be on same line or different lines)
    scanf("%d %d", &num1, &num2);

    int result = num1 / num2;  // integer division

    printf("%d", result);

    return 0;
}

