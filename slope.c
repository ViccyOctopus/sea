#include <stdio.h>

int main(void) {
    //initialization of variables
    float x1, y1, x2, y2, slope;

    //start of main body
    //gather input for point 1
    printf("Enter first set of coordinates: (x1, y1)\n");
    scanf("%f %f", &x1, &y1);

    //gather input for point 2
    printf("Enter second set of coordinates: (x2, y2)\n");
    scanf("%f %f", &x2, &y2);

    //formula
    slope = ((y2 - y1)/(x2 - x1));

    //output
    if (x1 != x2 && y1 != y2) {
      printf("\t The slope of the line is: %.2f", slope);
    }

    else if (x1 == x2 && y1 == y2) {
      printf("\t You have entered the coordinates of a point. No line exists.\n");
    }

    else if (x1 == x2) {
      printf("\tThe slope is undefined, the line is vertical.\n");
    }
    
    else if (y1 == y2) {
      printf("\tThe slope is zero, the line is horizontal.\n");
    }


    return 0;
}