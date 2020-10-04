#include <stdio.h>
#include <stdlib.h>

/*
Realizar la carga de un vector de 30 notas de distintos alumnos en un parcial, por lo
tanto los valores ingresados deben estar comprendidos entre 0 y 10 incluyendo
ambos. Se necesita saber:
a. ¿Cuántos alumnos aprobaron el parcial ? se aprueba
con notas mayores o iguales a 4.
b. ¿Cual es la mejor nota del parcial? y mostrarla.
c. ¿Cual es la peor nota del parcial? y mostrarla
d. Calcular cual es el promedio de todos los alumnos
aprobados
*/

int main()
{
    int Notas[30];
    int i;
    int Aprobados = 0;
    int MejorNota = 0;
    int PeorNota = 10;
    float prom;

    for(i=0;i<30;i++)
    {
        do
        {

            printf("Ingresar nota del alumno %d\n" , i);
            scanf("%d", &Notas[i]);

        }while(Notas[i] < 0 || Notas[i] > 10);

        if(Notas[i] >= 4)
            Aprobados = Aprobados + 1;
        if(MejorNota <= Notas[i])
            MejorNota = Notas[i];
        if(PeorNota >= Notas[i])
            PeorNota = Notas[i];
    }

    prom = (float) Aprobados / 30;

    printf("Un total de %d alumnos aprobaron el parcial.\n" , Aprobados);
    printf("La mejor nota del parcial es: %d\n" , MejorNota);
    printf("La peor nota del parcial es: %d\n" , PeorNota);
    printf("El promedio de alumnos aprobados es de: %f" , prom);
}
