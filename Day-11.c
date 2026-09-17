Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time;
    double simple_interest, compound_interest, amount;

    printf("Enter the principal amount: ");
    scanf("%lf", &principal);

    printf("Enter the rate of interest (in %%): ");
    scanf("%lf", &rate);

    printf("Enter the time period (in years): ");
    scanf("%lf", &time);

    simple_interest = (principal * rate * time) / 100;

    amount = principal * pow((1 + rate / 100), time);
    compound_interest = amount - principal;

    printf("\n--- Results ---\n");
    printf("Simple Interest: %.2f\n", simple_interest);
    printf("Total Amount (with SI): %.2f\n", principal + simple_interest);
    printf("Compound Interest: %.2f\n", compound_interest);
    printf("Total Amount (with CI): %.2f\n", amount);

    return 0;
}

Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include <stdio.h>

int main() {
    int total_seconds, hours, minutes, seconds;

    printf("Enter time in seconds: ");
    scanf("%d", &total_seconds);

    hours = total_seconds / 3600;
    minutes = (total_seconds % 3600) / 60;
    seconds = total_seconds % 60;

    printf("Time in H:M:S format: %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}



