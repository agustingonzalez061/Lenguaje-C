#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define TAM 2

typedef struct
{
    int dia;
    int mes;
    int anio;

} eFecha;

typedef struct
{
    int legajo;
    char nombre[20];
    char sexo;
    float sueldo;
    eFecha fechaIngreso;
    int isEmpty;

} eEmpleado;


int menu();
void inicializarEmpleados(eEmpleado[], int);
void mostrarEmpleados(eEmpleado[], int);
void mostrarEmpleado(eEmpleado);
int buscarLibre(eEmpleado[], int);
int buscarEmpleado(eEmpleado[], int, int);
void altaEmpleado(eEmpleado vec[], int tam);
void bajaEmpleado(eEmpleado[], int);
void modificar(eEmpleado vec[], int tam);
void ordenar (eEmpleado vec[], int tam);

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

int menu()
{
    int opcion;

    system("cls");
    printf("---ABM Empleados---\n\n");
    printf("1-Alta\n");
    printf("2-Baja\n");
    printf("3-Modificar\n");
    printf("4-Listar\n");
    printf("5-Ordenar\n");
    printf("6-Salir\n");
    printf("\nIndique opcion: ");
    scanf("%d", &opcion);

    return opcion;
}

void inicializarEmpleados(eEmpleado vec[], int tam)
{

    for(int i=0; i< tam; i++)
    {
        vec[i].isEmpty =1;
    }
}

void mostrarEmpleados(eEmpleado vec[], int tam)
{
    system("cls");
    printf("---Lista de Empleados---\n\n");
    printf("  Legajo  Nombre   Sexo   Sueldo   Fecha de Ingreso \n\n");
    for(int i=0; i< tam; i++)
    {
        if(vec[i].isEmpty == 0)
        {
            mostrarEmpleado(vec[i]);
        }
    }
}

void mostrarEmpleado(eEmpleado emp)
{
    printf("  %4d     %s     %c  %10.2f    %02d/%02d/%4d \n", emp.legajo, emp.nombre, emp.sexo, emp.sueldo, emp.fechaIngreso.dia, emp.fechaIngreso.mes, emp.fechaIngreso.anio );
}

int buscarLibre(eEmpleado vec[], int tam)
{
    int indice = -1;
    for(int i=0; i < tam; i++)
    {
        if(vec[i].isEmpty == 1)
        {
            indice = i;
            break;
        }
    }
    return indice;
}


int buscarEmpleado(eEmpleado vec[], int tam, int legajo)
{
    int indice = -1;
    for(int i=0; i < tam; i++)
    {
        if(vec[i].isEmpty == 0 && vec[i].legajo == legajo)
        {
            indice = i;
            break;
        }
    }
    return indice;
}

void altaEmpleado(eEmpleado vec[], int tam)
{

    eEmpleado nuevoEmpleado;
    int indice;
    int esta;
    int legajo;

    system("cls");
    printf("---Alta empleado---\n\n");

    indice = buscarLibre(vec, tam);

    if(indice == -1)
    {
        printf("\nEl sistema esta completo. No se puede dar de alta a empleados nuevos.\n\n");
    }
    else
    {
        printf("Ingrese legajo: ");
        scanf("%d", &legajo);

        esta = buscarEmpleado(vec, tam, legajo);

        if(esta != -1)
        {
            printf("\nEl legajo %d ya esta dado de alta en el sistema\n", legajo);
                   mostrarEmpleado(vec[esta]);
        }
        else{
                   nuevoEmpleado.isEmpty = 0;
                   nuevoEmpleado.legajo = legajo;

                   printf("Ingrese nombre: ");
                   fflush(stdin);
                   gets(nuevoEmpleado.nombre);

                   printf("Ingrese sexo: ");
                   fflush(stdin);
                   scanf("%c", &nuevoEmpleado.sexo);

                   printf("Ingrese sueldo: ");
                   scanf("%f", &nuevoEmpleado.sueldo);

                   printf("Ingrese fecha de ingreso d m a: ");
                   scanf("%d %d %d", &nuevoEmpleado.fechaIngreso.dia, &nuevoEmpleado.fechaIngreso.mes, &nuevoEmpleado.fechaIngreso.anio);

                   vec[indice] = nuevoEmpleado;

                   printf("\nAlta exitosa!!!\n\n");

           }
  }

}

void bajaEmpleado(eEmpleado vec[], int tam)
{
    int legajo;
    int esta;
    char confirma;
    void bajaEmpleado(eEmpleado vec[], int tam)
{
    int legajo;
    int esta;
    char confirma;

    system("cls");
    printf("---Baja Empleado---\n\n");
    printf("Ingrese legajo: ");
    scanf("%d", &legajo);

    esta = buscarEmpleado(vec, tam, legajo);

    if(esta == -1)
        {
            printf("\nEl legajo %d no se encuentra en el sistema\n\n", legajo);

        }
    else{

        mostrarEmpleado(vec[esta]);

        printf("\nConfirma baja?: ");
        fflush(stdin);
        scanf("%c", &confirma);

        if(confirma == 's'){
            vec[esta].isEmpty = 1;
            printf("\nSe ha realizado la baja\n\n");
        }
        else{
            printf("\nSe ha cancelado la baja\n\n");
        }

        }
}
}
void modificar(eEmpleado vec[], int tam)
{
    int legajo;
    int esta;
    char confirma;
    int opcion;

    system("cls");
    printf("---Modificar---\n\n");
    printf("Ingrese legajo: ");
    scanf("%d", &legajo);

    esta = buscarEmpleado(vec, tam, legajo);

    if(esta == -1)
        {
            printf("\nEl legajo %d no se encuentra en el sistema\n\n", legajo);

        }
    else{

        mostrarEmpleado(vec[esta]);

        printf("\nEs este el empleado que quiere modificar?: ");
        fflush(stdin);
        scanf("%c", &confirma);

        if(confirma == 's'){
            printf("Que quiere modificar del empleado?\n");
            printf("1:Legajo\n");
            printf("2:Nombre\n");
            printf("3:Sexo\n");
            printf("4:Sueldo\n");
            printf("5:Fecha de Ingreso\n");
            printf("\nIndique opcion: ");
            fflush(stdin);
            scanf("%d", &opcion);
            switch (opcion)
            {
                case 1:
                    {
                        printf("\nIngrese nuevo legajo:");
                        fflush(stdin);
                        scanf("%d", &vec[esta].legajo);
                        break;
                    }
                case 2:
                    {
                        printf("\nIngrese nuevo Nombre:");
                        fflush(stdin);
                        scanf("%s", &vec[esta].nombre);
                        break;
                    }
                case 3:
                    {
                        printf("\nIngrese nuevo Sexo:");
                        fflush(stdin);
                        scanf("%c", &vec[esta].sexo);
                        break;
                    }
                case 4:
                    {
                        printf("\nIngrese nuevo Sueldo:");
                        fflush(stdin);
                        scanf("%f", &vec[esta].sueldo);
                        break;
                    }
                case 5:
                    {
                        printf("Ingrese nueva fecha de ingreso d m a: ");
                        fflush(stdin);
                        scanf("%d %d %d", &vec[esta].fechaIngreso.dia, &vec[esta].fechaIngreso.mes, &vec[esta].fechaIngreso.anio);
                        break;
                    }
            }
            }
        else{
            printf("\nIngrese una opcion que este en el menu\n\n");
        }

        }
}
void ordenar (eEmpleado vec[], int tam)
{
    eEmpleado emp [tam],aux;
    for (int i = 0; i< tam - 1; i ++)
    {
        for(int j= i + 1; j < tam; j ++)
        {
            if (emp [i].legajo < emp [j].legajo)
            {
                aux = emp [i];
                emp [i] = emp [j];
                emp [j] = aux;

            }
            else
            {
                if (emp [i].legajo = emp [j].legajo)
                {
                    if (strcmp (emp [i].nombre , emp [j].nombre)> 0)
                    {
                        aux = emp [i];
                        emp [i] = emp [j];
                        emp [j] = aux;

                    }
                }
            }
        }
    }
    mostrarEmpleados(emp, TAM);
}
