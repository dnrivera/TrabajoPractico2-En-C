#include <stdio.h>
#include <stdlib.h>
/*
Realizar un algoritmo que me permita hacer la carga de un vector y luego obtener la
suma de las cantidades contenidas. La dimensión del vector es igual a 10
elementos. Por último imprimir por pantalla el resultado
*/
int main()
{
    int Nums[10];
    int i;
    int acu = 0;

    for(i=0;i<10;i++)
    {
        printf("Asigne el valor a la posicion %d\n" , i);
        scanf("%d" , &Nums[i]);
        acu = acu + Nums[i];
    }

    printf("La suma de los numeros es: %d" , acu);
}
