/*Q96: Reverse each word in a sentence without changing the word order.
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc
*/
#include <stdio.h>
#include <string.h>

void reverseString(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
}

int main() {
    char sentence[100];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    char words[100][100];
    int wordCount = 0;
    int start = 0;

    for (int i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] == ' ' || sentence[i] == '\n') {
            int len = i - start;
            if (len > 0) {
                strncpy(words[wordCount], sentence + start, len);
                words[wordCount][len] = '\0';
                wordCount++;
            }
            start = i + 1;
        }
    }

    // Handle the last word
    int len = strlen(sentence) - start;
    if (len > 0) {
        strncpy(words[wordCount], sentence + start, len);
        words[wordCount][len] = '\0';
        wordCount++;
    }

    // Reverse each word
    for (int i = 0; i < wordCount; i++) {
        reverseString(words[i]);
    }

    // Print the modified sentence
    for (int i = 0; i < wordCount; i++) {
        printf("%s ", words[i]);
    }
    printf("\n");

    return 0;
}
