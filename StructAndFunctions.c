#include <stdio.h>
#include <string.h>

struct cancion
{
char nombre[50];
int bpm;
float duracion;
};

float promedioDuracion(float *dur1, float *dur2, float *dur3);




int main()
{
struct cancion miEP[3];
float promedio;

printf("Registro de EP de DxrKXVIII\n");

for(int i = 0; i < 3; i++)
{
printf("Ingrese el nombre de la cancion #%i: \n", i);
fgets(miEP[i].nombre, 50, stdin);
miEP[i].nombre[(strcspn(miEP[i].nombre, "\n"))] = 0;
printf("\nAhora ingrese el bpm: \n");
scanf(" %i", &miEP[i].bpm);
printf("\nAhora la duracion: \n");
scanf(" %f", &miEP[i].duracion);
printf("\n");
while (getchar() != '\n');
}

promedio = promedioDuracion(&miEP[0].duracion, &miEP[1].duracion, &miEP[2].duracion);


for (int e = 0; e < 3; e++)
{
printf("\n Datos de la cancion #%i; \n", e);
printf("Nombre: %s \n", miEP[e].nombre);
printf ("Bpm: %i \n", miEP[e].bpm);
printf("Duracion: %f \n", miEP[e].duracion);
}

printf("El promedio de duraciones es: %f", promedio);
return 0;
}

float promedioDuracion(float *dur1, float *dur2, float *dur3)
{
float  promedio = (*dur1 + *dur2 + *dur3) / 3;
return promedio;
}
