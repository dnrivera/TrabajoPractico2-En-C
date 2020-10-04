#include <stdio.h>
#include <stdlib.h>

/*
Realice un algoritmo que haga la carga de un vector V[100] únicamente con
números comprendidos entre 0 y 100 (Para validar la carga utilizar un ciclo Do
While). El vector tiene una dimensión de 100 elementos.
Luego calcular lo siguiente:
a. Calcular el promedio de todos los elementos del vector
e imprimirlo.
b. Determinar cuántas veces se cargó el número 10 e
imprimirlo.
c. Determinar cuántos números pares hay en el vector y
mostrarlo.

*/

int main()
{
    int Nums[100];
    int i;
    int acu = 0;
    int n10 = 0;
    int pares = 0;
    float prom;

    printf("Numeros generados aleatoriamente del 0 al 100.\n");
    for(i=0;i<100;i++)
    {
        do
        {
            Nums[i] = rand() % 100;
            printf("%d - " , Nums[i]);
        }
        while(Nums[i] < 0 || Nums[i] > 100)

        ;acu = acu + Nums[i];

        if(Nums[i] == 10)
        n10 = n10 + 1;
        if((Nums[i] % 2) == 0)
        pares = pares + 1;
    }

    prom = (float) acu / 100;

    printf("\nEl promedio es: %f\n" , prom);
    printf("Se cargo el numero 10 un total de %d veces.\n" , n10);
    printf("Hay %d numeros pares en el vector." , pares);

}
