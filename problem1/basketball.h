#ifndef BASKETBALL_H
#define BASKETBALL_H
#include "deporte.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    Deporte herencia;

    int TiempoExtra;
    
    }Basketball;

Basketball *basketball_new();
Basketball* Basketball_create(Basketball *, int ball, int Foot ,int tiempoextra);
void Destroy(Basketball *);


#endif