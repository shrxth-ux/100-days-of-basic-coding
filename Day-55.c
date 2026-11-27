#include <stdio.h>

int main() {
    int n, i;
    if (scanf("%d", &n) != 1 || n <= 0) return 0;
    int nums[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int candidate = 0, count = 0;
    for (i = 0; i < n; i++) {
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        } else if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    int freq = 0;
    for (i = 0; i < n; i++) {
        if (nums[i] == candidate) {
            freq++;
        }
    }

    if (freq > n / 2) {
        printf("%d\n", candidate);
    } else {
        printf("-1\n");
    }

    return 0;
}
