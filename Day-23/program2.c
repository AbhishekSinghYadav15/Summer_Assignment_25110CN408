#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int len = strlen(str);
    char result = '\0';

    for (int i = 0; i < len; i++) {
        for (int j = i + 1; j < len; j++) {
            if (str[i] == str[j]) {
                result = str[i];
                break;
            }
        }
        if (result != '\0')
            break;
    }

    if (result != '\0')
        printf("First repeating character = %c\n", result);
    else
        printf("No repeating character found\n");

    return 0;
}