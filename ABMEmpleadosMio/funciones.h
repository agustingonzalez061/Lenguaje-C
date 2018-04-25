#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
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
typedef struct  {
int id;
char descripcion [51];
int isEmpty;
}eSector;

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

#endif // FUNCIONES_H_INCLUDED
