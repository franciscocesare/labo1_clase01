#include <stdio.h>
#include <stdlib.h>


void pruebita (void)

{
    printf("hola mundo desde utn.c\n");

    //revisar hay algo mal!!!!!
}  //HACER GET CON CHAR Y CON FLOAT!

int utn_getNumber (int*pNumero,int maximo,int minimo, char* msg, char*msgError)

{
    int numero;
    int retorno=-1;
    int reintentos;  //si esta mal

    while (reintentos>0)
    {
    printf("%s", msg);
    if (scanf("%d",&numero)==1)
    {
    if (numero>minimo && numero<maximo)
    {
         (*pNumero)=numero;
         retorno=0;
         break;
    }
    }
        else

       { printf("%s", msgError);
        scanf("%d",&numero);
        }

        (*pNumero)=numero;

        }
        reintentos --;

        return retorno;  //ok=o mal o error=-1
             //HACER SI ESTA MAL LO VUELVA A PEDIR
}

/*



*/
