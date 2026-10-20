#ifndef CASEC
#define CASEC
#include "Inicio_Estructura.h"

  void presupuestoSafari (Excursion datos){

printf("==================================================\n");
printf("             CONSULTA DE PRESUPUESTO\n");
printf("==================================================\n");
printf("\nIngrese su presupuesto disponible en USD: ");
    scanf("%f", &datos.presupuesto);

    printf("Ingrese la cantidad de personas: ");
    scanf("%d", &datos.cant_personas);

    printf("\n--------------------------------------------------\n");
    printf("              RESUMEN DEL PRESUPUESTO\n");
    printf("--------------------------------------------------\n");

    printf("\nPresupuesto disponible: %.2f USD", datos.presupuesto);
    printf("\nCantidad de personas: %d", datos.cant_personas);

    printf("\n--------------------------------------------------\n");
    printf("          EXCURSIONES SEGUN SU PRESUPUESTO\n");
    printf("--------------------------------------------------\n");;

    if ((datos.presupuesto* datos.cant_personas) >= 198) {
        printf("\n- Safari de dia completo en vehiculo 4x4\n");
        printf("\n- Inmersion a jaula con tiburines\n");
        printf("\n- Avistamiento de ballenas en embarcacion\n");
    }

    else if ((datos.presupuesto* datos.cant_personas) >= 150) {
        printf("\n- Inmersion en jaula con tiburones\n");
        printf("\n- Avistamiento de ballenas en embarcacion\n");
    } 

     else if ((datos.presupuesto* datos.cant_personas) >= 85) {
        printf("\n- Avistamiento de ballenas en embarcacion\n");
    }
	  else {
	  	 printf ("No puede realizar ninguna excursion\n");
	  } }
#endif


