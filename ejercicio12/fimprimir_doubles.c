#include <stdio.h>
#include "imprimir_doubles.h"
#include "errores.h"

void imprimir_doubles (double *V, size_t longitud) {
	int i;
	if (!V){
		fprintf(stderr, "%s: %s\n", MSJ_ERROR, MSJ_PUNTERO_NULO);
	}
	for (i = 0; i < longitud; i++) {
		printf("%f\n", *(V+i));
	}
}
