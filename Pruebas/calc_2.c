#include <stdio.h>
#include <math.h>

int main()
{
  double radius = 0.0;
  double area = 0.0;
  const double PI = 3.14159;

  printf("Enter the radius: ");
  scanf("%lf", &radius);

  area = PI * radius * radius;

  printf("Area: %.2lf", area);

  return 0;
}
