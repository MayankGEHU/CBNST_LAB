#include <stdio.h>
#include <math.h>

#define f(x) (3*x + sin(x) - exp(x))

int main() {
    float a, b, c, e;

    printf("Enter the first value (a): ");
    scanf("%f", &a);

    printf("Enter the second value (b): ");
    scanf("%f", &b);

    if (f(a) * f(b) < 0) {
        printf("Enter the error (e): ");
        scanf("%f", &e);

        while (fabs(b - a) >= e) {
            c = (a + b) / 2;

            if (f(c) == 0.0) {
                break;
            } else if (f(a) * f(c) < 0) {
                b = c;
            } else {
                a = c;
            }
        }
        printf("The root is approximately: %f\n", c);
    } else {
        printf("The function does not change sign in the interval. Please enter different values for a and b.\n");
    }

    return 0;
}