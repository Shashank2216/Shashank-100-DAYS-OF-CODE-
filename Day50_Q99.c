/*Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025
*/
#include <stdio.h>
int main() {
    char date[11];
    printf("Enter the date in dd/04/yyyy format: ");
    scanf("%s", date);

    // Change the format to dd-Apr-yyyy
    date[2] = '-';
    date[3] = 'A';
    date[4] = 'p';
    date[5] = 'r';
    date[6] = '-';

    printf("Date in dd-Apr-yyyy format: %s\n", date);
    return 0;
}