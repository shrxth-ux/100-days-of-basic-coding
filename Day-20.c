#include <stdio.h>

int main() {
    int days;
    int fine = 0;

    printf("Enter number of late days: ");
    scanf("%d", &days);

    if (days <= 0) {
        printf("Fine = ₹0\n");
    }
    else if (days <= 5) {
        fine = days * 2;
        printf("Fine = ₹%d\n", fine);
    }
    else if (days <= 10) {
        fine = (5 * 2) + ((days - 5) * 4);
        printf("Fine = ₹%d\n", fine);
    }
    else if (days <= 30) {
        fine = (5 * 2) + (5 * 4) + ((days - 10) * 6);
        printf("Fine = ₹%d\n", fine);
    }
    else {
        printf("Membership Cancelled\n");
    }

    return 0;
}





#include <stdio.h>

int main() {
    int units;
    int bill = 0;

    printf("Enter units consumed: ");
    scanf("%d", &units);

    if (units <= 0) {
        printf("Bill = ₹0\n");
    }
    else if (units <= 100) {
        bill = units * 5;
    }
    else if (units <= 200) {
        bill = (100 * 5) + ((units - 100) * 7);
    }
    else if (units <= 300) {
        bill = (100 * 5) + (100 * 7) + ((units - 200) * 10);
    }
    else {
        bill = (100 * 5) + (100 * 7) + (100 * 10) + ((units - 300) * 12);
    }

    if (units > 0) {
        printf("Bill = ₹%d\n", bill);
    }

    return 0;
}
