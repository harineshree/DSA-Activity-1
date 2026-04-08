#include <stdio.h>
#include <string.h>

int lengthOfLongestSubstring(char *s) {
    int maxLen = 0;
    int start = 0;
    int visited[256] = {0};

    for(int i = 0; s[i] != '\0'; i++) {
        if(visited[s[i]] > start) {
            start = visited[s[i]];
        }

        int len = i - start + 1;
        if(len > maxLen)
            maxLen = len;

        visited[s[i]] = i + 1;
    }

    return maxLen;
}

int main() {
    char s[] = "abcabcbb";
    printf("Output: %d", lengthOfLongestSubstring(s));
    return 0;
}
