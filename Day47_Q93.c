/*Q93: Check if two strings are anagrams of each other.
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams
Input 2:
hello
world
Output 2:
Not anagrams
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
        printf("Not anagrams\n");
        return 0;
    }

    int freq[26] = {0};

    for (int i = 0; i < len1; i++) {
        if (str1[i] >= 'a' && str1[i] <= 'z') {
            freq[str1[i] - 'a']++;
        }
        if (str2[i] >= 'a' && str2[i] <= 'z') {
            freq[str2[i] - 'a']--;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            printf("Not anagrams\n");
            return 0;
        }
    }

    printf("Anagrams\n");
    return 0;
}
