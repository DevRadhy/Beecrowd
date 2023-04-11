#include <stdio.h>

int main() {
  double a, b, c;

  double media;

  scanf("%lf", &a);
  scanf("%lf", &b);
  scanf("%lf", &c);

  media = (a * 0.2) + (b * 0.3) + (c * 0.5);

  printf("MEDIA = %.1f\n", media);

  return 0;
}