#ifndef EJERCICIO12__H
#define EJERCICIO12__H
#define MAX_LONG 100
#define MSJ_INGRESO_COMPONENTES1 "Ingrese las componentes del primer vector"
#define MSJ_INGRESO_COMPONENTES2 "Ingrese las componentes del segundo vector"
#define MSJ_INGRESO_DIMENSION "Ingrese la dimension de los vectores"
#define MSJ_SALIDA "Ahora las componentes del primer vector son:"
#define MSJ_SALIDA_2 "Las componentes del segundo vector, las cuales deben mantenerse constantes, son:"
#include "definiciones.h"

status_t veccpy(double * dest, size_t ldest, const double * orig, size_t lorig);

#endif
