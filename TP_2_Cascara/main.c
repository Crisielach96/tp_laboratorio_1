#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include "funciones.h"

EPersona lista[20];
int contPersonas=0;
int main()
{
    char seguir='s';
    int opcion=0;

    while(seguir=='s')
    {
        printf("1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n\n");
        printf("5- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:
            system("cls");
            alta(lista);
            contPersonas++;
            break;
        case 2:
            system("cls");
            baja(lista,contPersonas);
            break;
        case 3:
            system("cls");
            ordenarNombres(lista, contPersonas);
            mostrarPersonas(lista, contPersonas);
            system("pause");
            break;
        case 4:
            system("cls");
            graficoEdades(lista,contPersonas);
            system("pause");
            break;
        case 5:
            seguir = 'n';
            break;
        }
    }
    return 0;
}
