#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "funciones.h"

#define TAM 5

int main()
{
    int salir = 0;
    eEmpleado gente[TAM];

    inicializarEmpleados(gente, TAM);

    do
    {
        switch(menu())
        {

        case 1:
            altaEmpleado(gente, TAM);
            system("pause");
            break;
        case 2:
            bajaEmpleado(gente, TAM);
            system("pause");
            break;
        case 3:
            modificar(gente, TAM);
            system("pause");
            break;
        case 4:
            mostrarEmpleados(gente, TAM);
            system("pause");
            break;
        case 5:
            ordenar(gente, TAM);
            //mostrarEmpleados(gente, TAM);
            system("pause");
            break;
        case 6:
            printf("\nSalir\n\n");
            salir = 1;
            break;
        default:
            printf("\nOpcion Incorrecta\n\n");
            system("pause");
        }
    }
    while(salir != 1);

    return 0;
}

