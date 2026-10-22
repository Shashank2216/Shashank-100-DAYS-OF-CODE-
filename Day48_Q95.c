/*Q95: Check if one string is a rotation of another.
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation
Input 2:
abc
acb
Output 2:
Not rotation
*/
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 != len2) {
        printf("Not rotation\n");
        return 0;
    }

    // Concatenate str1 with itself
    char concatenated[200];
    strcpy(concatenated, str1);
    strcat(concatenated, str1);

    // Check if str2 is a substring of the concatenated string
    if (strstr(concatenated, str2) != NULL) {
        printf("Rotation\n");
    } else {
        printf("Not rotation\n");
    }

    return 0;
}
