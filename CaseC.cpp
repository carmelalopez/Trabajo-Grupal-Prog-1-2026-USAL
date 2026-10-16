  void presupuestoSafari (Excursion datos){
printf("\nIngrese su presupuesto disponible en USD: ");
    scanf("%f", &datos.presupuesto);

    printf("Ingrese la cantidad de personas: ");
    scanf("%d", &datos.cant_personas);

    printf("\n--- PRESUPUESTO ---\n");

    printf("\nPresupuesto disponible: %.2f USD", datos.presupuesto);
    printf("\nCantidad de personas: %d", datos.cant_personas);

    printf("\n\n---EXCURSIONES QUE PUEDEN REALIZAR---:");

    if (datos.presupuesto >= TODO * datos.cant_personas) {
        printf("\n- Safari de dia completo en vehiculo 4x4");
        printf("\n- Inmersion a jaula con tiburines");
        printf("\n- Avistamiento de ballenas en embarcacion");
    }

 else if (datos.presupuesto >= MEDIO * datos.cant_personas) {
        printf("\n- Inmersion en jaula con tiburones");
        printf("\n- Avistamiento de ballenas en embarcacion");
    } }

   else if (datos.presupuesto >= POCO * datos.cant_personas) {
        printf("\n- Avistamiento de ballenas en embarcacion");
    }
else {
	  	 printf ("No puede realizar ninguna excursion\n");
	  } }

