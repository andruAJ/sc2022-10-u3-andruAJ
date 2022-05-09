#ifndef DEPORTE_H
#define DEPORTE_H
#include <stdio.h>
#include <stdlib.h>

typedef void (*narracion)(void *);

typedef struct {
    
    int balon;

    int pie;

    void (*destroy)(struct __deporte*);

    narracion narracionD;
}Deporte;

Deporte *deporte_new();
Deporte* Deporte_create(Deporte *, int ball, int Foot);
void Destroy(Deporte *);
void Narracion(Deporte *);


#endif