#include <stdio.h>
#include <math.h>

int main(void) {

    //initialize variables
    double a, b, c, x1, x2;
  
    printf("This program will solve a quadratic equation:\n");
    printf("\t\tax^2+ bx + c = 0\n");
    printf("Using the quadratic formula:\n");
    printf("\tx = (-b ± √(b^2 - 4ac)) / 2a\n\n\n");

    printf("Please enter the values of a, b, and c:\n");

    //takes input of a, b, and c
    printf("a  b  c \n-------\n");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        printf("ERROR: 'a' cannot be zero. Undefined result!");
        return 0;
    }

    x1 = ((-b + (sqrt(pow(b, 2.0) -4 * a * c))) / (2 * a));
    x2 = ((-b - (sqrt(pow(b, 2.0) -4 * a * c))) / (2 * a));

    printf("\t\t\t x1 = %.2lf\t\t\t\t  x2 = %.2lf", x1, x2);





  return 0;
}