#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int len = strlen(str);
    char result[100];
    int k = 0;
    int seen[256] = {0};

    for (int i = 0; i < len; i++) {
        if (!seen[(int)str[i]]) {
            seen[(int)str[i]] = 1;
            result[k++] = str[i];
        }
    }
    result[k] = '\0';

    printf("String after removing duplicates = %s\n", result);

    return 0;
}