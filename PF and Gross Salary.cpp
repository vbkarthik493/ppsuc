#include <stdio.h>

int main() {
    float salary, hra, da;
    scanf("%f", &salary);
    scanf("%f", &hra);
    scanf("%f", &da);

    float pf = 0.12f * salary;
    float gross = salary + hra + da + pf;

    printf("%.2f\n", pf);
    printf("%.2f", gross);

    return 0;
}

