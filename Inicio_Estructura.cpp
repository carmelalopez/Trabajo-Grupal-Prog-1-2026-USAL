#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#define FECHA 7


typedef struct {
	char fecha_actual[FECHA];
	char opcion_excursion; //elige A B o C segun la excursion que desea realizar
	float presupuesto;  // presupuesto del usuario
	int cant_personas;  // cantidad de personas para realizar un calculo de presupuesto
	bool disponibilidad;  // disponibilidad para las fechas va de la mano de fecha de actual
} Excursion;

void mostrar_excursiones ();
void disponibilidad ();
void presupuestoSafari ();
