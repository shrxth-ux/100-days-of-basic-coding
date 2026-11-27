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
        int first_neg = 0;
        for (j = 0; j < k; j++) {
            if (arr[i + j] < 0) {
                first_neg = arr[i + j];
                break;
            }
        }
        printf("%d", first_neg);
        if (i < n - k) {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}
