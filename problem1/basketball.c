#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include "basketball.h"

void __narracion(void *this)
{
	Deporte *deporte = (Deporte *)this;
	printf("La pelota le llega a Kobeeee, ¡Oh, tres puntos para los Lakers!");

}

Basketball *basketball_new(){return (Basketball *)malloc(sizeof(Basketball));}

Basketball* Basketball_create(Basketball * this, int balon, int pie, int tiempoExtra)
{
    Basketball* this = (Basketball*) malloc(sizeof(Basketball));

	Deporte_create((Deporte *)this, balon, pie);
	this->TiempoExtra = tiempoExtra;
	
    

    return EXIT_SUCCESS;
}

static void _destroy(Basketball* this)
{

	if (this != NULL){
		free(this);
		this = NULL;
	}
}
