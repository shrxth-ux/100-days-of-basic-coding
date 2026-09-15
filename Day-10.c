Write a program to input a year and check whether it is a leap year or not using conditional statements.

#include <stdio.h>
int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if (year % 400 == 0) {
        printf("%d is a leap year.\n", year);
    } 
    else if (year % 100 == 0) {
        printf("%d is not a leap year.\n", year);
    } 
    else if (year % 4 == 0) {
        printf("%d is a leap year.\n", year);
    } 
    else {
      printf("%d is not a leap year.\n", year);
    }
return 0;
}

Write a program to input a character and check whether it is a vowel or consonant using if–else.

  
#include <stdio.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || 
            ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || 
            ch == 'u' || ch == 'U') {
            printf("'%c' is a vowel.\n", ch);
        } else {
            printf("'%c' is a consonant.\n", ch);
        }
} else {
        printf("Invalid input! Please enter an alphabet letter.\n");
    }
return 0;
}
