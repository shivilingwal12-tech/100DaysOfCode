// Check if two strings are anagrams of each other.

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int count[26] = {0};
    int i;
    int is_anagram = 1;

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);
    if (strlen(str1) != strlen(str2)) {
        is_anagram = 0;
    } else {
        for (i = 0; str1[i] != '\0'; i++) {
            if (str1[i] >= 'a' && str1[i] <= 'z') {
                count[str1[i] - 'a']++;
            }
        }

        for (i = 0; str2[i] != '\0'; i++) {
            if (str2[i] >= 'a' && str2[i] <= 'z') {
                count[str2[i] - 'a']--;
            }
        }

        for (i = 0; i < 26; i++) {
            if (count[i] != 0) {
                is_anagram = 0;
                break;
            }
        }
    }

    if (is_anagram) {
        printf("\nResult: The strings are ANAGRAMS.\n");
    } else {
        printf("\nResult: The strings are NOT anagrams.\n");
    }

    return 0;
}