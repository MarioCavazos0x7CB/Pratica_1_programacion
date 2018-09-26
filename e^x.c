#include <stdio.h>

//Ejercicio del e^x - MACC

int main ()
{
	int i, n, c;
	float e, x, num, factorial;
		
	do
	{		
		do
		{
			system("cls");
				
			printf("Hola!, este programa sirve para calcular el valor de e^x:");
			
			printf("\n\nIngrese el valor de X (mayor a -5 y menor a 17): ");
			scanf("%f", &x);
			
			if(x>17 || x<(-5))
			{
				printf("\n\nEl numero de X que ingresaste es invalido, intenta de nuevo!\n\n");
				system("PAUSE");
			}
		
		}while(x>17 || x<(-5));
		
		printf("\n\nIngrese el numero de iteraciones (mayor o igual a 1 y menor a 30): ");
		scanf("%d", &n);
		
		if(n<1 || n>30)
		{
			printf("\n\nEl numero de iteraciones que ingresaste es invalido, intenta de nuevo!\n\n");
			system("PAUSE");
		}
	
	}while(n<1 || n>30);
	
	i = 1;
	e = 0.0;
	num = 1.0;
	factorial = 1.0;
		
	do
	{
		if(i == 1)
			e += 1.0;
		
		for(c=i; c<=i; c++)
			num *= x;
		
		e += (num/factorial);
		
		i += 1;
		factorial *= i;
		
	}while (i<=n+1);
	
	printf("\n\nEl valor del e^x para %d iteraciones es: %f\n\n", n, e);
	
	system("PAUSE");
		
	return 0;
}
