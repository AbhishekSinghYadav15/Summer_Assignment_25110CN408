#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int freq[256] = {0};
    int len = strlen(str);

    for (int i = 0; i < len; i++)
        freq[(int)str[i]]++;

    int maxFreq = 0;
    char maxChar = str[0];

    for (int i = 0; i < len; i++) {
        if (freq[(int)str[i]] > maxFreq) {
            maxFreq = freq[(int)str[i]];
            maxChar = str[i];
        }
    }

    printf("Maximum occurring character = %c (Frequency = %d)\n", maxChar, maxFreq);

    return 0;
}