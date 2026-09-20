#include <stdio.h>

void print_factors(int num) {
    if (num <= 0) {
        return;
    }
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int test1 = 12;
    int test2 = 7;
    int test3 = 1;

    printf("Factors of %d: ", test1);
    print_factors(test1);

    printf("Factors of %d: ", test2);
    print_factors(test2);

    printf("Factors of %d: ", test3);
    print_factors(test3);

    return 0;
}




#include <stdio.h>

int find_hcf(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a1 = 24, b1 = 36;
    int a2 = 17, b2 = 5;
    int a3 = 12, b3 = 12;

    printf("HCF of %d and %d: %d\n", a1, b1, find_hcf(a1, b1));
    printf("HCF of %d and %d: %d\n", a2, b2, find_hcf(a2, b2));
    printf("HCF of %d and %d: %d\n", a3, b3, find_hcf(a3, b3));

    return 0;
}
