#include "Inicio_Estructura.h"

int main() {


	Excursion datos;
	do {
		printf("\nMENU PRINCIPAL - EXCURSIONES SUDAFRICA\n");
		printf("(A) Informacion de excursiones.\n");
		printf("(B) Disponibilidad de fechas.\n");
		printf("(C) Sacar presupuesto.\n");
		printf("(D) Salir del menu.\n");

		printf("\nIngresar opcion: );
		fflush(stdin);
		scanf("%c", &datos.opcion_excursion);
		fflush(stdin);
		datos.opcion_excursion = toupper(datos.opcion_excursion);

		switch (datos.opcion_excursion) {

		case 'A': 
			mostrar_excursiones(datos);
			break;
		case 'B': 
			 disponibilidad (&datos);
			break;
		case 'C':
			presupuestoSafari (datos);
			break;
		case 'D': 
			 printf ("Finalizando programa...\n");
			break;

		}
	} while (datos.opcion_excursion != 'D');

	return 0;
}
