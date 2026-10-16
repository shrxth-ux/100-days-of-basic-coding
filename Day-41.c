#include <stdio.h>

int main() {
    char str[] = "hello";
    int count = 0;
    while (str[count] != '\0') {
        count++;
    }
    printf("%d\n", count);
    return 0;
}





#include <stdio.h>

int main() {
    char str[] = "code";
    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c\n", str[i]);
    }
    return 0;
}
