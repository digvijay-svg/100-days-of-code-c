#include <stdio.h>

int main() {
    int num, first, last, digits = 1, middle, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 10;

    // Find the number of digits
    int temp = num;
    while (temp >= 10) {
        temp = temp / 10;
        digits = digits * 10;
    }

    first = temp;

    // Remove first and last digit
    middle = (num % digits) / 10;

    // Swap first and last digit
    result = last * digits + middle * 10 + first;

    printf("Number after swapping = %d", result);

    return 0;
}