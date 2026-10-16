  void presupuestoSafari (){
printf("\nIngrese su presupuesto disponible en USD: ");
    scanf("%f", &datos.presupuesto);

    printf("Ingrese la cantidad de personas: ");
    scanf("%d", &datos.cant_personas);

    printf("\n--- PRESUPUESTO ---\n");

    printf("\nPresupuesto disponible: %.2f USD", datos.presupuesto);
    printf("\nCantidad de personas: %d", datos.cant_personas);

    printf("\n\n---EXCURSIONES QUE PUEDEN REALIZAR---:");

    if (datos.presupuesto >= 198 * datos.cant_personas) {
        printf("\n- Safari de dia completo en vehiculo 4x4");
        printf("\n- Inmersion a jaula con tiburines");
        printf("\n- Avistamiento de ballenas en embarcacion");
    }

    if (datos.presupuesto >= 150 * datos.cant_personas) {
        printf("\n- Inmersion en jaula con tiburones");
        printf("\n- Avistamiento de ballenas en embarcacion");
    } }

    if (datos.presupuesto >= 85 * datos.cant_personas) {
        printf("\n- Avistamiento de ballenas en embarcacion");
    }

