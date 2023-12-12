#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Se incluye la biblioteca principal y las bibliotecas para la creacion de numero random

void Calculo_Insumos_Ingreso(int insumo[30][12])
// Se crea la primera funcion donde guardara los ingresos de los 30 insumos
{
    srand(time(NULL));  
    // Se crea el codigo para la creacion de numeros random

    int suma=0;  
    // En esta variable se guardara el total de ingresos de cada insumo por cada año

    for (int i = 0; i < 30; i++)
    // Se crea una matriz de 30x12 donde 30 son los insumos y 12 son los meses del año
    {
        printf("\nInsumo %d\n", i + 1);
        for (int j = 0; j < 12; j++)
        {
            insumo[i][j] = rand() % 100 + 1;
            // Se llena la matriz con numero random
            printf("%d \t", insumo[i][j]);
            // Se imprime la matriz
            suma = suma + insumo[i][j]; 
            // En la variable suma se va guardando la suma cada fila, para ver el total de ingreso en el año
        }
        
        printf ("\nEl total del insumo %d es %d \n", i+1, suma);
        // Se imprime el total de cada insumo por año
    }


    
}

void Calculo_Insumos_Engreso(int insumo[30][12])
// Se repite lo mimsom pero ahora con los engresos
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
// Funcion principal
{

    int insumos_ingreso[30][12], insumo_engreso[30][12];
    // Se crean las variables de las matrices para ingresos y engresos

    printf ("Ingresos por año de cada insumo \n");
    printf("Enero\tFebrero\tMarzo\tAbril\tMayo\tJunio\tAgosto\tSeptiembre\tOctubre\tNoviembre\tDiciembre");
    // SE arregla y acomoda para mas accesibilidad
    Calculo_Insumos_Ingreso(insumos_ingreso);
    // Se llama a la funcion ingresos

    printf ("\nEngresos por año de cada insumo \n");
    printf("Enero\tFebrero\tMarzo\tAbril\tMayo\tJunio\tAgosto\tSeptiembre\tOctubre\tNoviembre\tDiciembre");
    // SE arregla y acomoda para mas accesibilidad
    Calculo_Insumos_Engreso(insumo_engreso);
    // Se llama a la funcion engresos

    return 0;
}
