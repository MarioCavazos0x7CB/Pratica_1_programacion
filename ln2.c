#include <stdio.h>

//Ejercicio del ln(2) - MACC

int main ()
{
	int i, n;
	float ln2, s;
	
	do
	{
		system("cls");
		
		printf("Hola!, este programa sirve para calcular el valor de ln(2):");
		
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
	ln2 = 0.0;
	
	do
	{
		ln2 += (s/(i+1));
		s *= -1.0;
		i += 1;
			
	}while (i<n);
	
	printf("\n\nEl valor del ln(2) para %d iteraciones es: %f\n\n", n, ln2);
	
	system("PAUSE");
		
	return 0;
}
