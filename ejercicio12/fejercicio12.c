#include <stdio.h>
#include <stdlib.h>
#include "ejercicio12.h"
#include "definiciones.h"

status_t veccpy(double * dest, size_t ldest, const double * orig, size_t lorig) {
	int i;
	if(!dest || !orig) {
		return ST_PUNTERO_NULO;
	}
	if(ldest > MAX_LONG || lorig > MAX_LONG || ldest < 0 || lorig < 0) {
		return ST_ERROR_LONG;
	}
	for (i = 0; i < lorig; i++) {
		*dest ++ = *orig++;
	}
	return ST_OK;
}
