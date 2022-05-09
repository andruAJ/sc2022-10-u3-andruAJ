#ifndef FUTBOL_H
#define FUTBOL_H
#include "deporte.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    Deporte herencia;

    int jugadores;

    void (*destroy)(struct __futbol*);
    
    }Futbol;

Futbol *futboll_new();
Futbol* Futbol_create(Futbol *, int ball, int Foot ,int jugadores);
void Destroy(Futbol *);
#endif