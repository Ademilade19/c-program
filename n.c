#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
  double x = 43.48;
  char str[100];
  sprintf(str, "%f", x);
  printf("the string is: %s\n", str);
  return 0;
}
