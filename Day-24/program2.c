#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int len = strlen(str);
    char result[200];
    int k = 0;

    for (int i = 0; i < len; i++) {
        int count = 1;

        // Count consecutive same characters
        while (i + 1 < len && str[i] == str[i + 1]) {
            count++;
            i++;
        }

        result[k++] = str[i];

        // Add count only if greater than 1
        if (count > 1) {
            char countStr[10];
            sprintf(countStr, "%d", count);
            for (int j = 0; countStr[j] != '\0'; j++)
                result[k++] = countStr[j];
        }
    }
    result[k] = '\0';

    printf("Compressed string = %s\n", result);

    return 0;
}