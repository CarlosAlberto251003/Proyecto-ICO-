#include<stdio.h>
#include<math.h>

int main() 
{
	double limi;
	double limf;
	double incremento;	
	double resex;
	double rese = 0;	
	int x;
	int j;
	int f;

	scanf_s("%lf", &limi);
	scanf_s("%lf", &limf);
	scanf_s("%lf", &incremento);

	int conteo = (limf - limi) / incremento;

	if (limi == 0 && limf == 0) {
		resex= 1;
		rese = 1;
		printf("%f %f %f", limi, rese, resex);
		return 0;
	}
	else if (incremento == 0)
	{
		return 1;
	}	
	while (limi <= limf + incremento) 
	{
		for (x = 0; x <= conteo; x++) {
			f = 1;			
			for (j = 1; j <= x; j++) {
				f = f * j;
			}		
			rese = rese + (pow(limi, x)) / f;
		}
		resex = exp(limi);
		printf("%f %f %f\n", limi, rese, resex);
		limi = limi + incremento;
		rese = 0;
	}
}