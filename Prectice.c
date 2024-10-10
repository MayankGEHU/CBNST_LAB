// #include<stdio.h>
// #include<math.h>

// #define f(x) (3 * x + sin(x) - exp(x))

// int main() {
//     float a , b, c, e;

//     printf("Enter the first value (a) : ");
//     scanf("%f", &a);

//     printf("Enter the second value (b) : ");
//     scanf("%f", &b);

//     if(f(a) * f(b) < 0) {
//         printf("Enter the error (e) : ");
//         scanf("%f", &e);

//         while(fabs(b - a) >= e) {
//             c = (a + b) / 2;

//             if(f(c) == 0.0) {
//                 break;
//             } else if(f(a) * f(c) < 0) {
//                 b = c;
//             } else {
//                 a = c;
//             }
//         }
//          printf("The approximate root is %f", c);
//     } else {
//         printf("The function does not change the sing value at the interva, Please enter the valid value");
//     }
//     return 0;
// }


// #include<stdio.h>
// #include<math.h>
// #include <stdlib.h>

// void NewTonRaphone(double initial_guess, double tol) {
//     double x =  initial_guess;
//     double h = f(x) / g(x);
//     int iter = 0, max_iter = 100;

//     while(fabs(h) >= tol && iter < max_iter) {
//         h = f(x) / g(x);
//         x = x - h;
//         iter++;
//     }
//     if(iter < max_iter) {
//         printf("Approximate root: %.6lf\n", x);
//         printf("Number of iterations performed: %d\n", iter);
//     } else {
//          printf("Max iterations reached without convergence.\n");
//     }

// }

// int main() {
//     double initial_guess, tol;

//     printf("Enter the initial guess :");
//     scanf("%lf",&initial_guess);

//     printf("Enter the tolerance value : ");
//     scanf("%lf", &tol);

//     NewTonRaphone(initial_guess,tol);

//     return 0;
// }


// #include<stdio.h>
// #include<math.h>

// // Function to calculate the original equation x^4 - x - 10
// float polyFunc(float x) {
//     return pow(x, 4) - x - 10;
// }

// // Transformation function for fixed-point iteration: x = (x + 10)^(1/4)
// float xform(float x) {
//     return pow(x + 10, 0.25);
// }

// // Derivative of the transformation function g'(x) = 1/4 * (x + 10)^(-3/4)
// float diffFunc(float x) {
//     return (1.0 / 4.0) * pow(x + 10, -3.0 / 4.0);
// }

// int steps = 0;

// // Function to perform fixed-point iteration
// void calIterative(float x, float allowErr) {
//     float newX = xform(x);
//     steps++;
//     printf("%d Iteration: x = %.5f\n", steps, newX);

//     // Check if the absolute difference or the function value is within the allowed error
//     if(fabs(newX - x) <= allowErr || fabs(polyFunc(newX)) <= allowErr) {
//         printf("Root found: %.5f after %d iterations\n", newX, steps);
//         return;
//     }

//     // Recursive call for the next iteration
//     calIterative(newX, allowErr);
// }

// int main() {
//     printf("Mayank Singh / 230111954 / 35 / I1\n");

//     float x, allowErr;
//     printf("Enter initial guess: ");
//     scanf("%f", &x);

//     // Check the convergence condition using the derivative of the transformation function
//     if(fabs(diffFunc(x)) < 1) {
//         printf("The input satisfies the convergence condition.\n");
        
//         printf("Enter allowed error (e.g., 0.00001): ");
//         scanf("%f", &allowErr);

//         printf("\nStarting fixed-point iteration...\n");

//         // Begin iterative method
//         calIterative(x, allowErr);
//     } else {
//         printf("Oops! The method may not converge for the given initial guess.\n");
//     }

//     return 0;
// }



// #include<stdio.h>
// #include<math.h>

// // Function to calculate the original equation x^4 - x - 10
// float polyFunc(float x) {
//     return pow(x, 4) - x - 10;
// }

// // Transformation function for fixed-point iteration x = (x + 10)^(1/4)
// float xform(float x) {
//     return pow(x + 10, 0.25);
// }

// int steps = 0;

// // Function to perform fixed-point iteration
// void calIterative(float x, float allowErr) {
//     float newX = xform(x);
//     steps++;
//     printf("%d Iteration: x = %.5f\n", steps, newX);

//     // Check if the absolute difference or the function value is within the allowed error
//     if(fabs(newX - x) <= allowErr || fabs(polyFunc(newX)) <= allowErr) {
//         printf("Root found: %.5f after %d iterations\n", newX, steps);
//         return;
//     }

//     // Recursive call for the next iteration
//     calIterative(newX, allowErr);
// }

// int main() {
//     printf("Mayank Singh / 230111954 / 35 / I1\n");

//     float x, allowErr;
//     printf("Enter initial guess: ");
//     scanf("%f", &x);
    
//     printf("Enter allowed error (e.g., 0.00001): ");
//     scanf("%f", &allowErr);

//     printf("\nStarting fixed-point iteration...\n");

//     // Begin iterative method
//     calIterative(x, allowErr);
    
//     return 0;
// }

// #include<stdio.h>
// #include<conio.h>
// #include<math.h>
// #include<stdlib.h>

// #define f(x) x*x*x - 2*x - 5

// void main(){
// 	 printf("Mayank Singh / 230111954 / 35 / I1\n");
// 	 float x0, x1, x2, f0, f1, f2, e;
// 	 int step = 1, N;
// 	 printf("\nEnter initial guesses:\n");
// 	 scanf("%f%f", &x0, &x1);
// 	 printf("Enter tolerable error:\n");
// 	 scanf("%f", &e);
// 	 printf("Enter maximum iteration:\n");
// 	 scanf("%d", &N);
	
// 	 printf("\nStep\t\tx0\t\tx1\t\tx2\t\tf(x2)\n");
// 	 do	{
// 		  f0 = f(x0);
// 		  f1 = f(x1);
// 		  if(f0 == f1) {
// 			   printf("Mathematical Error.");
// 			   exit(0);
// 		  }
		  
// 		  x2 = x1 - (x1 - x0) * f1/(f1-f0);
// 		  f2 = f(x2);
		  
// 		  printf("%d\t\t%f\t%f\t%f\t%f\n",step,x0,x1,x2, f2);
		  
// 		  x0 = x1;
// 		  f0 = f1;
// 		  x1 = x2;
// 		  f1 = f2;
		  
// 		  step = step + 1;
		  
// 		  if(step > N) {
// 			   printf("Not Convergent.");
// 			   exit(0);
// 		  }
// 	 } while(fabs(f2)>e);
	
// 	 printf("\nRoot is: %f", x2);
// 	 getch();
// }   
