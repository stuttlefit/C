#include <stdio.h>

int perimeter_of_rect(int width, int height);
int area_of_rect(int width, int height);

int main() {
  int height = 7;
  int width = 5;

  printf("Perimeter of the rectangle = %d\n", perimeter_of_rect(width, height));
  printf("Area of the rectangle = %d\n", area_of_rect(width, height));

  return 0;
}

int perimeter_of_rect(int width, int height) {
  return 2*width + 2*height;
}

int area_of_rect(int width, int height) {
  return width*height;
}
