#include <stdio.h>
int main()
{
int num = 0;

printf("Ingrese un numero del 1 al 100, si es negativo el programa termina:\n");

do
{
scanf(" %i", &num);

	if(num > 0 && num <= 100)
	{
		if (num % 5 == 0)
		{
		printf("El numero esta en rango y es multiplo de 5\n");
		}
		else
		{
		printf("El numero esta en rango pero no es multiplo de 5\n");
		}
	}
	else if(num > 100)
	{
	printf("Fuera de rango, muy alto\n");
	}
	else
	{
	printf("Numero negativo detectado, saliendo...");
	return 0;
	}
printf("Ingrese otro numero: \n");

}
while (num >= 0);
}
