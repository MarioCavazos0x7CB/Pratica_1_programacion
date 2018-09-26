#include <stdio.h>

//Ejercicio del número de Euler (En) - MACC

int main ()
{
	int n, c, exp1;
	float En, s, i, x, b1, b2, pi, dos, factorial, den, impar;
		
	do
	{		
		system("cls");
			
		printf("Hola!, este programa sirve para calcular el numero de Euler (En):");
		
		printf("\n\nIngrese el valor del subindice n: ");
		scanf("%f", &x);
		
		printf("\n\nIngrese el numero de iteraciones (mayor o igual a 1): ");
		scanf("%d", &n);
		
		if(n<1)
		{
			printf("\n\nEl numero de iteraciones que ingresaste es invalido, intenta de nuevo!\n\n");
			system("PAUSE");
		}
	
	}while(n<1);
	
	exp1 = (2*x);
	i = 1.0;
	factorial = 1.0;
	den = 1.0;
	b2 = 0.0;
	pi = 1.0;
	dos = 1.0;
	s = 1.0;
	impar = 0.0;
	
	// Esto nos sirve para la sumatoria:
	while(i <= n)
	{
		c = 0;
		
		if (i == 1.0)
		{
			while (c < (exp1 + 1))
			{
				pi *= 3.141592;
				c += 1;
			}
			
			while (i <= exp1)
			{
				factorial *= i;
				i += 1;
			}
			
			c += 1;
			
			while (c != 0)
			{
				dos *= 2;
				c -= 1;
			}
			
			i = 1.0;
		}
						
		while(c < (exp1 + 1))
		{
			den *= ((2*impar)+1);
			c += 1;
		}
		
		b2 += (s/den);
				
		den = 1.0;
		s *= -1.0;
		i += 1;
		impar += 1;
	}
	
	b1 = ((factorial * dos)/(pi));
	En = b1 * b2;	

	printf("\n\nFactorial=%f\t Dos=%f\t Pi=%f\t b1=%f\t b2=%f\n\n", factorial, dos, pi, b1, b2);
	printf("\n\nEl valor para E%f con %d iteraciones es: %f\n\n", x, n, En);
	
	system("PAUSE");
		
	return 0;
}


