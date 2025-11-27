#include <stdio.h>

int main() {
    int minutes;
    scanf("%d", &minutes);

    int hours = minutes / 60;
    int mins = minutes % 60;

    printf("%d Hour(s) %d Minute(s)", hours, mins);

    return 0;
}

