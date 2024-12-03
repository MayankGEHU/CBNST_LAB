#include<stdio.h>
#include<math.h>

float polyFunc(float x) {
    return 2*x-(log10(x)/log(10)) - 7;
}
float diffFunc(float x) {
    return 1/(2*x*log(10));
}
float xform(float x) {
    return((log10(x)/log(10))+7)/2;
}
int steps = 0;
void calIterative(float x, float allowErr) {
    x = xform(x);
    steps++;
    printf("%d Iteration and the value of x is : %f\n",steps,x);
    if(fabs(polyFunc(x))<=allowErr)
    return ; 
    calIterative(x,allowErr);
}
int main() {
    printf("Mayank Singh / 230111954 / 35 / I1\n");
    float x,allowErr;
    printf("Enter the value: ");
    scanf("%f",& x);
    if(diffFunc(x)<1) {
        printf("Input is satisfying the condition.\n");
        printf("Enter the value of error: ");
        scanf("%f",& allowErr);
        printf("\n");
        calIterative(x,allowErr);
    }
    else {
        printf("Oops invalid input!!!");
    }
    return 0;
}