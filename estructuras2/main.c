#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CANT 50

typedef struct{
int dia, mes, anio;
}eFecha;
typedef struct{
char nombre [40];
int legajo;
float sueldo;
char sexo;
eFecha fn;
}eEmpleado;

int main()
{
    eEmpleado emp [CANT],aux;
    for (int i = 0; i< CANT - 1; i ++)
    {
        for(int j= i + 1; j < CANT; j ++)
        {
            if (emp [i].sueldo < emp [j].sueldo)
            {
                aux = emp [i];
                emp [i] = emp [j];
                emp [j] = aux;
            }
            else
            {
                if (emp [i].sueldo = emp [j].sueldo)
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


    return 0;
}
