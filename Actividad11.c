#include <stdio.h>
#include <stdlib.h>
/*
Diseñe un algoritmo que cargue dos vectores V1 y V2 con 30 valores cada uno.
Luego multiplicar el primer elemento de V1[0] por el último de V2[29], después el
segundo de V1[1] por el ante ultimo de V2[28] y así sucesivamente hasta completar
todos. Almacenar el resultado en un vector resultante V3
*/

int main()
{
    int V1[30];
    int V2[30];
    int V3[30];
    int i;

    printf("Vector 1:\n");
    for(i=0;i<30;i++)
    {
        V1[i] = i;
        printf("%d - ", V1[i]);
    }
    printf("\nVector 2:\n");
    for(i=0;i<30;i++)
    {
        V2[i] = i;
        printf("%d - ", V2[i]);
    }
    printf("\nVector 3:\n");
    for(i=0;i<30;i++)
    {
        V3[i] = V1[i] * V2[29-i];
        printf("%d - ", V3[i]);
    }
}
