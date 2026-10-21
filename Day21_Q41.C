/*Q41: Write a program to swap the first and last digit of a number.
Sample Test Cases:
Input 1:
1234
Output 1:
4231
Input 2:
1001
Output 2:
1001
*/
#include <stdio.h>

int main() {
    int num, firstDigit, lastDigit, swappedNum, temp;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Get the last digit
    lastDigit = num % 10;

    // Get the first digit
    firstDigit = num;
    while (firstDigit >= 10) {
        firstDigit /= 10;
    }

    // Swap the first and last digits
    temp = num;
    while (temp >= 10) {
        temp /= 10;
    }
    swappedNum = lastDigit;
    temp = num / 10;
    while (temp >= 10) {
        swappedNum *= 10;
        temp /= 10;
    }
    swappedNum += firstDigit;

    printf("Number after swapping first and last digits is %d\n", swappedNum);

    return 0;
}
