#include <stdio.h>
const float  gravedad = 9.81;
int main()
{
float masa = 0;
printf("Ingrese una masa para calcularla\n");
scanf(" %f", &masa);
masa = masa * gravedad;
printf("EL reultado en newtons es: %f", masa);
return 0;
}
