#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int len = strlen(str);
    char result = '\0';

    for (int i = 0; i < len; i++) {
        int count = 0;
        for (int j = 0; j < len; j++) {
            if (str[i] == str[j])
                count++;
        }
        if (count == 1) {
            result = str[i];
            break;
        }
    }

    if (result != '\0')
        printf("First non-repeating character = %c\n", result);
    else
        printf("No non-repeating character found\n");

    return 0;
}