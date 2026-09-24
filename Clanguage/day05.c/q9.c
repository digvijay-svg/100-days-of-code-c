#include <stdio.h>

int main() {
    float p, r, t;
    float si, ci, amount = 1;
    int i;

    printf("Enter Principal, Rate and Time: ");
    scanf("%f %f %f", &p, &r, &t);

    // Simple Interest
    si = (p * r * t) / 100;

    // Compound Interest without pow()
    for (i = 1; i <= t; i++) {
        amount = amount * (1 + r / 100);
    }

    ci = p * amount - p;

    printf("Simple Interest = %.2f\n", si);
    printf("Compound Interest = %.2f\n", ci);

    return 0;
}