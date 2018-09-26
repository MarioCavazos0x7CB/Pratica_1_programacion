#include <stdio.h>

//Programa para calcular pi^3/32 - MACC

int main()
{
	int i, n;
	float res, exp, s;
	
	do
	{
		system("cls");
		
		printf("Hola!, este programa sirve para calcular el valor de (PI^3)/32:");
		
		printf("\n\nIngrese el numero de iteraciones (mayor o igual a 1 y menores a 200): ");
		scanf("%d", &n);
		
		if(n<1 || n>200)
		{
			printf("\n\nEl numero de iteraciones que ingresaste es invalido, intenta de nuevo!\n\n");
			system("PAUSE");
		}
	
	}while(n<1 || n>200);
	
	s = 1.0;
	i = 1;
	res = 0.0;
	
	do
	{
		exp = (i*i*i)*1.0;
		res += (s/exp);
		s *= -1.0;
		i += 2;
					
	}while (i<=n+1);
	
	printf("\n\nEl valor del (PI^3)/32 para %d iteraciones es: %f\n\n", n, res);
	
	system("PAUSE");
	
	return 0;
}
