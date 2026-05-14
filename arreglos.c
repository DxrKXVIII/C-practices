#include <stdio.h>
int main()
{
int arr[5];
int buffer;
printf("Por favor llene este arreglo de numeros enteros:\n");

for (int i = 0; i < 5; i++)
{
printf("\nIngrese el elemento #%i: ", i);
scanf(" %i", &arr[i]);
while ((buffer = getchar()) != '\n' && buffer != EOF);

}

for (int e = 4; e >= 0; e--)
{
printf("\nEl arreglo en la posicion #%i es: %i", e, arr[e]);

}


return 0;
}
