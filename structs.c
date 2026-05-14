#include <stdio.h>
#include <string.h>
struct cancion
{
char nombre[50];
int bpm;
float duracion;
};

int main()
{
struct cancion c1;
printf("Bienvenido DxrKXVIII, ingrese el nombre de su nueva cancion: \n");
fgets(c1.nombre, 50, stdin);
c1.nombre[strcspn(c1.nombre, "\n")] = 0;
printf("\nBien, ahora ingrese el bpm: \n");
scanf(" %i", &c1.bpm);
printf("\nBien, finalmente la duracion: \n");
scanf(" %f", &c1.duracion);
printf("\n Los datos de la cancion son: \n\n Nombre: %s \n Bpm: %i \n Duracion: %f \n", c1.nombre, c1.bpm, c1.duracion);

return 0;
}
