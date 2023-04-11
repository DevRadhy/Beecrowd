#include <stdio.h>
#include <stdlib.h>

int majorAB(int a, int b) {
  int value = ((a + b) + abs(a - b)) / 2;

  return value;
}

int main() {
  int a, b, c;

  scanf("%d %d %d", &a, &b, &c);

  int value = majorAB(a, b);

  value = majorAB(value, c);

  printf("%d eh o maior\n", value);

  return 0;
}