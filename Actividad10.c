#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/*
Dise�e un algoritmo que me permita ingresar por teclado un numero cualquiera y lo
busque en el vector V[50], que debe estar previamente cargado. Si encuentra el
valor ingresado en el Vector, sustituirlo por la labara �SI� en la posici�n donde se
encontr� el n�mero buscado. Si la b�squeda fue negativa imprimir un mensaje
donde se indique que no se encontro el numero.
*/

int main()
{
    int V[50];
    int num;
    int i;
    bool Encontrado = false;

    for(i=0;i<50;i++)
    {
        V[i] = rand() % 100;
        printf("%d - " , V[i]);
    }

    printf("\nIngrese cualquier numero para buscar en el vector.\n");
    scanf("%d", &num);

    for(i=0;i<50;i++)
    {
        if(num == V[i])
        {
            printf("Se encontro el numero!");
            Encontrado = true;
        }

    }
    if (Encontrado == false)
        printf("El numero no se encontro.");
}
