#include <stdio.h>
#include <math.h>

int main(void) {

  //initialize variables
  double a, b, c, x1, x2;
  
  //description of the program
  printf("This program will solve a quadratic equation:\n");
  printf("\t\tax^2+ bx + c = 0\n");
  printf("Using the quadratic formula:\n");
  printf("\tx = (-b ± √(b^2 - 4ac)) / 2a\n\n\n");

  printf("Please enter the values of a, b, and c:\n");

  //takes input of a, b, and c
  printf("a  b  c \n-------\n");
  scanf("%lf %lf %lf", &a, &b, &c);

  //if a is equal to zero
  if (a == 0) {
    printf("ERROR: 'a' cannot be zero. Undefined result!");
    return 0;
  }

  //imaginary portion
  if ((pow(b, 2.0) -4 * a * c) < 0) {
    //initialize variables for this instance
    float positive_vers = fabs((pow(b, 2.0) -4 * a * c));
    float f_first = -b/(2*a); //first number
    float f_second = (sqrt(positive_vers))/ (2 * a); //imaginary portion

    //output
    printf("\t\t\t x1 = %.2f + %.2fi \t\t\t\t x2 = %.2f - %.2fi", f_first, f_second, f_first, f_second);

    return 0;
  }

  //compute x1 and y1
  x1 = ((-b + (sqrt(pow(b, 2.0) -4 * a * c))) / (2 * a));
  x2 = ((-b - (sqrt(pow(b, 2.0) -4 * a * c))) / (2 * a));

  //output x1 and y1 (real)
  printf("\t\t\t x1 = %.2lf\t\t\t\t  x2 = %.2lf", x1, x2);

  return 0;
}