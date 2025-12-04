#include <stdio.h>

int main() {
    int X, A, B;
    
    // Read X, A, B from input
    scanf("%d %d %d", &X, &A, &B);
    
    // Each easy problem = 1 point, each hard problem = 2 points
    int totalPoints = A + 2 * B;
    
    // Check if Professor qualifies
    if (totalPoints >= X) {
        printf("Qualify");
    } else {
        printf("Not Qualify");
    }
    
    return 0;
}

