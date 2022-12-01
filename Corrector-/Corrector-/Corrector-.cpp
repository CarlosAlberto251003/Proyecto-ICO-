/*#include "corrector.h"
#include <stdio.h>
#include <string.h>


#include <stdio.h>
#include <string.h>
#include "corrector.h"

void main(void)	//Diccionario(char* szNombre, char szPalabras[][TAMTOKEN], int iEstadisticas[], int& iNumElementos)
{
	int contador;
	FILE* fp;
	char f[256];
	//char szNombre;
	//char szPalabras[70000][TAMTOKEN];
	//int iEstadisticas[TAMTOKEN];
	//int iNumElementos = 1;
	char aux[100];

	printf("introdusca el nombre del archivo: ");
	scanf_s("%s", f, 256);
	fopen_s(&fp, f,"r");
	if (fp == NULL)
	{
		printf("no se pudo abrir el archivo");
		
	}
	while (!feof(fp))
	{
		fgets(aux,100,fp);
		//printf("%s", aux);
	}
	fclose(fp);

}
