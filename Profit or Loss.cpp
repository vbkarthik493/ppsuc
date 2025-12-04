#include <stdio.h>

int main() {
    int costPrice, sellingPrice;

    // Read inputs
    scanf("%d", &costPrice);
    scanf("%d", &sellingPrice);

    if (sellingPrice > costPrice) {
        printf("Profit");
    }
    else if (sellingPrice < costPrice) {
        printf("Loss");
    }
    else {
        printf("No Profit and No Loss");
    }

    return 0;
}

