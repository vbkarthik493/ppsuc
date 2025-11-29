#include <stdio.h>

int main() {
    int r;
    scanf("%d", &r);

    float pi = 3.14;

    float area = pi * r * r;
    float perimeter = 2 * pi * r;

    printf("%.2f\n", area);
    printf("%.2f", perimeter);

    return 0;
}

