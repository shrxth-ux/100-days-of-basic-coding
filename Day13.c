#include <stdio.h>

int main() {
    int year;

    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("Leap year\n");
    } else {
        printf("Not a leap year\n");
    }

    return 0;
}




#include <stdio.h>

int main() {
    char ch;

    scanf(" %c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("Vowel\n");
    } else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("Consonant\n");
    } else {
        printf("Not an alphabet\n");
    }

    return 0;
}

