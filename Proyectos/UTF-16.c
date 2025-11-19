#include <locale.h>
#include <stdio.h>
#include <wchar.h>
#include <stdlib.h> //contiene funciones como malloc y free 
#include <string.h> //contiene funciones como strcpy y strcat
#include <windows.h>//Solo compila en Windows
int main(int argc, char *argv[])
{
	//Trabajando en UTF-16:
	wchar t wszFrase1[200];
	
	//Para cambiar el contexto de página de códigos y cultura:
	wchar t wszCountry[400];
	wchar t * lpwszCountry = NULL;
	memset (wszCountry, 0, sizeof (wszCountry));
	
	pwszCountry = wsetlocale (LC ALL, L"chinese-simplified");
	if (lpwszcountry) //Si setlocale no va, devuelve NULL
	{
		wcscpy (wszCountry, lpwszCountry);
	}
	memset(wszFrasel. 0. sizeof (wszFrase1) ) :
	wcscpy(wszFrase1, L"我是中国人 我有一匹马和两只猫 ");
	wprintf (L"Cadena en UTE-16: '%ls'\n". wszFrase1):
	
	return 0:
}
