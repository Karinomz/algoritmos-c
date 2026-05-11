#include <stdio.h>

int main() {
    int i;

    int legajo;
    char categoria;
    float km;
    float peaje;
    float comida;
    float anticipo;

    float valorkilometro;

    for(i = 1; i <= 6; i++) {
        printf("\n============================================\n");
        printf("Empleado numero %d \n",i);
        printf("============================================\n");

        // 1.
        printf("1. Codigo de Legajo (valor entero)");
        scanf("%d",&legajo);
        // 2.
        printf("2. Categoria del empleado (valor caracter: 'v' =Vendedor, 'j'=Jefe Comercial, 'g'=Gerente de Producto)");
        scanf(" %c",&categoria);
        // 3.
        printf("3. Kilometros recorridos (valor real).");
        scanf(" %f",&km);
        // 4.
        printf("4. Gastos de Peaje (valor real).");
        scanf(" %f",&peaje);
        // 5.
        printf("5. Gastos de Comidas (valor real).");
        scanf(" %f",&comida);
        // 6.
        if (categoria=='v'){
            printf("6. Anticipo (valor real) Ingresar este monto solo si el empleado es de categoria 'v (Vendedor) .");
            scanf(" %f",&anticipo);  
        }
    //^ for de 6 empleados ^
    }

    return 0;
}