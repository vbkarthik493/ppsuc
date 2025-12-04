#include <stdio.h>

int main() {
    int hurl, spin, speed;
    int grade;

    // Read hurl factor, spin factor and speed factor
    scanf("%d %d %d", &hurl, &spin, &speed);

    int c1 = (hurl > 50);   // condition (i)
    int c2 = (spin > 60);   // condition (ii)
    int c3 = (speed > 100); // condition (iii)

    if (c1 && c2 && c3) {
        grade = 10;                 // all three conditions
    } else if (c1 && c2) {
        grade = 9;                  // (i) and (ii)
    } else if (c2 && c3) {
        grade = 8;                  // (ii) and (iii)
    } else if (c1 && c3) {
        grade = 7;                  // (i) and (iii)
    } else if (c1 || c2 || c3) {
        grade = 6;                  // only one condition
    } else {
        grade = 5;                  // none of the conditions
    }

    printf("%d", grade);

    return 0;
}

