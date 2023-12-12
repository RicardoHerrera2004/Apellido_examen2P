#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Se incluye la biblioteca principal y las bibliotecas para la creacion de numero random

void Calculo_Insumos_Ingreso(int insumo[30][12])
{
    srand(time(NULL));  
    int suma=0;  
    for (int i = 0; i < 30; i++)
    {
        printf("\nInsumo %d\n", i + 1);
        for (int j = 0; j < 12; j++)
        {
            insumo[i][j] = rand() % 100 + 1;
            printf("%d \t", insumo[i][j]);
            suma = suma + insumo[i][j]; 
        }
        
        printf ("\nEl total del insumo %d es %d \n", i+1, suma);
    }


    
}

void Calculo_Insumos_Engreso(int insumo[30][12])
{
    srand(time(NULL));
    int suma=0;
    for (int i = 0; i < 30; i++)
    {
        printf("\nInsumo %d\n", i + 1);
        for (int j = 0; j < 12; j++)
        {
            insumo[i][j] = rand() % 100 + 1;
            printf("%d \t", insumo[i][j]);
            suma = suma + insumo[i][j]; 
        }
        printf ("\nEl total del insumo %d es %d \n", i+1, suma);
    }
}

int main()
{

    int insumos_ingreso[30][12], insumo_engreso[30][12];

    printf ("Ingresos por año de cada insumo \n");
    printf("Enero\tFebrero\tMarzo\tAbril\tMayo\tJunio\tAgosto\tSeptiembre\tOctubre\tNoviembre\tDiciembre");
    Calculo_Insumos_Ingreso(insumos_ingreso);

    printf ("\nEngresos por año de cada insumo \n");
    printf("Enero\tFebrero\tMarzo\tAbril\tMayo\tJunio\tAgosto\tSeptiembre\tOctubre\tNoviembre\tDiciembre");
    Calculo_Insumos_Engreso(insumo_engreso);

    return 0;
}
