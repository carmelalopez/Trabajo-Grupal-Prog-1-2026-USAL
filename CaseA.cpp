void mostrar_excursiones() {
	FILE *archivo;
	char linea[300];

	archivo = fopen("excursiones.txt", "r");

	if (archivo == NULL) {
		printf("No se pudo abrir el archivo excursiones.txt\n");
		return;
	}

	while (fgets(linea, sizeof(linea), archivo) != NULL) {
		printf("%s", linea);
	}

	fclose(archivo);
}