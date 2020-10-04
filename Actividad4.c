#include <stdio.h>
#include <stdlib.h>

/*
Hacer un algoritmo que me permita validar la carga únicamente con números
mayores a 0. Luego calcular el mayor y mostrarlo.
*/

int main()
{
    int Nums[10];
    int i;
    int acu = 0;
    int mayor = 0;

    for(i=0;i<10;i++)
    {
        do
        {
            printf("Ingrese un numero para el valor %d que sea mayor a 0\n" , i);
            scanf("%d" , &Nums[i]);
        }while(Nums[i] <= 0);

        if(mayor < Nums[i])
        {
            mayor = Nums[i];
        }
    }

    printf("El numero mayor es: %d" , mayor);

}
