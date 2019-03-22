#include <stdio.h>
#include <stdlib.h>
#define CANTIDAD_REP 3
int pedirSumarMostrar()
{   int numeroUno;
    int numeroDos;
    int resultado;

    printf("Ingrese el primer numero\n");
    scanf("%d",&numeroUno);
    printf("Ingrese el segundo numero\n");
    scanf("%d",&numeroDos);
    resultado=numeroUno+numeroDos;
    printf("El resultado es: %d", resultado);
    return 0;
}
int main()
{
    if(!pedirSumarMostrar()) //validar con IF
    {
        printf("\nEsta Perfecto");
    }
    return 0;
}
