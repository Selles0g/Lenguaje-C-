#include <stdio.h>
#include <math.h>

int main()
{
  double radio = 0.0;
  double area = 0.0;
  const double PI = 3.14159;

  printf("Enter the radius: ");
  scanf("%lf", &radio);

  area = PI * radio * radio;

  printf("Area: %.2lf", area);

  return 0;
}
