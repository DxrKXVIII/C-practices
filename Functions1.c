#include <stdio.h>

int esPar(int num);


int main()
{
int num;

printf("Ingrse un numero para saber si es par o no:\n");
scanf(" %i", &num);

	if (esPar(num))
	{
	printf("Es par");
	}
	else
	{
	printf("Es impar");
	}



return 0;
}


int esPar(int num)
{
	if (num % 2 == 0)
	{
	return 1;
	}
	else
	{
	return 0;
	}

}
