#ifndef FUNCIONESPUNTEROS_C_INCLUDED
#define FUNCIONESPUNTEROS_C_INCLUDED
#include "funcionesPunteros.h"
int dividir (int datoUno, int datoDos, float *resultado)
{
    float aux;
    int retorno;
    retorno=0;
    if (datoDos!=0)
    {
        aux=(float) datoUno/datoDos;
        *resultado=aux;
        retorno=1;
    }
    return retorno;
}
/*
int pedirEdad (int *edad)
{
    int aux;
    int sePudo;
    int retorno;
    retorno =0;
    printf("ingrese su edad "); ///funcion para pedir edad

    if(scanf ("%d", &aux)==1)
    {
        if(aux>0 && aux <150)
        {
            *edad=aux;
            retorno=1;
            return retorno;
        }
*/

/*
void verSiAnda (void)
{
    printf("funciona");
}
*/

/*int cambiarValor (int dato)
{
//    printf("\n//cambiarValor//\n\n");
//    printf("-Recibimos esto (referencia a la variable): %d",dato);
    dato = 0;
}

int cambiarReferencia (int *dato)
{
    //printf("\n\n-Recibimos esto (referencia a la variable): %d",dato);
    //printf("\n\n-Aca apuntamos al valor de la variable con un asterisco: %d\n\n",*dato);
    (*dato)=0;*/


#endif // FUNCIONESPUNTEROS_C_INCLUDED
