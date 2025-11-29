/* Write a program to take a string s as input. The task is to find the length of the longest substring without repeating 
characters. Print the length as output. */

#include <stdio.h>
#include <string.h>

int check_repeat(char *s, int start, int end) {
    int visited[256] = {0};
    for (int i = start; i <= end; i++) {
        if (visited[s[i]]) {
            return 1;
        }
        visited[s[i]] = 1;
    }
    return 0;
}

int main() {
    char str[100];
    int n, i, j;
    int max_len = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    n = strlen(str);
    for (i = 0; i < n; i++) {
        for (j = i; j < n; j++) {
            if (!check_repeat(str, i, j)) {
                if (j - i + 1 > max_len) {
                    max_len = j - i + 1;
                }
            } else {
                break;
            }
        }
    }

    printf("\nLength of the longest substring without repeating characters: %d\n", max_len);

    return 0;
}