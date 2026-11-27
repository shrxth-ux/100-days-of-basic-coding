#include <stdio.h>
#include <string.h>

int main() {
    char s[100005];
    if (scanf("%100004s", s) != 1) return 0;

    int last_index[256];
    for (int i = 0; i < 256; i++) {
        last_index[i] = -1;
    }

    int max_len = 0, left = 0;
    for (int right = 0; s[right] != '\0'; right++) {
        unsigned char c = s[right];
        if (last_index[c] >= left) {
            left = last_index[c] + 1;
        }
        last_index[c] = right;
        int len = right - left + 1;
        if (len > max_len) {
            max_len = len;
        }
    }

    printf("%d\n", max_len);
    return 0;
}
