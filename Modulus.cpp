#include <stdio.h>

int main() {
    int num1, num2;

    // Read two integers (can be same line or different lines)
    scanf("%d %d", &num1, &num2);

    int result = num1 % num2;  // modulus operation

    printf("%d", result);

    return 0;
}

