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

		switch (datos.opcion_excursion) {

		case 'A': 
			printf("\n------EXCURSIONES EN SUDAFRICA------\n");
			printf("\n---Safari de día completo en vehículo 4x4---\n");
            printf("LUGAR: Parque Nacional Kruger\n");
            printf("AVISTAMIENTOS: Los "Cinco Grandes"\n");
            printf("DURACIÓN: 8 a 10hs\n");
            printf("PRECIO DE SAFARI COMPARTIDO: 170 USD por persona + TARIFA DE CONSERVACIÓN 28 USD por persona\n");
            printf("DISPONIBILIDAD DE FECHAS:\n");
            printf("   14/09\n   18/09\n   12/10\n   16/10\n   02/11\n   06/11\n");

            printf("\n-Avistamiento de ballenas en embarcación-\n");
            printf("LUGAR: Hermanus (Walker Bay, provincia del Cabo Occidental)\n");
            printf("AVISTAMIENTOS: Ballena franca austral y pingüinos africanos.\n");
            printf("DURACIÓN: 2hs\n");
            printf("PRECIO: Adultos 85 USD - Niños 40 USD\n");
            printf("DISPONIBILIDAD DE FECHAS:\n");
            printf("   09/06\n   24/06\n   07/07\n   22/07\n   10/08\n   31/08\n");

            printf("\n-Inmersión en jaula con tiburones (Shark Cage Diving)-\n");
            printf("LUGAR: Gansbaai / Puerto de Kleinbaai\n");
            printf("AVISTAMIENTOS: Tiburón cobrizo y tiburón blanco\n");
            printf("DURACIÓN: 3 a 4hs\n");
            printf("PRECIO: Ticket de inmersión por persona 150 USD\n");
            printf("DISPONIBILIDAD DE FECHAS:\n");
            printf("   16/02\n   20/02\n   09/03\n   13/03\n   01/04\n   10/04\n");
			break;
		case 'B': 
			break;
		case 'C':
			break;
		case 'D': 
			break;

		}
	} while (datos.opcion_excursion != 'C');

	return 0;
}
