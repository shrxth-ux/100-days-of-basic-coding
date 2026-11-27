#include <stdio.h>

int main() {
    int n, k, i;
    if (scanf("%d", &n) != 1 || n <= 0) return 0;
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);

    if (k > n || k <= 0) return 0;

    long long window_sum = 0;
    for (i = 0; i < k; i++) {
        window_sum += arr[i];
    }

    long long max_sum = window_sum;
    for (i = k; i < n; i++) {
        window_sum += arr[i] - arr[i - k];
        if (window_sum > max_sum) {
            max_sum = window_sum;
        }
    }

    printf("%lld\n", max_sum);
    return 0;
}
