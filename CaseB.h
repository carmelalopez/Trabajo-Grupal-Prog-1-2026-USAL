
#ifndef CASEB
#define CASEB
#include "Inicio_Estructura.h"

void disponibilidad(Excursion *datos) {

	printf("Ingrese la fecha actual (dd/mm): ");  // el usuario ingresa la fecha actual para poder comparar con las fechas de las excursiones
	scanf("%s", datos->fecha_actual);

	int dia, mes;
	if (sscanf(datos->fecha_actual, "%d/%d", &dia, &mes) != 2) {  // se valida que el formato de la fecha ingresada sea correcto
		printf("Error: Formato de fecha incorrecto. Debe ser dd/mm.\n");
		return;
	}

	FILE* archivo = fopen("excursiones1.txt", "r");  // se abre el archivo de excursiones para leer las fechas disponibles
	FILE* archivo_disponible = fopen("fechas_disponibles.txt", "w"); // se abre el archivo de fechas disponibles para escribir las fechas que estan disponibles
	FILE* archivo_no_disponible = fopen("fechas_no_disponibles.txt", "w"); // se abre el archivo de fechas no disponibles para escribir las fechas que no estan disponibles

	if (archivo == NULL || archivo_disponible == NULL || archivo_no_disponible == NULL) { // se valida que los archivos se hayan abierto correctamente
		printf("Error: No se pudo abrir uno o varios archivos.\n");
		if (archivo) fclose(archivo);
		if (archivo_disponible) fclose(archivo_disponible);
		if (archivo_no_disponible) fclose(archivo_no_disponible);

		return;

	}

	int dia_archivo, mes_archivo;  // se declaran las variables para almacenar las fechas leidas del archivo
	char dm;  // se declara la variable para leer los caracteres del archivo

		printf("DISPONIBILIDAD DE FECHAS");

		while ((dm = fgetc(archivo)) != EOF) { // se lee el archivo caracter por caracter hasta llegar al final del archivo
			if (dm == '-') { // se valida que el caracter leido sea un guion, ya que las fechas estan precedidas por un guion en el archivo
				if (fscanf(archivo, "%d/%d", &dia_archivo, &mes_archivo) == 2) { // se lee la fecha del archivo y se valida que se haya leido correctamente
					printf("Fecha [%02d/%02d]\n ", dia_archivo, mes_archivo);

					if (mes < mes_archivo || (mes == mes_archivo && dia < dia_archivo)) { // se compara la fecha ingresada por el usuario con la fecha leida del archivo
						printf("Disponible\n");
						fprintf(archivo_disponible, "%02d/%02d\n", dia_archivo, mes_archivo);
						datos->disponibilidad = true; // si la fecha ingresada por el usuario es menor a la fecha leida del archivo, se considera que la fecha esta disponible
					}
					else if (mes > mes_archivo || (mes == mes_archivo && dia > dia_archivo)) { // si la fecha ingresada por el usuario es mayor a la fecha leida del archivo, se considera que la fecha no esta disponible
						printf("NO Disponible\n");
						fprintf(archivo_no_disponible, "%02d/%02d\n", dia_archivo, mes_archivo);
						datos->disponibilidad = false; // si la fecha ingresada por el usuario es mayor a la fecha leida del archivo, se considera que la fecha no esta disponible
					}
					else {
						printf("Es hoy, reserve los ultimos cupos\n"); // si la fecha ingresada por el usuario es igual a la fecha leida del archivo, se considera que la fecha esta disponible pero es hoy
						fprintf(archivo_disponible, "- %02d/%02d (HOY)\n", dia_archivo, mes_archivo);
						datos->disponibilidad = true; // se considera que la fecha esta disponible pero es hoy
					}
				}
			}
		}

		fclose(archivo);
		fclose(archivo_disponible);
		fclose(archivo_no_disponible);
	}
	
	#endif 
