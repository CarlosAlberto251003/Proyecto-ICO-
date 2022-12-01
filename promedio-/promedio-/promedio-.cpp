#include<stdio.h>

void main(void)
{
	float califs;
	int	contador, materias, conta, suma;
	float promedio;

	printf("Introtuce cuantas materias llevas: ");
	scanf_s("%i", &materias);
	printf("introduce tus calificaciones \n");
	contador = 0;
	suma = 0;
	while (contador < materias)
	{
		califs = 0;
		scanf_s("%f", &califs);
		suma = suma + califs;
		contador++;
	}
	promedio = 0;
	promedio = suma / contador;
	printf("tu calificacion es: %.2f", promedio);
}