/*
How did I do all these? For all these programs,
I asked an AI to give me these practices. 
No code, only instructions for me to create my own programs. 
After each program, I passed it to the AI, and it gave me feedback. 
In all the tries, I got mostly or all the program right. 
I did all of the logic, but I still have mistakes when typing or in syntax. 
Actually, this last program, the wi-fi was too slow that I could not even talk anymore to the AI. I
n my first try, I got 12 mistakes and it did not compile. I was going to give up but, 
I continued, and experimented until one mistake disappeared, then another, and so on. 
After an hour, the program was ready, 
I broke my head many times but, it works now and I did it all by myself.
*/
#include <stdio.h>
#include <string.h>
struct proyecto
{
char nombre[50];
int bpm;
int terminado;
};

void cargarProyecto(struct proyecto *p, int i);
void mostrarLista(struct proyecto lista[]);
float promedioBPM(struct proyecto lista[]);

int main()
{
struct proyecto misTracks[4];
float promedio = 0;

printf("--Programa de carga de discografia (4 tracks)--\n");


for(int i = 0; i < 4; i++)
{
cargarProyecto(&misTracks[i], i);
}

mostrarLista(misTracks);
promedio = promedioBPM(misTracks);
printf("\nEl promedio de BPM de tu discografia es: %.2f\n", promedio);
return 0;
}



void cargarProyecto(struct proyecto *p, int i)
{
	printf("\nIngrese el nombre del proyecto: \n");
	fgets (p->nombre, 50, stdin);
	p->nombre[strcspn(p->nombre, "\n")] = 0;
	printf("\nBien, ahora el bpm: \n");
	scanf(" %i", &p->bpm);
	printf("\nBien, finalmente si esta terminado (1 - si, 0 -no): \n");
	scanf(" %i", &p->terminado);
	while(getchar() != '\n');
		if (i < 3)
		{
		printf("\nSiguiente proyecto: \n");
		}
}

void mostrarLista(struct proyecto lista[])
{
	for (int i = 0; i < 4; i++)
	{
	printf ("\nProyecto numero #%i \n", i);
	printf("Nombre: %s \n", lista[i].nombre);
	printf("Bpm: %i \n", lista[i].bpm);
	printf("Terminado: ");
		if (lista[i].terminado)
		{
		printf("Si");
		}
		else
		{
		printf("No");
		}
	printf("\n");
}
}

float promedioBPM(struct proyecto lista[])
{
float promedio = 0;
	for (int i = 0; i < 4; i++)
	{
	promedio += lista[i].bpm;
	}
	promedio /= 4;

return promedio;
}
