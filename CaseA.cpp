#ifndef CASEA
#define CASEA

void mostrar_excursiones(Excursion datos) {
	FILE *archivo;
	char linea[300];

	archivo = fopen("excursiones1.txt", "r");

	if (archivo == NULL) {
		printf("No se pudo abrir el archivo excursiones1.txt\n");
		return;
	}

	while (fgets(linea, sizeof(linea), archivo) != NULL) {
		printf("%s", linea);
	}

	fclose(archivo);
}
#endif
