#include <math.h>
#include <stdio.h>

int main()
{
  double a, b, c, d;
  double x1, x2;

  printf("Enter value for a: ");
  scanf("%lf", &a);

  printf("a:\n", a);

  printf("Enter value for b: ");
  scanf("%lf", &b);

  printf("b\n", b);

  printf("Enter value for c: ");
  scanf("%lf", &c);

  printf("&lf:\n",c);

  d = (b * b - 4 * a * c);
  // double see = 25;
  // printf("d: %lf", d);

  // printf("This is d: %lf", sqrt(d));
  x1 = (-b + sqrt(d)) / 2 * a;
  printf(" x1:%lf\n" ,x1);
  x2 = (-b - sqrt(d)) / 2*a;
  printf(" x2:%lf\n" ,x2);
  return 0;
}