#include <stdio.h>
#include <stdlib.h>
#include "array.h"
#define LIMIT 10
#define MAX 100
#define MIN 0

int main()
{
    int i;
    int numbers [LIMIT];//declara un array de 5 posiciones(LIMIT)que guarda enteros. el numbers es el array
    utn_getArrayNumberRanged(numbers,LIMIT,MAX,MIN,"Ingrese un numero : ","Error",3);
    for(i=0; i<LIMIT; i++)//iteracion para ir guardando en el array los numeros
    {
        printf("%d\n",numbers[i]);//me muestra los numeros guardados en el array
    }


    return 0;
}
