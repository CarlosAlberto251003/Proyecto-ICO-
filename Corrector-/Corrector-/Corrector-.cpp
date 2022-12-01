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


