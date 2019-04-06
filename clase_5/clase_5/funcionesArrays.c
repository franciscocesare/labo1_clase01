#include <stdio.h>
#include <stdlib.h>
#include "funcionesArrays.h"
int utn_getNumber (int*pNumero,int maximo,int minimo, char* msg, char*msgError,int reintentos)


{
    int numero;
    int retorno=-1;

    while (reintentos>0)
    {
    printf("%s", msg);
    if (scanf("%d",&numero)==1)
    {
    if (numero>=minimo && numero<=maximo)
         break;

    }
    fflush(stdin);
    reintentos --;
        printf("%s", msgError);
        }
        (*pNumero)=numero;
         return retorno;
        }
