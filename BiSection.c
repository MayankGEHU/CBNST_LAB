// #include <stdio.h>
// #include <math.h>

// #define f(x) (3*x + sin(x) - exp(x))  //defining the function which will be used through out 

// int main() {
//     printf("Mayank Singh / 230111954 / 35 / I1\n");
//     float a, b, c, e;
    
//     printf("Enter the first value (a): ");
//     scanf("%f", &a);

//     printf("Enter the second value (b): ");
//     scanf("%f", &b);

//     if (f(a) * f(b) < 0) {
//         printf("Enter the error (e): ");
//         scanf("%f", &e);

//         while (fabs(b - a) >= e) {
//             c = (a + b) / 2;

//             if (f(c) == 0.0) {
//                 break;
//             } else if (f(a) * f(c) < 0) {
//                 b = c;
//             } else {
//                 a = c;
//             }
//         }
//         printf("The root is approximately: %f\n", c);
//     } else {
//         printf("The function does not change sign in the interval. Please enter different values for a and b.\n");
//     }
//     return 0;
// }

#include <stdio.h>
#include <math.h>

#define f(x) (3*x + sin(x) - exp(x))  // Defining the function

int main() {
    printf("Mayank Singh / 230111954 / 35 / I1\n");
    float a, b, c, e;
    
    // Get the initial values of 'a' and 'b' from the user
    printf("Enter the first value (a): ");
    scanf("%f", &a);

    printf("Enter the second value (b): ");
    scanf("%f", &b);

    // Check if the function changes sign between 'a' and 'b'
    if (f(a) * f(b) < 0) {
        // Get the error tolerance 'e'
        printf("Enter the error (e): ");
        scanf("%f", &e);

        // Print header for the iteration values
        printf("\n Iteration |     a        |     b        |     c        |   f(c)      \n");
        printf("---------------------------------------------------------------\n");

        int iteration = 0;
        while (fabs(b - a) >= e) {
            c = (a + b) / 2;  // Midpoint

            // Print the current values of 'a', 'b', 'c', and 'f(c)'
            printf("    %2d      | %10.6f | %10.6f | %10.6f | %10.6f\n", iteration, a, b, c, f(c));
            
            // Update 'a' or 'b' based on the sign of f(c)
            if (f(c) == 0.0) {
                break;  // Exact root found
            } else if (f(a) * f(c) < 0) {
                b = c;  // Root lies between 'a' and 'c'
            } else {
                a = c;  // Root lies between 'c' and 'b'
            }

            iteration++;  // Increment iteration counter
        }

        // Print the final root approximation
        printf("---------------------------------------------------------------\n");
        printf("The root is approximately: %f\n", c);
    } else {
        // If the function does not change sign, ask for new values
        printf("The function does not change sign in the interval. Please enter different values for a and b.\n");
    }
    
    return 0;
}
