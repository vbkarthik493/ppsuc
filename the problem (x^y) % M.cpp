#include <stdio.h>

long long power(long long x, long long y, long long M) {
    long long result = 1;
    x = x % M;

    while (y > 0) {
        if (y % 2 == 1) {
            result = (result * x) % M;
        }
        x = (x * x) % M;
        y = y / 2;
    }
    return result;
}

int main() {
    long long x, y, M;
    scanf("%lld %lld %lld", &x, &y, &M);

    printf("%lld", power(x, y, M));
    return 0;
}

