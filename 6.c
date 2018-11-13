#include <stdio.h>
#include <math.h>

double perim_of_circle(double radius);
double area_of_circle(double radius);

int main() {
  double radius = 6.0;

  printf("Perimeter of the Circle = %f inches\n", perim_of_circle(radius));
  printf("Area of the Circle = %f\n square inches", area_of_circle(radius));

  return 0;
}

double perim_of_circle(double radius) {
  return 2*M_PI*radius;
}

double area_of_circle(double radius) {
  return M_PI*radius*radius;
}
