#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    int x = *(const int *)a;
    int y = *(const int *)b;
    return (x > y) - (x < y);
}

int main() {
    int n, k, i;
    if (scanf("%d", &n) != 1 || n <= 0) return 0;
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);

    if (k < 1 || k > n) return 0;

    qsort(arr, n, sizeof(int), cmp);
    printf("%d\n", arr[k - 1]);
    return 0;
}
