int main() {


	Excursion datos;
	do {
		printf("MENU PRINCIPAL - EXCURSIONES SUDAFRICA");

		switch (datos.opcion_excursio) {

		case 1: printf("(1)Mostrar información sobre las excursiones.");
			break;
		case 2: printf("(2) Averiguar la disponibilidad de las fechas.");
			break;
		case 3: printf("(3) Nos adaptamos a su presupuesto!");
			break;
		case 4: printf("(4) Gracias por visitarnos.Vuelva pronto!");
			break;

		}
	} while (datos.opcion_excursion != 4);

	return 0;
}
