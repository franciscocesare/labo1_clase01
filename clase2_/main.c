#include <stdio.h>
#include <stdlib.h>

int main()
{
   int numero;
   int maximo;
   int minimo;
   int contador=0;


   do
        {
       printf("ingresa un numero: ");
       scanf("%d" ,&numero);

        if(contador==0)
        {
            maximo=numero; //primer vuelta del do
        }
       else
        {

        if (numero>maximo)
        {
            maximo=numero;
       //otra vueltas, comparo con otro numero
       }
        }
       if (numero<minimo)
        {
            minimo=numero;
        }

       contador ++;
   }while(numero !=-1); //FALTA MOSTRARLO!!

   return 0;
   }


