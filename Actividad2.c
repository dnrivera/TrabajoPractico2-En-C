#include <stdio.h>
#include <stdlib.h>

/*
Desarrollar un algoritmo que me permita cargar un vector de 100 elementos y luego
calcular su promedio y mostrarlo.
*/

int main()
{
    int Nums[100];
    int i;
    int acu = 0;
    float prom;

    printf("Vector de 100 elementos con numeros aleatorios del 0 al 100.\n");
    for(i=0;i<100;i++)
    {
        Nums[i] = rand() % 100;
        printf("%d - " , Nums[i]);

        acu = acu + Nums[i];
    }

    prom = (float) acu / 100;

    printf("\nEl promedio es de: %f" , prom);

}
