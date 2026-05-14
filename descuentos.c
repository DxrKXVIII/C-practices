#include <stdio.h>
#define IVA 0.16
int main()
{
float precio = 0;
printf("Ingrese el precio del producto\n");
scanf(" %f", &precio);

precio = precio * (1 + IVA);

if (precio > 1000)
{
precio = precio * 0.9;
printf("Por ser mayor a 1000, se le aplica descuento del 10%\n");
}
printf("Ya aplicado el IVA de %f%%,eL precio final es: $%f", IVA, precio);


return 0;
}
