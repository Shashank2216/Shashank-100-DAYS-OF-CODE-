/*Q89: Count frequency of a given character in a string.
Sample Test Cases:
Input 1:
programming
g
Output 1:
2
*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char ch;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter a character to count: ");
    scanf("%c", &ch);

    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    printf("Frequency of '%c' in the string: %d\n", ch, count);

    return 0;
}
