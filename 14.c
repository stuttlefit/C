#include <stdio.h>

float average_consumption(int, float);

int main() {
  int distance;
  float fuel_used;

  printf("Input total distance in km: ");
  scanf("%d", &distance);
  printf("Input total fuel spent in liters: ");
  scanf("%f", &fuel_used);

  printf("Average consumption (km/lt): %0.3f\n", average_consumption(distance, fuel_used));
}

float average_consumption(int distance, float fuel_used) {
  return distance / fuel_used;
}
