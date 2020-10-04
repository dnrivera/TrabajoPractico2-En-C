#include <stdio.h>
#include <stdlib.h>

/*
Cargar dos vectores V1 y V2 con 50 valores mayores a 0 cada uno. Luego sumar el
elemento 1 del vector V1 con el elemento 1 del vector V2 y así sucesivamente hasta
sumar todos los valores. Almacenar el resultado en un nuevo vector V3 y imprimir el
vector resultante.
*/

int main()
{
    int V1[50];
    int V2[50];
    int V3[50];
    int i;
    printf("----- Vector 1 ------\n");
    for(i=0;i<50;i++)
    {
        do
        {
            printf("Asignar los valores de V1 a la posicion %d\n" , i);
            scanf("%d" , &V1[i]);
        }while(V1[i] <= 0);
    }
    printf("----- Vector 2 -----\n");
    for(i=0;i<50;i++)
    {
        do
        {
            printf("Asignar los valores de V2 a la posicion %d\n" , i);
            scanf("%d" , &V2[i]);
        }while(V2[i] <= 0);
    }
    printf("El vector resultante V3 es:\n");
    for(i=0;i<50;i++)
    {
        V3[i] = V1[i] + V2[i];
        printf("%d - " , V3[i]);
    }
}
