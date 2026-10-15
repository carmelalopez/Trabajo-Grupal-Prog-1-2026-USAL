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
		datos.opcion_excursion = toupper(datos.opcion_excursion);

		switch (datos.opcion_excursion) {

		case 'A': 
			mostrar_excursiones();
			break;
		case 'B': 
			 disponibilidad ();
			break;
		case 'C':
			break;
		case 'D': 
			break;

		}
	} while (datos.opcion_excursion != 'D');

	return 0;
}
