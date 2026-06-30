#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    char longest[100] = "";
    char current[100] = "";
    int j = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\n') {
            current[j++] = str[i];
        } else {
            current[j] = '\0';
            if (strlen(current) > strlen(longest))
                strcpy(longest, current);
            j = 0;
        }
    }

    // Check last word
    current[j] = '\0';
    if (strlen(current) > strlen(longest))
        strcpy(longest, current);

    printf("Longest word = %s\n", longest);
    printf("Length       = %d\n", (int)strlen(longest));

    return 0;
}