#include <stdio.h>
#include <string.h>

typedef struct{
	int precio;
	char nombre[50];
	int niveles;
}videojuego;

int main(){
	videojuego FPS[5];
	FPS[0].precio=1500;
	strcpy(FPS[0].nombre,"Halo Infinite");
	FPS[0].niveles=10;
	
	printf("El videojuego es llamado: %s\n",FPS[0].nombre);
	printf("El costo del videojuego es de %c%i\n",36,FPS[0].precio);
	printf("Ademas cuenta con %i niveles\n\n",FPS[0].niveles);
	
	scanf("%i",&FPS[0].precio);
	printf("El costo del videojuego es de %c%i\n",36,FPS[0].precio);
	
}
