#include <stdio.h>

//Ejercicio del ln(x) - MACC
int main ()
{
	int i, n, c;
	float lnx, x, num, b;
		
	do
	{		
		do
		{
			system("cls");
				
			printf("Hola!, este programa sirve para calcular el valor de ln(x):");
			
			printf("\n\nIngrese el valor de X (mayor a 0): ");
			scanf("%f", &x);
			
			if(x<=0)
			{
				printf("\n\nEl numero de X que ingresaste es invalido, intenta de nuevo!\n\n");
				system("PAUSE");
			}
		
		}while(x<=0);
		
		printf("\n\nIngrese el numero de iteraciones (mayor o igual a 1 y menor a 30): ");
		scanf("%d", &n);
		
		if(n<1)
		{
			printf("\n\nEl numero de iteraciones que ingresaste es invalido, intenta de nuevo!\n\n");
			system("PAUSE");
		}
	
	}while(n<1);
	
	b = ((x-1)/(x+1));
	i = 0;
	lnx = 0.0;
	num = 1.0;
			
	while(i < n)
	{
		c = 0;
		
		while(c < ((2*i)+1))
		{
			num *= b;
			c += 1;	
		}
		
		lnx += ((1.0/((2.0*i)+1.0))*(num));
		
		i += 1;
		num = 1.0;
	}
	
	lnx *= 2;
	
	printf("\n\nEl valor del ln(x) para %d iteraciones es: %f\n\n", n, lnx);
	
	system("PAUSE");
		
	return 0;
}
