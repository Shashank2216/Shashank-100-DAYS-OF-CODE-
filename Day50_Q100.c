/*Q100: Print all sub-strings of a string.
Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c
*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        for (int j = i + 1; j <= len; j++) {
            printf("%.*s,", j - i, str + i);
        }
    }
    printf("\n");
    return 0;
}
