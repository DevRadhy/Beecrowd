#include <stdio.h>
#include <math.h>

#define PI 3.14159

int main() {
  double a, b, c;

  scanf("%lf %lf %lf", &a, &b, &c);

  double triangle = (a * c) / 2;
  double circle = PI * pow(c, 2);
  double trapeze = ((a + b) * c) / 2;
  double square = pow(b, 2);
  double rectangle = a * b;

  printf("TRIANGULO: %.3f\n", triangle);
  printf("CIRCULO: %.3f\n", circle);
  printf("TRAPEZIO: %.3f\n", trapeze);
  printf("QUADRADO: %.3f\n", square);
  printf("RETANGULO: %.3f\n", rectangle);

  return 0;
}