#include <stdio.h>
#include <stdlib.h>
#include "errores.h"
#include "definiciones.h"
#include "ejercicio12.h"
#include "imprimir_doubles.h"
#include "ingresar_doubles.h"

int main (void) {
	ddouble *vector1_ptr, *vector2_ptr;
	double vector1 [MAX_LONG], vector2 [MAX_LONG];
	int longitud;
	char aux [MAX_LONG], *posicion_ptr;
	status_t validacion;
	vector1_ptr = vector1;
	vector2_ptr = vector2;
	
	puts(MSJ_INGRESO_DIMENSION);
	if((fgets (aux, MAX_LONG, stdin)) == NULL) {
		fprintf(stderr, "%s: %s\n", MSJ_ERROR, MSJ_EOF);
		return EXIT_FAILURE;
	}
	longitud = strtol (aux, &posicion_ptr, 10);
	if(*posicion_ptr != '\n' && *posicion_ptr != '\0') {
		fprintf(stderr, "%s: %s\n", MSJ_ERROR, MSJ_CARACTER_INVALIDO);
		return EXIT_FAILURE;
	}
	puts(MSJ_INGRESO_COMPONENTES1);
	ingresar_doubles(vector1_ptr, longitud);
	
	puts(MSJ_INGRESO_COMPONENTES2);
	ingresar_doubles(vector2_ptr, longitud);
	
	if( (validacion = (veccpy(vector1_ptr, longitud, vector2_ptr, longitud))) == ST_PUNTERO_NULO){
		fprintf(stderr, "%s: %s\n", MSJ_ERROR, MSJ_EOF);
		return EXIT_FAILURE;
	}
	if(validacion == ST_ERROR_LONG) {
		fprintf(stderr, "%s: %s\n", MSJ_ERROR, MSJ_DIMENSION);
		return EXIT_FAILURE;
	}
	puts(MSJ_SALIDA);
	imprimir_doubles(vector1_ptr, longitud);
	puts(MSJ_SALIDA_2);
	imprimir_doubles(vector2_ptr, longitud);
	
	
	return EXIT_SUCCESS;
}
