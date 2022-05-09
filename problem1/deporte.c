#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include "deporte.h"

Deporte *deporte_new(){return malloc(sizeof(Deporte));}



Deporte* Deporte_create(Deporte * this, int balon, int pie)
{
    Deporte* this = (Deporte*) malloc(sizeof(*this));

    this->balon=  balon;
    this->pie = pie;

    return EXIT_SUCCESS;
}

void narracion(Deporte *this) 
{
	this->narracionD(this);
    
}

static void _destroy(Deporte* this)
{

	if (this != NULL){
		free(this);
		this = NULL;
	}
}