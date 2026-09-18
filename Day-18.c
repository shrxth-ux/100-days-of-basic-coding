#include <stdio.h>

int main() {
    double side1, side2, side3;

    printf("Enter three sides of the triangle: ");
    scanf("%lf %lf %lf", &side1, &side2, &side3);

    if ((side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1)) {
        if (side1 == side2 && side2 == side3) {
            printf("Equilateral\n");
        }
        else if (side1 == side2 || side2 == side3 || side1 == side3) {
            printf("Isosceles\n");
        }
        else {
            printf("Scalene\n");
        }
    }
    else {
        printf("Invalid triangle sides\n");
    }

    return 0;
}


#include <stdio.h>

int main() {
    int day;

    printf("Enter day number (1-7): ");
    scanf("%d", &day);

    switch(day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid input\n");
    }

    return 0;
}
