/*#include "corrector.h"
#include <stdio.h>
#include <string.h>

void main(void)

{
	FILE* fp;

	char sZNom[256];
	char sZCAD[300];
	int conta;
	int frec;
	printf("Introdusca la ruta o el nombre del archivo: ");
	scanf_s("%s", sZNom, 256);
	fopen_s(&fp, sZNom, "r");
	frec = 0;

	conta = 0;

	//while (fp == NULL)
	//{
		if (fp != NULL)
		{
			
			fscanf_s(fp, "s", sZCAD, 300);
			printf("%s", sZCAD);
			fclose(fp);
		}

		else
			printf("\nFUE IMPOSIBLE ABRIR EL ARCHIVO \nVerificar la RUTA o NOMBRE del archivo\n");

	//}
}*/
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























/*

#define TAMTOKEN	50						//tamaño maximo de cada palabra
#define NUMPALABRAS 70000					//Numero maximo de palabras


//Funciones publicas para el proyecto
void 	Diccionario(
	char *szNombre, 	 					//Nombre del archivo, desde donde se lee el diccionario
	char szPalabras[][TAMTOKEN],  			//Lista de palabras del diccionario
	int iEstadisticas[], 					//Numero de veces que aparece la palabra en el archivo
	int &iNumElementos);					//Numero de elementos en el diccionario


*/

/*
void	ListaCandidatas		(
	char	szPalabrasSugeridas[][TAMTOKEN],	//Lista de palabras clonadas
	int		iNumSugeridas,						//Lista de palabras clonadas
	char	szPalabras[][TAMTOKEN],				//Lista de palabras del diccionario
	int		iEstadisticas[],					//Lista de las frecuencias de las palabras
	int		iNumElementos,						//Numero de elementos en el diccionario
	char	szListaFinal[][TAMTOKEN],			//Lista final de palabras a sugerir
	int		iPeso[],							//Peso de las palabras en la lista final
	int &	iNumLista)
*/
//void main(void)
//{




