#ifndef ULTIMATE_H
#define ULTIMATE_H
#include "deporte.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    Deporte herencia;

    int Disco;

    void (*destroy)(struct __ultimate*);
    
    }Ultimate;

Ultimate *ultimate_new();
Ultimate* Ultimate_create(Ultimate *, int ball, int Foot ,int Disco);
void Destroy(Ultimate *);
#endif