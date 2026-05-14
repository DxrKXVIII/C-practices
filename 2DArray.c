#include <stdio.h>
int main()
{
int matriz[3][3];
int suma = 0;
for (int x = 0; x < 3; x++)
{
	for(int y = 0; y < 3; y++)
	{
	printf("\nIngrese el elemento [%i] [%i]", x, y);
	scanf(" %i", &matriz[x][y]);
		if (x == y)
		{
		suma += matriz[x][y];
		}
	}

}

printf("Matriz completa: \n");

for (int x = 0; x < 3; x++)
{
	for(int y = 0; y < 3; y++)
	{
	printf(" %i", matriz[x][y]);
	}
printf("\n");
}

printf("\nDiagonal: \n");

for (int x = 0; x < 3; x++)
{
	for (int  y = 0; y < 3; y++)
	{
		if (x == y)
		{
		printf(" %i", matriz[x][y]);
		}
		else
		{
		printf(" x ");
		}
	}
printf ("\n");
}

printf("La suma de los elementos de la diagonal es: %i", suma);
return 0;
}
