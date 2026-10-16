#include <stdio.h>
#include <ctype.h>

int main() {
    char str[] = "Hello World";
    int vowels = 0, consonants = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                conconants++; // Note: spelling fix below
            }
        }
    }
    printf("Vowels: %d\nConsonants: %d\n", vowels, consonants);
    return 0;
}







#include <stdio.h>

void toUpper(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }
}

int main() {
    char str[] = "hello world";
    toUpper(str);
    printf("%s\n", str);
    return 0;
}
