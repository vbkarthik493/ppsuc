#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int printed = 0;  // To check if any word is printed

    if (n % 3 == 0) {
        printf("Pling");
        printed = 1;
    }
    if (n % 5 == 0) {
        printf("Plang");
        printed = 1;
    }
    if (n % 7 == 0) {
        printf("Plong");
        printed = 1;
    }

    // If none of the conditions matched, print the number
    if (!printed) {
        printf("%d", n);
    }

    return 0;
}

