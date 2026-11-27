#include <stdio.h>

int main() {
    int n, i, j;
    if (scanf("%d", &n) != 1 || n <= 0) return 0;
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        int next = -1;
        for (j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                next = arr[j];
                break;
            }
        }
        printf("%d", next);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("\n");
    return 0;
}
