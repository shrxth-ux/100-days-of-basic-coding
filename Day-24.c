#include <stdio.h>

int main() {
    int n, temp;
    long long binary = 0;
    long long place = 1;

    printf("Enter a decimal number: ");
    scanf("%d", &n);

    temp = n;
    
    if (n == 0) {
        printf("Binary = 0\n");
        return 0;
    }

    while (temp > 0) {
        int rem = temp % 2;
        binary += rem * place;
        place *= 10;
        temp /= 2;
    }

    printf("Binary = %lld\n", binary);

    return 0;
}





#include <stdio.h>

int main() {
    int n, original, remainder;
    int reversed = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    original = n;

    while (n > 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    if (original == reversed) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }

    return 0;
}

