#include <stdio.h>

int main() {
  double a;
  double b;

  double media;

  scanf("%lf", &a);
  scanf("%lf", &b);

  media = ((a * 0.35) + (b * 0.75)) / 1.1;

  printf("MEDIA = %.5f\n", media);

  return 0;
}