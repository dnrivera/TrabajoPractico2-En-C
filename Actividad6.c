#include <stdio.h>
#include <stdlib.h>

/*
Calcular el promedio de 100 valores cargados en un vector, estos valores deben ser
mayores a 0. Determinar además cuantos valores son mayores al promedio, imprimir
el promedio y por último imprimir los valores mayores que el promedio.
*/

#define div 100
int main()
{
    int Nums[100];
    int i;
    int acu = 0;
    float prom;

    for(i=0;i<100;i++)
    {
        do
        {
            printf("Ingrese el valor para la posicion %d\n", i);
            scanf("%d", &Nums[i]);
        }while(Nums[i] <= 0);
        acu = acu + Nums[i];
    }

    prom = (float) acu / div;

    printf("El promedio es de: %f\n" , prom);
    printf("Los valores mayores que el promedio son:\n");

    for(i=0;i<100;i++)
    {
        if(Nums[i] > prom)
        {
            printf("%d - " , Nums[i]);
        }
    }
}
