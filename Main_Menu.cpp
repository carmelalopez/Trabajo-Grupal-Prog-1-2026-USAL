int main() {


	Excursion datos;
	do {
		printf("MENU PRINCIPAL - EXCURSIONES SUDAFRICA");

		switch (datos.opcion_excursion) {

		case 'A': printf("(1)Mostrar información sobre las excursiones.");
			break;
		case 'B': printf("(2) Averiguar la disponibilidad de las fechas.");
			break;
		case 'C': printf("(3) Nos adaptamos a su presupuesto!");
			break;
		case 'D': printf("(4) Gracias por visitarnos.Vuelva pronto!");
			break;

		}
	} while (datos.opcion_excursion != 'C');

	return 0;
}
