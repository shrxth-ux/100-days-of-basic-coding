#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 2; i <= n; i++) {
        int prime = 1;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                prime = 0;
                break;
            }
        }
        if (prime) printf("%d ", i);
    }
    printf("\n");
    return 0;
}





#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
