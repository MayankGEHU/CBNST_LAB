#include <stdio.h>
#include <math.h>
#define MAX 8
// Function prototype
float f(float x);

int main() {
    float a, b, c, t;
    int i, j, n;
    
    // Get the number of iterations
    printf("Enter the number of iterations: ");
    scanf("%d", &n);
    
    // Loop over the range [-MAX, MAX]
    for (i = -MAX; i < MAX; i++) {
        a = i; 
        b = i + 1;
        
        // Check if a root exists between a and b
        if (f(a) * f(b) <= 0) {
            
            // Ensure a is less than b for consistency
            if (f(a) > f(b)) {
                t = a;
                a = b;
                b = t;
            }
            
            printf("\nThe initial approximate limits are: %f %f", a, b);
            printf("\n\n a          b          c          f(c)");
            
            // Bisection method for n iterations
            for (j = 0; j < n; j++) {
                c = (a + b) / 2;  // Midpoint
                
                printf("\n%10.6f  %10.6f  %10.6f  %10.6f", a, b, c, f(c));
                
                // Adjust the interval based on the sign of f(c)
                if (f(c) < 0) {
                    a = c; 
                } else {
                    b = c;
                }
            }
        }
    }

    return 0; // End of the program
}

// Function definition
float f(float x) {
    return (cos(x) - 3 * x + 1);
}
