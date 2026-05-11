#include <stdio.h>

float calcularViatico(float km, float peaje, float comida) {
    float kmValorizados;

    if (km <= 2000) {
        kmValorizados = km * 10;
    } else {
        kmValorizados = (2000 * 10) + ((km - 2000) * 5);
    }

    return kmValorizados + peaje + comida;
}

void mostrarCantidadVendedores(int cantidad) {
    printf("\n============================================\n");
    printf("Vendedores que recorrieron mas de 2000 km: %d\n", cantidad);
    printf("============================================\n");
}

int main() {
    int i;
    int legajo;
    char categoria;

    float km;
    float peaje;
    float comida;
    float anticipo;
    float montoViatico;
    float diferencia;

    int vendedoresMas2000 = 0;

    for (i = 1; i <= 6; i++) {
        printf("\n============================================\n");
        printf("              EMPLEADO %d\n", i);
        printf("============================================\n");

        printf("Ingrese codigo de legajo: ");
        scanf("%d", &legajo);

        printf("Ingrese categoria ('v' vendedor, 'j' jefe comercial, 'g' gerente): ");
        scanf(" %c", &categoria);

        printf("Ingrese kilometros recorridos: ");
        scanf("%f", &km);

        printf("Ingrese gastos de peaje: ");
        scanf("%f", &peaje);

        printf("Ingrese gastos de comidas: ");
        scanf("%f", &comida);

        anticipo = 0;

        switch (categoria) {
            case 'v':
            case 'V':
                printf("Ingrese anticipo: ");
                scanf("%f", &anticipo);

                if (km > 2000) {
                    vendedoresMas2000++;
                }
                break;

            case 'j':
            case 'J':
                anticipo = 0;
                break;

            case 'g':
            case 'G':
                anticipo = 0;
                break;

            default:
                printf("Categoria invalida. No se cargara anticipo.\n");
                anticipo = 0;
                break;
        }

        montoViatico = calcularViatico(km, peaje, comida);
        diferencia = montoViatico - anticipo;

        printf("\n------------- RESUMEN DEL EMPLEADO -------------\n");
        printf("Legajo:\t\t\t%d\n", legajo);
        printf("Categoria:\t\t%c\n", categoria);
        printf("Kilometros:\t\t%.2f km\n", km);
        printf("Gastos de peaje:\t$%.2f\n", peaje);
        printf("Gastos de comidas:\t$%.2f\n", comida);
        printf("Anticipo:\t\t$%.2f\n", anticipo);
        printf("Monto del viatico:\t$%.2f\n", montoViatico);
        printf("Diferencia:\t\t$%.2f\n", diferencia);

        if (diferencia >= 0) {
            printf("Resultado:\t\tImporte a pagar por la empresa\n");
        } else {
            printf("Resultado:\t\tImporte a devolver por el empleado\n");
        }
    }

    mostrarCantidadVendedores(vendedoresMas2000);

    return 0;
}