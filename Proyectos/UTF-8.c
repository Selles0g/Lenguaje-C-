#include <locale.h>
#include <stdio.h>
#include <wchar.h>
#include <stdlib.h> //contiene funciones como malloc y free 
#include <string.h> //contiene funciones como strepv v strcat
//#include <windows.h> para que funcione en MacOS dejar comentado

int main(int argc, char *argv[])
{
	//Trabajando en UTF-8:
	char szFrase1[200];
	
	//Para cambiar el contexto de página de códigos y cultura:
	char szCountry[40];
	char * lpszCountry = NULL;
	memset(szCountry, 0, sizeof (szCountry));
	
	lpszCountry = setlocale(LC_ALL, "chinese-simplified"); //pág. códigos 936
	if (lpszCountry) //Si setlocale no va, devuelve de NULL
	{
		strcpy(szCountry, lpszCountry);
	}
	
	memset(szFrase1, 0, sizeof(szFrase1));
	strcpy(szFrase1, "我是中国人。我有一匹马和两只猫。");
	printf("Cadena en UTF-8: '%s'\n", szFrase1);
	
	return 0;
}
