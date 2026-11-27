#include <stdio.h>

int main() {
    int n, k, i, j;
    if (scanf("%d", &n) != 1 || n <= 0) return 0;
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);

    if (k > n || k <= 0) return 0;

    for (i = 0; i <= n - k; i++) {
        int max_val = arr[i];
        for (j = 1; j < k; j++) {
            if (arr[i + j] > max_val) {
                max_val = arr[i + j];
            }
        }
        printf("%d", max_val);
        if (i < n - k) {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}
