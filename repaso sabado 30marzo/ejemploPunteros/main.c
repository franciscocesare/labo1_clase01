#include <stdio.h>
#include <stdlib.h>
#include "funcionesPunteros.h"
int main()
{
    int sePudo;
    float respuesta;

    sePudo=dividir(15,2,&respuesta);
    if (sePudo==1)
    {
        printf("la respuesta es %.2f ", respuesta);
    } else
    {
        printf("no se puede");

    }

   /* int miEdad;
    int retorno;
    retorno=pedirEdad(&miEdad);
    if(retorno==1)
    {
        printf("Su edad es %d", miEdad);
    } else
    {
        printf("no se pudo");
    }
  */

    /*
    int sueldo;
    sueldo = 10000;
    printf("Valor inicial: %d", sueldo);

    //cambiarValor(sueldo);
    //printf("\nPasado por valor, adentro de la funcion cambia pero es ptra variable distinta: %d", sueldo);

    cambiarReferencia(&sueldo);
    ///se pasa la referencia de la variable y por eso editamos el valor/
    printf("\n\nReferencia (&sueldo): %d", sueldo);


    return 0; */
}
