#include <stdio.h>
#include <stdlib.h> //contiene funciones como malloc y free
#include <string.h> //contiene funciones como strcpy y strcat

int main (int argc, char *argv[])
{
	char * lpsz_buffer = NULL;
	size_t n_tamanyo_max = 1024; 	 //size_t equivale a un número 
                                	 //entero largo de 64 bits sin signo
				 	 //lo cual es mucho mayor que
				 	 //un int de 32 bits

	lpsz_buffer = malloc(n_tamanyo_max);
	if (lpsz_buffer)
	{
		memset(lpsz_buffer, 0, n_tamanyo_max);
		strcpy(lpsz_buffer, "En un lugar de la Mancha de cuyo ");
		strcat(lpsz_buffer, "nombre no quiero acordarme ");
		strcat(lpsz_buffer, "no ha mucho que vivía un hidalgo ");
		strcat(lpsz_buffer, "de los de lanza en astillero, ");
		strcat(lpsz_buffer, "adarga antigua, rocín flaco ");
		strcat(lpsz_buffer, "y galgo corredor.\n");
		printf("%s", lpsz_buffer);
		free(lpsz_buffer);
	}
	return 0;
}
