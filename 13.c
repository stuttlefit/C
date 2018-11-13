#include <stdio.h>

int max_of_three(int, int, int);

int main() {
  int first, second, third;

  printf("Input the first integer: ");
  scanf("%d", &first);
  printf("Input the second integer: ");
  scanf("%d", &second);
  printf("Input the third integer: ");
  scanf("%d", &third);

  printf("Maximum value of three integers: %d\n", max_of_three(first, second, third));

}

int max_of_three(int first, int second, int third) {
  int max = first;

  if (second > max)
    max = second;
  if (third > max)
    max = third;

    return max;
}
