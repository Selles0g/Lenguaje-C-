#include <stdio.h>

int	main(int argc, char *argv[])
{
	float	Fahrenheit;
	float	Celsius;

	printf("introduce la temperatura en grados celsius: ");
	scanf("%f", &Celsius);

	Fahrenheit = (Celsius * 1.8) + 32;

	printf("%.2f°C equivalen a %.2f°F\n", Celsius, Fahrenheit);
	return 0;
}
