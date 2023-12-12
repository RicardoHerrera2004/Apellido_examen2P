#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Se incluye la biblioteca principal y las bibliotecas para la creacion de numero random

void Calculo_Insumos_Ingreso(int insumo[30][12], int total[30])
{
    srand(time(NULL));
    total[30]= (0);
    for (int i = 0; i < 30; i++)
    {
        total[i] = total[i] + insumo[i];
        printf("\nInsumo %d\n", i + 1);
        for (int j = 0; j < 12; j++)
        {
            insumo[i][j] = rand() % 100 + 1;
            printf("%d \t", insumo[i][j]);
        }
        printf ("Total por producto: %d \n", total[i]);
    }
}