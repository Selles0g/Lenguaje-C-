#include <stdio.h>
int main (int argc, char *argv[])
{
   int n = 0;

   printf("Argumentos recibidos\n");

//Para que no salga el nombre del archivo podemos empezar por el primer argumento//

   for(n = 0; n < argc; n++)
   {
      printf("Num. %d contendido=%s\n", n, argv[n]);
   }
   return 0;
}
