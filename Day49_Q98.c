/*Q98: Print initials of a name with the surname displayed in full.
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe
*/
#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);

    // Remove newline character if present
    name[strcspn(name, "\n")] = '\0';

    // Find the positions of the first and second spaces
    int firstSpace = strcspn(name, " ");
    int secondSpace = firstSpace + 1 + strcspn(name + firstSpace + 1, " ");

    // Print the initials and the full surname
    printf("%c.%c. %s\n", name[0], name[firstSpace + 1], name + secondSpace + 1);

    return 0;
}
