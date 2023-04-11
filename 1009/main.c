#include <stdio.h>

int main() {
  char name;

  double salary;
  double sales;

  double total;

  scanf("%s", &name);

  scanf("%lf", &salary);
  scanf("%lf", &sales);

  total = (sales * 0.15) + salary;

  printf("TOTAL = R$ %.2f\n", total);

  return 0;
}