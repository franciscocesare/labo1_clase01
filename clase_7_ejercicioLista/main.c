#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#include "utn.h"
#define LEN_LISTA    100




int main()
{

    int opcion;
    char nombres[LEN_LISTA][20];
    int i, posLibre;
    // Inicializacion
    for(i=0; i<LEN_LISTA; i++)
    {
        nombres[i][0] = '\0';
    }
    //
    while(1)
    {
        utn_getNumber(&opcion,
                      "1)ingresar\n2)listar\n",
                      "NO!",
                      1,10,2);

        printf("elegiste:%d\n",opcion);
        switch(opcion)
        {
        case 1:
        {
            printf("agregar nombre\n");
            if(buscarLibre(nombres, LEN_LISTA,&posLibre)); ///"&"posLibre porque es una posicion de memoria
            {
                printf("se encontro lugar en %d \n", posLibre);
                fgets(buffer, 20, stdin);///que haceeeee

                ///utn_getString(buffer, "ingrese: ", "No!", 0,20,1);

                strncpy(nombres[posLibre], buffer, 20);
                printf("Se ingreso: %s \n", buffer);
                for (i=0; i<10; i++)
                    printf()

            }

            break;
        }
        }

    }

    return 0;
}

