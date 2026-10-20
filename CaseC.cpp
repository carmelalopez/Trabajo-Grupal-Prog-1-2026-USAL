#ifndef CASEC
#define CASEC

void presupuestoSafari (Excursion datos){
  void presupuestoSafari (Excursion datos){
printf("\nIngrese su presupuesto disponible en USD: ");
    scanf("%f", &datos.presupuesto);

    printf("Ingrese la cantidad de personas: ");
    scanf("%d", &datos.cant_personas);

    printf("\n--- PRESUPUESTO ---\n");

    printf("\nPresupuesto disponible: %.2f USD", datos.presupuesto);
    printf("\nCantidad de personas: %d", datos.cant_personas);

    printf("\n\n--- EXCURSIONES QUE PUEDEN REALIZAR ---\n:");

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
    if ((datos.presupuesto* datos.cant_personas) >= TODO) {
        printf("\n- Safari de dia completo en vehiculo 4x4");
        printf("\n- Inmersion a jaula con tiburines");
        printf("\n- Avistamiento de ballenas en embarcacion");
    }

 else if ((datos.presupuesto * datos.cant_personas) >= MEDIO) {
        printf("\n- Inmersion en jaula con tiburones");
        printf("\n- Avistamiento de ballenas en embarcacion");
    } }

   else if ((datos.presupuesto* datos.cant_personas) >= POCO) {
        printf("\n- Avistamiento de ballenas en embarcacion");
    }
else {
	  	 printf ("No puede realizar ninguna excursion\n");
	  } }

