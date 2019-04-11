#include <stdio.h>
#include <stdlib.h>
#include <string.h>
///pedir numero a usuario y que se cargue en variable, llamando a getnumber, dentro a getstring
///cada funcion debe ser simple y poder llamar una dentro de otra. de


int getString(  char *resultado,
                char *msg,
                char *msgError,
                int minimo,
                int maximo,
                int reintentos);///min aca es cant minima de caracteres


int getNumber(  int *resultado, ///llama a getString para ahorrar pasos. como son de distinto TIpo Char e int, hayq que estar atento a la def de criterios
                char *msg,
                char *msgError,
                int minimo,
                int maximo,
                int reintentos);

int isValidNumber (char* cadena); ///al ser validacion salio bien o salio mal.
/// isValid devuelve 1 bien, 0 mal. se cumplio o no. Distinto a el return




int main()
{

    printf("Hello world!\n");
    return 0;
}

int getString(  char *pResultado, ///tmp esta completa
                char *msg,
                char *msgError,
                int minimo,
                int maximo,
                int reintentos)

{
    char bufferStr[4096];

    fgets(bufferStr,sizeof(bufferStr),stdin);
    bufferStr[strlen(bufferStr)-1] = '\0';

    return 0;

}

int isValidIntNumber (char* cadena)
{
    int retorno = 1;
    int i;
    if (cadena[i]=='-') ///si es negativo , aumenta el contador i a la sgte posicion
    {
        i++;
    }
    for (i=0; cadena[i]!= '\0'; i ++)      ///pensarla al reves, asignar un valor de retorno correcto y despues buscar el error
    {
     if (cadena[i]<'0' || cadena[i]>'9')
     {
        retorno = 0;
        break;
     }
    }
    return retorno;      ///valor asignado a retorno, que es 1. a ese if entra si esta bien

}

int getNumber(  int *resultado,
                char *msg,
                char *msgError,
                int minimo,
                int maximo,
                int reintentos)
{
    int retorno = -1; ///solo si esta bien le cambia el valor despues
    char bufferStr[4096]; ///variables declaradas dentro del stack requieren previsibilidad, ya se le pasa el max aca, el num es exagerado
    int bufferInt;

    if( resultado != NULL && ///distinto de Null porque es puntero
            reintentos >= 0) ///FALTAN
    {
        if(!getString(bufferStr,msg,msgError,1,6,1) &&
                isValidIntNumber(bufferStr))
        {
            bufferInt = atoi(bufferStr); ///atoi pasa de string a num y lo guarda en bufferInt
            if(bufferInt >= minimo && bufferInt <= maximo)
            {
                retorno = 0; ///si salio bien
                *resultado = bufferInt;
            }
        }
    }
    return retorno;
}














