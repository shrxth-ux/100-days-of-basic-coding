#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase alphabet\n");
    }
    else if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase alphabet\n");
    }
    else if (ch >= '0' && ch <= '9') {
        printf("Digit\n");
    }
    else {
        printf("Special character\n");
    }

    return 0;
}


#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 >= num2 && num1 >= num3) {
        printf("Largest is %d\n", num1);
    } 
    else if (num2 >= num1 && num2 >= num3) {
        printf("Largest is %d\n", num2);
    } 
    else {
        printf("Largest is %d\n", num3);
    }

    return 0;
}


