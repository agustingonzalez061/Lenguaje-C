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
void hardCode(eSector []);
void mostrarEmpleados(eEmpleado vec[], int tam, eSector sector);
void mostrarEmpleado(eEmpleado emp, eSector sector);
int buscarLibre(eEmpleado[], int);
int buscarEmpleado(eEmpleado[], int, int);
void altaEmpleado(eEmpleado vec[], int tam);
void bajaEmpleado(eEmpleado vec[], int tam,eSector sector);
void modificar(eEmpleado vec[], int tam, eSector sector);
void ordenar (eEmpleado vec[], int tam,eSector sector)

#endif // FUNCIONES_H_INCLUDED
