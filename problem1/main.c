#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include <basketball.h>
#include <deporte.h>
#include <futbol.h>
#include <ultimate.h>

int main(int argc, char* argv[])
{
    Deporte *deporte = deporte_new();
    Deporte_create(deporte, 0,0);

    Basketball *basketball = basketball_new();
    Basketball_create(basketball, 0, 1, 0);

    Futbol *futbol = futboll_new();
    Futbol_create(futbol, 0, 0, 22);

    Ultimate *ultimate = ultimate_new();
    Ultimate_create(ultimate, 1,1,0);

    narracion(deporte);
    narracion((Deporte *)basketball);
    narracion((Deporte *)futbol);
    narracion((Deporte *)ultimate);

    return EXIT_SUCCESS;
}
