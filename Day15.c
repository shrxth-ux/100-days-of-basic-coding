#include <stdio.h>

int main() {
    char ch;

    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase alphabet\n");
    } else if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase alphabet\n");
    } else if (ch >= '0' && ch <= '9') {
        printf("Digit\n");
    } else {
        printf("Special character\n");
    }

    return 0;
}




#include <stdio.h>

int main() {
    int num1, num2, num3;

    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 >= num2 && num1 >= num3) {
        printf("%d is the largest\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("%d is the largest\n", num2);
    } else {
        printf("%d is the largest\n", num3);
    }

    return 0;
}
