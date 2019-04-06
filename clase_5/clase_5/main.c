#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#define TAM_ARRAY 3


int main(void)
{
    int array [TAM_ARRAY];
    utn_getArrayInt (array, TAM_ARRAY, "numero : ", "Error", 0, 100, 3);

    for (int i=0, i<=TAM_ARRAY; i++)
    {
        printf("%d", array[i]); //falta terminar
    }



        return 0;
}
