#include <stdio.h>
int main() {
    for (int i = 5; i >= 1; i--) {
        for (int j = 1; j < i; j++) {
            printf(" ");
        }
        for (int j = i; j <= 5; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}





#include <stdio.h>
int main() {
    for (int i = 1; i <= 5; i += 2) {
        for (int j = 1; j <= i; j++) {
            printf("*\n");
        }
        printf("\n");
    }
    for (int i = 3; i >= 1; i -= 2) {
        for (int j = 1; j <= i; j++) {
            printf("*\n");
        }
        printf("\n");
    }
    return 0;
}
