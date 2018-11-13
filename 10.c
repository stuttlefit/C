#include <stdio.h>

int main() {
  int first_int;
  int second_int;
  printf("Enter the first integer: ");
  scanf("%d", &first_int);
  printf("Enter the second integer: ");
  scanf("%d", &second_int);

  printf("Product of the above two integers = %d\n", first_int * second_int);
}
