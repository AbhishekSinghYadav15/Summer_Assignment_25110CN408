#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int choice;

    do {
        printf("\n=== String Operations Menu ===\n");
        printf("1. Input String\n");
        printf("2. Find Length\n");
        printf("3. Reverse String\n");
        printf("4. Convert to Uppercase\n");
        printf("5. Convert to Lowercase\n");
        printf("6. Check Palindrome\n");
        printf("7. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter a string: ");
                scanf("%s", str);
                break;

            case 2:
                printf("Length = %d\n", (int)strlen(str));
                break;

            case 3: {
                char rev[100];
                int len = strlen(str);
                for (int i = 0; i < len; i++)
                    rev[i] = str[len - 1 - i];
                rev[len] = '\0';
                printf("Reversed string = %s\n", rev);
                break;
            }

            case 4: {
                char upper[100];
                strcpy(upper, str);
                for (int i = 0; upper[i] != '\0'; i++)
                    upper[i] = toupper(upper[i]);
                printf("Uppercase = %s\n", upper);
                break;
            }

            case 5: {
                char lower[100];
                strcpy(lower, str);
                for (int i = 0; lower[i] != '\0'; i++)
                    lower[i] = tolower(lower[i]);
                printf("Lowercase = %s\n", lower);
                break;
            }

            case 6: {
                int len = strlen(str);
                int isPalin = 1;
                for (int i = 0; i < len / 2; i++) {
                    if (str[i] != str[len - 1 - i]) {
                        isPalin = 0;
                        break;
                    }
                }
                if (isPalin)
                    printf("%s is a Palindrome\n", str);
                else
                    printf("%s is Not a Palindrome\n", str);
                break;
            }

            case 7:
                printf("Exiting String Operations System!\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 7);

    return 0;
}