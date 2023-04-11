#include <stdio.h>

int main() {
  int number;
  int hours;

  double salaryPerHour;
  double salary;

  scanf("%d", &number);
  scanf("%d", &hours);

  scanf("%lf", &salaryPerHour);

  salary = salaryPerHour * hours;

  printf("NUMBER = %d\n", number);
  printf("SALARY = U$ %.2f\n", salary);

  return 0;
}