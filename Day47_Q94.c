/*Q94: Find the longest word in a sentence.
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming
*/
#include <stdio.h>
#include <string.h>

int main() {
    char sentence[100];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    char longest_word[100] = "";
    char current_word[100] = "";
    int max_length = 0;
    int current_length = 0;

    for (int i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] != ' ' && sentence[i] != '\n') {
            current_word[current_length++] = sentence[i];
        } else {
            current_word[current_length] = '\0';
            if (current_length > max_length) {
                max_length = current_length;
                strcpy(longest_word, current_word);
            }
            current_length = 0;
        }
    }

    printf("Longest word: %s\n", longest_word);

    return 0;
}
