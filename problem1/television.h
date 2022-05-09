#ifndef TELEVISION_H
#define TELEVISION_H
#include "deporte.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct {

    Deporte *deporte_televisado();

    void (*destroy)(struct __television*);
    
    }Television;
#endif 