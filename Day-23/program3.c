#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    if (strlen(str1) != strlen(str2)) {
        printf("Strings are NOT Anagrams\n");
        return 0;
    }

    int count[26] = {0};

    for (int i = 0; str1[i] != '\0'; i++)
        count[str1[i] - 'a']++;

    for (int i = 0; str2[i] != '\0'; i++)
        count[str2[i] - 'a']--;

    int isAnagram = 1;
    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            isAnagram = 0;
            break;
        }
    }

    if (isAnagram)
        printf("Strings are Anagrams\n");
    else
        printf("Strings are NOT Anagrams\n");

    return 0;
}