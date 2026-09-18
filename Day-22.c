#include <stdio.h>

int main() {
    int n, i;
    int sum = 0;
    int current_odd = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += current_odd;
        current_odd += 2;
    }

    printf("Sum = %d\n", sum);

    return 0;
}





#include <stdio.h>

int main() {
    int n, i;
    long long product = 1;
    int has_even = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i += 2) {
        product *= i;
        has_even = 1;
    }

    if (has_even) {
        printf("Product = %lld\n", product);
    } else {
        printf("Product = 0\n");
    }

    return 0;
}
