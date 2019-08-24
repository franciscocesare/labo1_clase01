#include <stdio.h>
#include <stdlib.h>

int main()
{
    int edad;
    int numero2;
    int numero;
    char sexo;
    char nombre [20];
    float promedio;
    /*printf("la variable numero vale %d y la numero2 vale %d",numero, numero2);
    printf("ingrese un numero: ");
    scanf("%d", &numero);
    printf("usted ingreso %d \n", numero);

    printf("ingrese un numero con decimales: ");
    scanf("%f", &numero);
    printf("usted ingreso %f \n", numero);

    printf("ingrese su Sexo: ");
    scanf("%c", &sexo);
    printf("usted ingreso %c \n", sexo);
    printf("ingrese su nombre: ");
    gets(nombre); ///funcion Gets en lugar de scanf, porque scanf solo toma una cadena, sin espacio
    printf("ingrese su edad: ");
    scanf("%d", &edad);
    printf("usted se llama %s, y su edad es %d \n", nombre, edad);*/

    printf("ingrese un numero: ");
    scanf("%d", &numero);

    printf("ingrese otro numero: ");
    scanf("%d", &numero2);

    promedio = (float)(numero + numero2)/2; ///CASTEAR, para que de la operacion guarde un Float, porque divide entre 2 enteros

    printf("%.2f",promedio);

    fflush(stdin); ///Limpia el bufer de entrada (CUANDO PEDIS CARACTERES DA PROBLEMA Y HAY QUE LIMPIAR)
    return 0;
}
