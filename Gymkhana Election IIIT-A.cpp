#include <stdio.h>

int main() {
    long long N, M;
    scanf("%lld %lld", &N, &M);

    long long requiredVotes = (M / 2) + 1;

    printf("%lld", requiredVotes);

    return 0;
}

