#include <stdio.h>
#include <math.h>

int is_armstrong(int num) {
    if (num < 0) return 0;
    
    int temp = num;
    int num_digits = 0;
    
    if (num == 0) {
        num_digits = 1;
    } else {
        while (temp > 0) {
            num_digits++;
            temp /= 10;
        }
    }
    
    temp = num;
    int digit_sum = 0;
    while (temp > 0) {
        int digit = temp % 10;
        digit_sum += pow(digit, num_digits);
        temp /= 10;
    }
    
    return (digit_sum == num);
}

int main() {
    int test1 = 153;
    int test2 = 9474;
    int test3 = 123;
    
    printf("Is %d Armstrong? %s\n", test1, is_armstrong(test1) ? "True" : "False");
    printf("Is %d Armstrong? %s\n", test2, is_armstrong(test2) ? "True" : "False");
    printf("Is %d Armstrong? %s\n", test3, is_armstrong(test3) ? "True" : "False");
    
    return 0;
}




#include <stdio.h>

int is_prime(int num) {
    if (num <= 1) return 0;
    
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int test1 = 2;
    int test2 = 11;
    int test3 = 4;
    int test4 = 1;
    
    printf("Is %d prime? %s\n", test1, is_prime(test1) ? "True" : "False");
    printf("Is %d prime? %s\n", test2, is_prime(test2) ? "True" : "False");
    printf("Is %d prime? %s\n", test3, is_prime(test3) ? "True" : "False");
    printf("Is %d prime? %s\n", test4, is_prime(test4) ? "True" : "False");
    
    return 0;
}


