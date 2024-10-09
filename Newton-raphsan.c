// #include <stdio.h>
// #include <math.h>

// float f(float x) {
//     return x * log10(x) - 1.2;
// }

// float df(float x) {
//     return log10(x) + 0.43429;
// }

// int main() {
//     int itr = 0; 
//     int maxitr; 
//     float h, x0, x1, allerr;

//     printf("\nEnter x0, allowed error and maximum iterations\n");
//     scanf("%f %f %d", &x0, &allerr, &maxitr);

//     do {
//         h = f(x0) / df(x0); 
//         x1 = x0 - h; 
//         itr++; 

//         printf(" At Iteration no. %3d, x = %9.6f\n", itr, x1);

//         if (fabs(h) < allerr) {
//             printf("After %3d iterations, root = %8.6f\n", itr, x1);
//             return 0;
//         }
//         x0 = x1; 
//     } while (fabs(h) >= allerr && itr < maxitr); 
//     printf("The required solution does not converge or iterations are insufficient\n");
//     return 1;
// }

//------------------------ or ------------------------------//

// #include<stdio.h>
// #include<stdlib.h>
// #include<math.h>
// #define f(x) 3*x-cos(x)-1
// #define g(x) 3+sin(x)
// int main() {
//     printf("Mayank Singh / 230111954 / 35 / I1\n");
//     int n=1;
//     float x1,x2,xn,e1,e2,e,f,f1;
//     printf("\nEquation:f(x)=3*x-cos(x)-1=0");
//     printf("Enter intital guess:");
//     scanf("%f",&x1);
//     printf("Enter maximum allowed error:");
//     scanf("%f",&e);
//     printf("\nThe sequence of approximations are\n");
//     printf("n\t\tx_n\t\tf(xn)\n");
//     do {
//         f = f(x1);
//         f1 = g(x1);
//         if(f == 0) {
//             printf("\nAn approximate root is   %f\n",x1);
//             return main();
//         }
//         if(fabs(f1) < 0.0000001) {
//             printf("Error!The derivative is too small to implement NR method\n");
//             return main();
//         }
//         x2 = x1 - f / f1;
//         e1 = fabs(x2 - x1);
//         printf("%d\t %f\t %f\t\n",n,x2,f(x1));
//         if(n >= 10){
//             if(e1 >= e2) {
//                 printf("The given sequence of approximations diverge with initial approximations\n");
//                 return main();
//             }
//             else {
//                 x1 = x2;
//                 e2 = e1;
//                 n = n + 1;
//             }
//         }
//             else {
//                 x1 = x2;
//                 e2 = e1;
//                 n = n + 1;
//             }
//     } while(e1 >= e);
//     printf("\nAn approximate root is %f\n",x1);
//     return(0);
// }


// #include<stdio.h>
// #include<conio.h>
// #include<math.h>
// #include<stdlib.h>

// /* Defining equation to be solved.
//    Change this equation to solve another problem. */
// #define    f(x)    3*x - cos(x) -1

// /* Defining derivative of g(x).
//    As you change f(x), change this function also. */
// #define   g(x)   3 + sin(x)

// void main()
// {
// 	 float x0, x1, f0, f1, g0, e;
// 	 int step = 1, N;
// 	 clrscr();
//      /* Inputs */
// 	 printf("\nEnter initial guess:\n");
// 	 scanf("%f", &x0);
// 	 printf("Enter tolerable error:\n");
// 	 scanf("%f", &e);
// 	 printf("Enter maximum iteration:\n");
// 	 scanf("%d", &N);
// 	 /* Implementing Newton Raphson Method */
// 	 printf("\nStep\t\tx0\t\tf(x0)\t\tx1\t\tf(x1)\n");
// 	 do
// 	 {
// 		  g0 = g(x0);
// 		  f0 = f(x0);
// 		  if(g0 == 0.0)
// 		  {
// 			   printf("Mathematical Error.");
// 			   exit(0);
// 		  }

		
// 		  x1 = x0 - f0/g0;

		
// 		  printf("%d\t\t%f\t%f\t%f\t%f\n",step,x0,f0,x1,f1);
// 		  x0 = x1;
		  
// 		  step = step+1;
		
// 		  if(step > N)
// 		  {
// 			   printf("Not Convergent.");
// 			   exit(0);
// 		  }
		  
// 		  f1 = f(x1);
		  
// 	 }while(fabs(f1)>e);
	
// 	 printf("\nRoot is: %f", x1);
// 	 getch();
// }



// #include<stdio.h>
// #include<conio.h>
// #include<math.h>
// #include<stdlib.h>

// #define    f(x)    3*x - cos(x) -1
// #define   g(x)   3 + sin(x)

// void main(){
//     printf("Mayank Singh / 230111954 / 35 / I1\n");
// 	 float x0, x1, f0, f1, g0, e;
// 	 int step = 1, N;
// 	 printf("\nEnter initial guess:\n");
// 	 scanf("%f", &x0);
// 	 printf("Enter tolerable error:\n");
// 	 scanf("%f", &e);
// 	 printf("Enter maximum iteration:\n");
// 	 scanf("%d", &N);
// 	 printf("\nStep\t\tx0\t\tf(x0)\t\tx1\t\tf(x1)\n");
// 	 do {
// 		  g0 = g(x0);
// 		  f0 = f(x0);
// 		  if(g0 == 0.0) {
// 			   printf("Mathematical Error.");
// 			   exit(0);
// 		  }
		
// 		  x1 = x0 - f0/g0;
		
// 		  printf("%d\t\t%f\t%f\t%f\t%f\n",step,x0,f0,x1,f1);
// 		  x0 = x1;
		  
// 		  step = step + 1;
		
// 		  if(step > N){
// 			   printf("Not Convergent.");
// 			   exit(0);
// 		  }
		  
// 		  f1 = f(x1);
		  
// 	 } while(fabs(f1) > e);
	
// 	 printf("\nRoot is: %f", x1);
// 	 getch();
// }


#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define f(x) (3 * x - cos(x) - 1)
#define g(x) (3 + sin(x))

void newton_raphson(double initial_guess, double tol){
    double x = initial_guess;
    double h = f(x) / g(x);
    int iter = 0, max_iter = 100;

    while (fabs(h) >= tol && iter < max_iter){
        h = f(x) / g(x);
        x = x - h;
        iter++;
    }

    if (iter < max_iter) {
        printf("Approximate root: %.6lf\n", x);
        printf("Number of iterations performed: %d\n", iter);
    }
    else
        printf("Max iterations reached without convergence.\n");
}

int main() {
    printf("Mayank Singh / 230111954 / 35 / I1\n");
    double initial_guess, tol;

    printf("Enter the initial guess for the root:\n");
    scanf("%lf", &initial_guess);

    printf("Enter the tolerance value:\n");
    scanf("%lf", &tol);

    newton_raphson(initial_guess, tol);
    return 0;
}
