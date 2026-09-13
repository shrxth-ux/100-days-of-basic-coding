Write a program to calculate simple and compound interest for given principal, rate, and time.
  
#include <stdio.h>
#include <math.h>
int main() {
    float principal, rate, time, si, amount, ci;
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter rate of interest (%%): ");
    scanf("%f", &rate);
    printf("Enter time (in years): ");
    scanf("%f", &time);
    si = (principal * rate * time) / 100;
    amount = principal * pow((1 + rate / 100), time);
    ci = amount - principal;
    printf("\nSimple Interest = %.2f", si);
    printf("\nCompound Interest = %.2f\n", ci);
    return 0;
}

Write a program to find and display the sum of the first n natural numbers.
  
#include <stdio.h>
int main() {
    long long n;
    long long total_sum;
    printf("Enter a positive integer (n): ");
    if (scanf("%lld", &n) != 1) {
    printf("Invalid input. Please enter an integer.\n");
    return 1;
    }
    if (n <= 0) {
    printf("Please enter a number greater than 0.\n");
    } else {
    total_sum = (n * (n + 1)) / 2;
    printf("The sum of the first %lld natural numbers is: %lld\n", n, total_sum);
    }
 return 0;
}
