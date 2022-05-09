#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include "ultimate.h"

void __narracion(void *this)
{
	Deporte *deporte = (Deporte *)this;
	printf("García lanza un pase al área ¡Giraldo la atrapa y le da la victoria a 11!");

}

Ultimate* Ultimate_create(Ultimate * this, int balon, int pie, int disco)
{
    Ultimate* this = (Ultimate*) malloc(sizeof(*this));

	Deporte_create((Deporte *)this, balon, pie);
	this->Disco = disco;
	this->destroy = _destroy;


    return EXIT_SUCCESS;
}

static void _destroy(Ultimate* this)
{

	if (this != NULL){
		free(this);
		this = NULL;
	}
}