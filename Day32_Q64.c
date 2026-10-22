/*Q64: Find the digit that occurs the most times in an integer number.
Sample Test Cases:
Input 1:
112233
Output 1:
1
Input 2:
887799
Output 2:
7
*/
#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    int count[10] = {0}; // Array to store counts of each digit (0-9)
    int temp = num;

    // Handle negative numbers
    if (temp < 0) {
        temp = -temp;
    }

    // Count occurrences of each digit
    while (temp > 0) {
        int digit = temp % 10;
        count[digit]++;
        temp /= 10;
    }

    // Find the digit with the maximum count
    int maxCount = 0;
    int mostFrequentDigit = 0;
    for (int i = 0; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            mostFrequentDigit = i;
        }
    }

    printf("The digit that occurs the most times is: %d\n", mostFrequentDigit);

    return 0;
}