#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Se incluye la biblioteca principal y las bibliotecas para la creacion de numero random

void Calculo_Insumos_Ingreso(int insumo[30][12], int total[30])
{
    srand(time(NULL));
    for (int i = 0; i < 30; i++)
    {
        total[i]=0;
    }
    
    for (int i = 0; i < 30; i++)
    {
        printf("\nInsumo %d\n", i + 1);
        for (int j = 0; j < 12; j++)
        {
            insumo[i][j] = rand() % 100 + 1;
            printf("%d \t", insumo[i][j]);
        }
        total[i] = total[i] + insumo[i];
        printf ("Total por producto: %d \n", total[i]);
    }
}

int main()
{

    int insumos_ingreso[30][12], insumo_engreso[30], ingreso_total[30], engreso_total[30];

    printf ("Ingresos por año de cada insumo \n");
    printf("Enero\tFebrero\tMarzo\tAbril\tMayo\tJunio\tAgosto\tSeptiembre\tOctubre\tNoviembre\tDiciembre");
    Calculo_Insumos_Ingreso(insumos_ingreso,ingreso_total);

    return 0;
}
