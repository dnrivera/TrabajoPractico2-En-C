#include <stdio.h>
#include <stdlib.h>

/*
Almacenar 200 números en un vector, después elevar al cuadrado cada valor
almacenado. Por último almacenar el resultado en un vector resultante e imprimirlo.
*/

int main()
{
    int V1[200];
    int VR[200];
    int i;

    printf("Numeros almacenados en Vector V1:\n");
    for(i=0;i<200;i++)
    {
        V1[i] = i;
        printf("%d - " , V1[i]);
    }

    printf("\nValores elevados al cuadrado.\n");
    for(i=0;i<200;i++)
    {
        VR[i] = V1[i] * V1[i];
        printf("%d - " , VR[i]);
    }
}
