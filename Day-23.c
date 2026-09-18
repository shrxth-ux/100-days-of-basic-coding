#include <stdio.h>

int main() {
    int n, i;
    long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Error: Factorial of a negative number doesn't exist.\n");
    } else {
        for (i = 1; i <= n; i++) {
            factorial *= i;
        }
        printf("Factorial = %lld\n", factorial);
    }

    return 0;
}





#include <stdio.h>

int main() {
    int n, remainder;
    int reversed = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    printf("Reversed Number = %d\n", reversed);

    return 0;
}
