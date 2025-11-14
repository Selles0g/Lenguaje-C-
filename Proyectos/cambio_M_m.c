#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char *argv[])
{
  char  szCadena[200];
  char  *pCursor = NULL;
  char  Ch = 0x00;

  memset (szCadena, 0, sizeof(szCadena));
  strcpy (szCadena, "EN UN LUGAR DE LA MANCHA DE CUYO ");
  strcat (szCadena, "NOMBRE NO QUIERO ACORDARME");
  printf ("Original.....: %s\n", szCadena);

  pCursor = szCadena;
  Ch = *pCursor;
  while (*pCursor)
  {
    Ch = *pCursor;
    if (Ch >= 'A' && Ch <= 'Z')
    {
      Ch = Ch + 32;
      *pCursor = Ch;
    }
    pCursor++;
  }
  printf("Minúsculas.....: %s\n", szCadena);
  return 0;
}
