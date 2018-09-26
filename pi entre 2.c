#include <stdio.h>

//Programa para calcular pi/2 - MACC

int main()
{
	int n, i;
	float res, num, den;
	
	do
	{
		system("cls");
		
		printf("Hola!, este programa sirve para calcular el valor de PI/2:");
		
		printf("\n\nIngrese el numero de iteraciones (mayor o igual a 1 y menor a 10000000): ");
		scanf("%d", &n);
		
		if(n<1 || n>10000000)
		{
			printf("\n\nEl numero de iteraciones que ingresaste es invalido, intenta de nuevo!\n\n");
			system("PAUSE");
		}
	
	}while(n<1 || n>10000000);
	
	i = 0;
	res = 1.0;
	den = 1.0;
	num = 2.0;
	
	do
	{
		res *= (num/den);
		
		if(num > den)
			den += 2.0;
		
		else
			num += 2.0;
			
		i += 1;	
		
	}while (i<=n);
	
	printf("\n\nEl valor del PI/2 para %d iteraciones es: %f\n\n", n, res);
	
	system("PAUSE");
	
	return 0;
}
