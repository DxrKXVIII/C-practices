#include <stdio.h>
int main()
{
int num = 0;
printf("Ingrese un numero entero\n");
scanf(" %i", &num);

if (num > 0)
{
printf("El numero es positivo\n");
	if (num % 2 == 0)
	{
	printf("El numero es par\n");
	}
	else
	{
	printf("El numero es impar\n");
	}
}

else if (num == 0)
{
printf("El numero es 0\n");
}

else
{
printf("El numero es negativo\n");
}

return 0;
}
