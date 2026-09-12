Q1
#include <stdio.h>
int main() 
{
    int a, b;
    printf("Enter first number (A): ");
    scanf("%d", &a);
    printf("Enter second number (B): ");
    scanf("%d", &b);
    printf("\nBefore Swapping: A = %d, B = %d\n", a, b);
    a = a + b; 
    b = a - b; 
    a = a - b; 
    printf("After Swapping: A = %d, B = %d\n", a, b);
    return 0;
}

Q2
#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Please enter a valid natural number (greater than 0).\n");
    } else {
        for (int i = 1; i <= n; i++) {
            sum += i;
        }
        printf("The sum of the first %d natural numbers is: %d\n", n, sum);
    }
    return 0;
}
