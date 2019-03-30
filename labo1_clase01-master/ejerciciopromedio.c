#include <stdio.h>
#include <stdlib.h>
#define CANTIDAD_REP 3
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
int main()
{
    if(!pedirAcumularMostrarPromedio())
    {
        printf("\nEsta Perfecto");
    }
    return 0;
}
