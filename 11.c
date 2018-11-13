#include <stdio.h>

float average(float, float, int, int);

int main() {
  int quantity1, quantity2;
  float weight1, weight2;

  printf("Weight - Item1: ");
  scanf("%f", &weight1);
  printf("No. of item1: ");
  scanf("%d", &quantity1);
  printf("Weight - Item2: ");
  scanf("%f", &weight2);
  printf("No. of item2: ");
  scanf("%d", &quantity2);

  printf("Average Value = %f\n", average(weight1, weight2, quantity1, quantity2));
  return 0;

}

float average(float weight1, float weight2, int quantity1, int quantity2) {
  return (quantity1*weight1 + quantity2*weight2)/(quantity1 + quantity2);
}
