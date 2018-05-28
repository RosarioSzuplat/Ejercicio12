#include <stdio.h>
#include <stdlib.h>
#include "ingresar_doubles.h"

status_t ingresar_doubles (double *V, size_t longitud){
	int i;
	char aux [MAX_LONG], *posicion_ptr;
	if(!V) {
		return ST_PUNTERO_NULO;
	}
	for(i = 0; i < longitud; i++){
		if(!(fgets(aux, MAX_STR, stdin))){
			return ST_ERROR_EOF;
		}
		*(V + i) = strtol(aux, &posicion_ptr, 10);
		if(*posicion_ptr != '\0' && *posicion_ptr != '\n') {
			return ST_ERROR_NO_NUMERICO;
		}
	}
	return ST_OK;
}
