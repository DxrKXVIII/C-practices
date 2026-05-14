#include <stdio.h>

float intentarAumentarSueldo(float sueldo);




int main()
{
float sueldo = 0;

printf("Ingresar sueldo:\n");
scanf(" %f", &sueldo);

intentarAumentarSueldo(sueldo);

printf("Sueldo real: %f", sueldo);

return 0;
}


float intentarAumentarSueldo(float sueldo)
{
sueldo += sueldo + 1000;
return sueldo;

}
