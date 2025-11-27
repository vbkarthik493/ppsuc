#include <stdio.h>

int main() {
    int base1, base2, height;
    scanf("%d", &base1);
    scanf("%d", &base2);
    scanf("%d", &height);

    double area = ((base1 + base2) / 2.0) * height;

    printf("%.4f", area);

    return 0;
}

