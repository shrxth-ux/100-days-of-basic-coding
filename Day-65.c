#include <stdio.h>
#include <string.h>

int main() {
    char s[100005], t[100005];
    if (scanf("%100004s %100004s", s, t) != 2) return 0;

    if (strlen(s) != strlen(t)) {
        printf("Not Anagram\n");
        return 0;
    }

    int count[26] = {0};
    for (int i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");
    return 0;
}
