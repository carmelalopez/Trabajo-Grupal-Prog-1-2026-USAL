#include <stdio.h>
#define TAM 15

typedef struct {
	char fecha_actual[TAM];
	char opcion_excursion; //elige A B o C segun la excursion que desea realizar
	float presupuesto;  // presupuesto del usuario
	int nro_eleccion;  // son 6 opciones del menu
	bool disponibilidad;  // disponibilidad para las fechas va de la mano de fecha de actual
    
} Excursion;

