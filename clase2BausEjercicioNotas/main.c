#include <stdio.h>
#include <stdlib.h>
/*
Pedir nombre, nota de 0 a 10, sexo F M, mietras que el usuario quiera.
Promedio de notas totales, promedio de notas mujeres,
nombre-sexo-nota-MAXIMO
nombre-sexo-nota-MINIMO
*/

int main()
{
    int edad;
    char nombre [20];
    int contador=0;
    int contadorF=0;
    int acumulador=0;
    char seguir;
    char sexo;
    int nota;

    int auxEdad;

    do
    {
        printf("Ingrese el nombre: ");
        fflush (stdin);
        gets(nombre);

        printf("ingrese el Sexo: ");
        scanf("%c", &sexo);
        while (sexo != 'f' && sexo != 'm')
        {
            printf("Error, ingrese Sexo ");
            fflush(stdin);
            scanf("%c", &sexo);
        }

        printf("ingrese la nota: ");
        scanf("%d", &nota);
        while (nota <0 || nota>10)

        {
            printf("Error, ingrese Nota: ");
            fflush(stdin);
            scanf("%d", &nota);
        }

        printf("\n Desea continuar?: ");
        fflush(stdin);
        seguir=getchar();
    }


    while (seguir=='s');



    return 0;
}
