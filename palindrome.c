#include <stdio.h>
#include <string.h>

void longestPalindrome(char *s) {
    int n = strlen(s);
    int start = 0, maxLen = 1;

    for (int i = 0; i < n; i++) {
        // Odd length
        int l = i, r = i;
        while (l >= 0 && r < n && s[l] == s[r]) {
            if (r - l + 1 > maxLen) {
                start = l;
                maxLen = r - l + 1;
            }
            l--; r++;
        }

        // Even length
        l = i; r = i + 1;
        while (l >= 0 && r < n && s[l] == s[r]) {
            if (r - l + 1 > maxLen) {
                start = l;
                maxLen = r - l + 1;
            }
            l--; r++;
        }
    }

    for (int i = start; i < start + maxLen; i++)
        printf("%c", s[i]);
}

int main() {
    char s[] = "babad";
    longestPalindrome(s);
    return 0;
}
