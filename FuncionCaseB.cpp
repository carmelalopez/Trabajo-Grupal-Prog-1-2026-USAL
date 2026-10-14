void disponibilidad() {

	Excursion datos;
	printf("Ingrese la fecha actual (dd/mm): ");
	scanf("%s", datos.fecha_actual);

      FILE *archivo = fopen("excursiones.txt", "r");
    if (archivo == NULL) {
        printf("Error: No se pudo abrir el archivo 'excursiones.txt'.\n");

