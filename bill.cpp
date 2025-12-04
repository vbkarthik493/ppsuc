#include <stdio.h>

int main() {
    int units;
    float bill;

    scanf("%d", &units);

    // Calculate bill based on units
    if (units <= 199)
        bill = units * 1.20;
    else if (units >= 200 && units < 400)
        bill = units * 1.50;
    else if (units >= 400 && units < 600)
        bill = units * 1.80;
    else
        bill = units * 2.00;

    // Apply minimum bill
    if (bill < 400)
        bill = 100;
    // Apply surcharge
    else if (bill > 400)
        bill = bill + (bill * 0.15);

    printf("%.2f", bill);

    return 0;
}

