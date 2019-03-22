#include <stdio.h>
#include <stdlib.h>
#define CANTIDAD_REP 3
int pedirAcumularMostrarPromedio();
int pedirSumarMostrar();

int main()
{
    if(!pedirAcumularMostrarPromedio())
    {
        printf("\nEsta Perfecto");
    }
    if (pedirSumarMostrar)
    return 0;
}
int pedirSumarMostrar()
{   printf("Ingrese el primer numero\n");
    scanf("%d",&numeroUno);
    printf("Ingrese el segundo numero\n");
    scanf("%d",&numeroDos);
    resultado=numeroUno+numeroDos;
    printf("El resultado es: %d", resultado);
    return 0;
}

int pedirAcumularMostrarPromedio()
{
    int acumulador=0;
    int i;
    int buffer; //xq buffer???
    for (i=0;i<CANTIDAD_REP;i++)
    {
        printf("Ingrese el numero %d: ",i+1);
        scanf("%d",&buffer); //VALIDAR
        acumulador += buffer;
    }
    printf("El promedio es: %f", (float)acumulador/CANTIDAD_REP);//averiguar como se calcula el promedio
    return 0;
}
