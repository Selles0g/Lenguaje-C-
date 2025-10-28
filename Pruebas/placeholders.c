#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	//Diferentes maneras de inicializar cadenas de texto//
	int	horas;
	float	sueldo;
	char	nombre[40];
	//char	nombre[] = "XXXXXX"//

	horas = 15;
	sueldo = 500.00;
	strcpy(nombre, "XXXXXX");
	printf ("Hola, %s. Has trabajado %d horas esta semana.\n", nombre, horas);
	printf ("Tu sueldo total es: %.2f euros\n", sueldo);
	return 0;
}
