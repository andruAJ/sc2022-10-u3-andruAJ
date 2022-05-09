#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include "futbol.h"

void __narracion(void *this)
{
	Deporte *deporte = (Deporte *)this;
	printf("Pardo le pone el pase a Pons, y es ¡Gooooooooooooool!");

}

Futbol *futboll_new(){return (Futbol *)malloc(sizeof(Futbol));}

Futbol* Futbol_create(Futbol * this, int balon, int pie, int jugadores)
{
    Futbol* this = (Futbol*) malloc(sizeof(*this));

	Deporte_create((Deporte *)this, balon, pie);
	this->jugadores = jugadores;
	this->destroy = _destroy;
    

    return EXIT_SUCCESS;
}

static void _destroy(Futbol* this)
{

	if (this != NULL){
		free(this);
		this = NULL;
	}
}