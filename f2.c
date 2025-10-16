#include <stdio.h>
#include <string.h>

int	main(int argc, char *argv[])
{
	int	nEdad;
	char	szNombre[40];
	int	nHoes;
	char 	szNombreHoe[40];

	nEdad = 21;
	strcpy (szNombre, "Adrián Selles García");
	nHoes = 1;
	strcpy (szNombreHoe, "Georgi");

	printf("Nombre: %s\nEdad: %d\nHoes: %d\nNombre_Hoe: %s\n",szNombre,nEdad,nHoes,szNombreHoe);
	printf("~Simón:\n~Bruerrg  Breuurrgh  Bleeuurreugggjh\n");
	return 0;
}
