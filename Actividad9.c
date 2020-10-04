#include <stdio.h>
#include <stdlib.h>

/*
Hacer un diagrama de flujo que me permita guardar 500 números en un vector.
Luego determinar:
a. Imprimir ¿Cuantos son ceros ?
b. Imprimir ¿Cuantos son negativos?
c. Imprimir ¿Cuantos son positivos?
d. Además imprimir la suma de los positivos y la suma de
los negativos.

*/

int main()
{
    int Nums[500];
    int ceros = 0;
    int negativos = 0;
    int positivos = 0;
    int i;
    int acup = 0;
    int acun = 0;

    for(i=0;i<500;i++)
    {
        printf("Inserte el valor para la posicion %d\n" , i);
        scanf("%d" , &Nums[i]);

        if(Nums[i] == 0)
            ceros = ceros + 1;
        if(Nums[i] < 0)
        {
            negativos = negativos + 1;
            acun = acun + Nums[i];
        }
        if(Nums[i] > 0)
        {
            positivos = positivos + 1;
            acup = acup + Nums[i];
        }
    }

    printf("Hay un total de %d ceros en el vector.\n" , ceros);
    printf("Hay un total de %d numeros negativos en el vector.\n" , negativos);
    printf("Hay un total de %d numeros positivos en el vector.\n" , positivos);
    printf("Suma de los positivos: %d\n" , acup);
    printf("Suma de los negativos: %d" , acun);
}
