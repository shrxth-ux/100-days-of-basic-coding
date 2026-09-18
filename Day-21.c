#include <stdio.h>

int main() {
    double num1, num2;
    char op;

    printf("Enter calculation (e.g., 5 + 3): ");
    if (scanf("%lf %c %lf", &num1, &op, &num2) != 3) {
        printf("Invalid input format\n");
        return 1;
    }

    switch (op) {
        case '+':
            printf("Result = %.2lf\n", num1 + num2);
            break;
        case '-':
            printf("Result = %.2lf\n", num1 - num2);
            break;
        case '*':
            printf("Result = %.2lf\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("Result = %.2lf\n", num1 / num2);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        case '%':
            if ((int)num2 != 0) {
                printf("Result = %d\n", (int)num1 % (int)num2);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        default:
            printf("Error: Invalid operator\n");
    }

    return 0;
}




#include <stdio.h>

int main() {
    int n, i;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}


