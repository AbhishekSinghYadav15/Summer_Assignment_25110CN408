#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char ch;
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Enter character to find frequency: ");
    scanf(" %c", &ch);

    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch)
            count++;
    }

    printf("Frequency of '%c' = %d\n", ch, count);

    return 0;
}