#include <stdio.h>

//Ejercicio del número de Bernoulli (Bn) - MACC

int main ()
{
	int n, c, exp1;
	float Bn, i, x, b1, b2, pi, dos, factorial, den;
		
	do
	{		
		system("cls");
			
		printf("Hola!, este programa sirve para calcular el numero de Bernoulli (Bn):");
		
		printf("\n\nIngrese el valor del subindice entero n (mayor o igual a 0): ");
		scanf("%f", &x);
		
		printf("\n\nIngrese el numero de iteraciones (mayor o igual a 1): ");
		scanf("%d", &n);
		
		if(n<1)
		{
			printf("\n\nEl numero de iteraciones que ingresaste es invalido, intenta de nuevo!\n\n");
			system("PAUSE");
		}
		
		else if(x<0)
		{
			printf("\n\nEl numero del subindice n es invalido, intenta de nuevo!\n\n");
			system("PAUSE");
		}
	
	}while(n<1 || x<0);
	
	exp1 = (2*x);
	i = 1.0;
	factorial = 1.0;
	den = 1.0;
	b2 = 0.0;
	pi = 1.0;
	dos = 1.0;
	
	// Esto nos sirve para la sumatoria:
	if(x == 0)
	{
		Bn = 0;
	}
	
	else
	{
		while(i <= n)
		{
			c = 0;
			
			if (i == 1.0)
			{
				while (c < exp1)
				{
					pi *= 3.141592;
					c += 1;
				}
				
				while (i <= exp1)
				{
					factorial *= i;
					i += 1;
				}
				
				c -= 1;
				
				while (c != 0)
				{
					dos *= 2;
					c -= 1;
				}
				
				i = 1.0;
			}
							
			while(c < exp1)
			{
				den *= i;
				c += 1;
			}
			
			b2 += (1/den);
					
			den = 1.0;
			i += 1;
		}
		
		b1 = ((factorial)/(dos*pi));
		Bn = b1 * b2;	
	}

	//printf("\n\nFactorial%f\t Dos%f\t Pi%f\t b1%f\t b2%f\n\n", factorial, dos, pi, b1, b2);
	printf("\n\nEl valor para B%f con %d iteraciones es: %f\n\n", x, n, Bn);
	
	system("PAUSE");
		
	return 0;
}


