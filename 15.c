#include <stdio.h>
#include <math.h>

double distance(double, double, double, double);

int main() {
  double x1, x2, y1, y2;
  printf("Input x1: ");
  scanf("%lf", &x1);
  printf("Input y1: ");
  scanf("%lf", &y1);
  printf("Input x2: ");
  scanf("%lf", &x2);
  printf("Input y2: ");
  scanf("%lf", &y2);

  printf("Distance between the said points: %lf\n", distance(x1, x2, y1, y2));
}

double distance(double x1, double x2, double y1, double y2) {
  return sqrt(pow((y2 - y1), 2) + pow((x2 - x1), 2));
}
