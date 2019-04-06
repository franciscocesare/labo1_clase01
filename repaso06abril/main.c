#include <stdio.h>
#include <stdlib.h>
#include "string.h"
int dameEdad (int*edad, char*mensaje);///este iria en .H
int dameEdadDos (int*edad, char*mensaje);
int dameEdadTres (int*edad, char*mensaje);

int main()
{
    int edad;
    int sePudo;

    do
    {
        sePudo=dameEdadTres(&edad, "ingrese la edad :");///igualo a sePudo para ver si dameEdad funciona

    }
    while (sePudo==0);
    printf("La edad ingresada es :%d", edad);

    /*USADO PARA dameEdadDos!
    if (sePudo == 1) ///lo igualo a 1, xq si se pudo, devuelve 1
    {
        printf("su edad es %d", edad);
    }
    else
    {
        printf("no se pudo");
    }*/

    return 0;
}
/** \brief pide una edad y la muestra en pantalla
 * \param edad ingresada por usuario
 * \param mensaje de pedido de edad
 * \return si se pudo lo muestra en pantalla
 *
 */
int dameEdad (int*edad, char*mensaje) ///funcion que iria en .c
{
    int aux=0;
    int sePudo=0;
    printf(mensaje);
    sePudo = scanf("%d", &aux);    ///para ver si se pudo
    if (sePudo==1)
    {
        *edad=aux;
    }
    return sePudo;
}
int dameEdadDos (int*edad, char*mensaje) ///funcion que iria en .c
{
    char cadenaCargada[20];
    int sePudo=1;
    printf(mensaje);
    scanf("%s", cadenaCargada);    ///guardas en cadenaCargada
    *edad=atoi(cadenaCargada);

    return sePudo;
}

int dameEdadTres (int*edad, char*mensaje) ///funcion que iria en .c
{
    char cadenaCargada[20];
    int i;
    int aux;
    int sePudo=1;
    printf(mensaje);
    scanf("%s", cadenaCargada);

    int cantidadDeCaracteres = strlen(cadenaCargada);///funcion para saber cuantos caracteres ingreso el usuario

    for (i=0; i<cantidadDeCaracteres; i++) ///iteracion For para
    {
        if ((cadenaCargada[i]<'0' || cadenaCargada[i]>'9')&& cadenaCargada [i]!= '\0')
        {
            sePudo=0;
            printf("No es un dato valido %c \n", cadenaCargada[i]);
            break;
        }
    }
    if (sePudo==1)
    {
        aux=atoi (cadenaCargada);///cambia caracterers a int

        if (aux<120) ///para validad la edad menos a 120
        {
            *edad=aux;
        }
        else
        {
            sePudo=0;
        }
    }
    return sePudo;
} ///hacer con cantidad de repeticiones con un while
