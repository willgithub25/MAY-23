#include <stdio.h>

int factorial(int num) {
    int fact = 1;
    int i;

    for (i = 1; i <= num; i++) {
        fact *= i;
    }

    return fact;
}

int main() {
    int number, temp, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    temp = number;

    while (temp != 0) {
        digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }

    if (sum == number) {
        printf("%d is a strong number.\n", number);
    } else {
        printf("%d is not a strong number.\n", number);
    }

    return 0;
}

