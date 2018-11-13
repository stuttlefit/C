#include <stdio.h>

int main() {
  int num_of_days;
  int years, weeks, leftover_days;
  printf("Number of days?: ");
  scanf("%d", &num_of_days);

  years = num_of_days / 365;
  weeks = (num_of_days - 365*years) / 7;
  leftover_days = (num_of_days - 365*years - 7*weeks);

  printf("Years: %d\nWeeks: %d\nDays: %d\n", years, weeks, leftover_days);

  return 0;
}
