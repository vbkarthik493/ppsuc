#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);  // read input
    
    int sum = (N * (N + 1)) / 2;  // formula for sum of first N natural numbers
    
    printf("%d", sum);  // output result
    
    return 0;
}

