#include <stdio.h>

int main() {
  int number1, number2; 
  int amount1, amount2;

  double value1, value2;

  double total;

  scanf("%d %d %lf", &number1, &amount1, &value1);
  scanf("%d %d %lf", &number2, &amount2, &value2);

  total = (amount1 * value1) + (amount2 * value2);

  printf("VALOR A PAGAR: R$ %.2f\n", total);

  return 0;
}