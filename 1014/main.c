#include <stdio.h>

int main() {
  int distance;
  double fuel;

  double value;

  scanf("%d", &distance);
  scanf("%lf", &fuel);

  value = distance / fuel;

  printf("%.3f km/l\n", value);

  return 0;
}