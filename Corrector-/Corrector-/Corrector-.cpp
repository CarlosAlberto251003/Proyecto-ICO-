
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
	printf("\n");
	
	FILE* fs;
    char fg[256];
	char aux2[100];

	printf("introdusca el nombre del archivo: ");
	scanf_s("%s", fg, 256);
	fopen_s(&fs, fg, "r");
	if (fs == NULL)
	{
		printf("no se pudo abrir el archivo");

	}
	while (!feof(fs))
	{
		fgets(aux2, 100, fs);
		//printf("%s", aux2);
	}
	
	
	
	
	
	
	//fclose(fs);

	//int 
		/*if (strcmp(
		const char* aux,
		const char* aux2
	));
	*/



}