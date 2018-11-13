#include <stdio.h>

#define MAX_ID_LENGTH 10

float employee_salary(int, float);

int main() {
  int hours_worked;
  float rate_per_hour;
  char employee_id[MAX_ID_LENGTH];

  printf("Input the Employee's ID (Max 10 chars): ");
  scanf("%s", &employee_id);
  printf("Input the working hrs: ");
  scanf("%d", &hours_worked);
  printf("Salary amount/hr: ");
  scanf("%f", &rate_per_hour);

  printf("Employee's ID = %s\n", employee_id);
  printf("Salary = US$ %0.2f\n", employee_salary(hours_worked, rate_per_hour));

  return 0;
}

float employee_salary(int hours, float rate) {
  return rate*hours;
}
