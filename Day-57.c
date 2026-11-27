#include <stdio.h>

int main() {
    int n, i, j;
    if (scanf("%d", &n) != 1 || n <= 0) return 0;
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        int prev = -1;
        for (j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prev = arr[j];
                break;
            }
        }
        printf("%d", prev);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("\n");
    return 0;
}
