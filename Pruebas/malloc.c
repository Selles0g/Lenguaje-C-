#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	char	*lpsz_buffer = NULL;
	size_t	n_tamaño_max = 1024;
	lpsz_buffer = malloc(n_tamaño_max);
	if (lpsz_buffer)
	{
		memset(lpsz_buffer, 0, n_tamaño_max);
		strcpy(lpsz_buffer, "Salí con una gorda\n");
		strcat(lpsz_buffer, "tenía más fuerza que yo\n");
		strcat(lpsz_buffer, "un día salimos de fiesta\n");
		strcat(lpsz_buffer, "y me defendió y to'\n");
		strcat(lpsz_buffer, "");


		printf("%s", lpsz_buffer);
		free(lpsz_buffer);
	}
	return 0;
}
