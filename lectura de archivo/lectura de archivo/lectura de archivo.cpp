#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main(void)
{
	char sZNom[256];
	
	FILE* fp;
	printf("introdusca el nombre del archivo: ");
	scanf_s("%s", sZNom, 256);
	fopen_s(&fp, sZNom, "r");

	int numero;
	char cadena[10];
	
	if (fp == NULL)
	{
		perror("Error en la apertura");
		//return 1;
	}
	while (feof(fp) == 0)
	{
		fscanf_s(fp, "%i, %s", &numero, & cadena[10]);
		printf("%i  %s/n", numero, cadena[10]);
	}
	fclose(fp);


	//return 0;
}

/*#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE*













	return 0;
}
*/