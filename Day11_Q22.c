/*Q22: Write a program to find profit or loss percentage given cost price and selling price.
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%
Input 2:
1000 800
Output 2:
Loss 20%
Input 3:
1000 1000
Output 3:
No Profit No Loss
*/
#include <stdio.h>

int main() {
    int costPrice, sellingPrice;
    printf("Enter cost price and selling price: ");
    scanf("%d %d", &costPrice, &sellingPrice);

    if (sellingPrice > costPrice) {
        int profit = sellingPrice - costPrice;
        int profitPercentage = (profit * 100) / costPrice;
        printf("Profit %d%%\n", profitPercentage);
    } else if (sellingPrice < costPrice) {
        int loss = costPrice - sellingPrice;
        int lossPercentage = (loss * 100) / costPrice;
        printf("Loss %d%%\n", lossPercentage);
    } else {
        printf("No Profit No Loss\n");
    }

    return 0;
}