#include <stdio.h>

//Programa para calcular pi/4 - MACC

int main()
{
	int i, n;
	float res, s;
	
	do
	{
		system("cls");
		
		printf("Hola!, este programa sirve para calcular el valor de PI/4:");
		
		printf("\n\nIngrese el numero de iteraciones (mayor o igual a 1): ");
		scanf("%d", &n);
		
		if(n<1)
		{
			printf("\n\nEl numero de iteraciones que ingresaste es invalido, intenta de nuevo!\n\n");
			system("PAUSE");
		}
	
	}while(n<1);
	
	s = 1.0;
	i = 0;
	res = 0.0;
	
	do
	{
		res += (s/((2*i)+1));
		s *= -1.0;
		i += 1;
			
	}while (i<=n);
	
	printf("\n\nEl valor del PI/4 para %d iteraciones es: %f\n\n", n, res);
	
	system("PAUSE");
	
	return 0;
}
