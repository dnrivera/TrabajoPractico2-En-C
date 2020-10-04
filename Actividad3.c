#include <stdio.h>
#include <stdlib.h>

/*
Realice un algoritmo que haga la carga de un vector V[100] �nicamente con
n�meros comprendidos entre 0 y 100 (Para validar la carga utilizar un ciclo Do
While). El vector tiene una dimensi�n de 100 elementos.
Luego calcular lo siguiente:
a. Calcular el promedio de todos los elementos del vector
e imprimirlo.
b. Determinar cu�ntas veces se carg� el n�mero 10 e
imprimirlo.
c. Determinar cu�ntos n�meros pares hay en el vector y
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
