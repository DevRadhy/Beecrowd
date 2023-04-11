#include <stdio.h>

int main() {
  int timeInHours;
  int velocity;

  scanf("%d", &timeInHours);
  scanf("%d", &velocity);

  double spentFuel = (timeInHours * velocity) / 12.0;

  printf("%.3f\n", spentFuel);

  return 0;
}