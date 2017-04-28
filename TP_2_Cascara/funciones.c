#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include "funciones.h"



char *getSting();
int obtenerEspacioLibre(EPersona lista[])
{
    int lugar= -1;
    short int i;

    for(i=0; i<20; i++)
    {


        if(lista[i].estado==0)
        {

            lugar = i;
            break;
        }


    }
    return lugar;
}

void alta(EPersona lista[])
{
    int i,ver=0;
    char nombre[50];
    int auxDNI;
    int lugar=obtenerEspacioLibre(lista);

    if(lugar != -1)
    {
        printf("------------------------\n");
        strcpy(nombre,getSting());
        strcpy(lista[lugar].nombre,nombre);
        printf("Ingrese Edad: ");
        scanf("%d", &lista[lugar].edad);
        printf("Ingrese DNI: ");
        scanf("%d", &auxDNI);
        printf("------------------------");
        printf("\n");

        for(i=0; i<20; i++)
        {
            if(auxDNI==lista[i].dni)
            {
                ver = 1;
                break;
            }
        }
        if(!ver)
        {
            lista[lugar].dni = auxDNI;
            lista[lugar].estado = 1;
        }
        else
        {
            printf("\n  El DNI ya esta registrado  \n\n");
            system("pause");
            system("cls");
        }
    }

    else
    {
        printf("\n  No queda espacio \n\n\n");
        system("pause");
    }
}
void ordenarNombres(EPersona lista[],int cant)
{
    EPersona aux;
    int i,j;
    for(i=0; i<cant-1; i++)
    {
        for(j=i; j<cant; j++)
        {

            if(strcmp(lista[i].nombre,lista[j].nombre)>0)
            {

                aux=lista[i];
                lista[i]=lista[j];
                lista[j]=aux;
            }
        }
    }
}

void mostrarPersonas(EPersona persona[], int cant)
{
    int i;
    for(i=0; i<cant; i++)
    {
        if(persona[i].estado==1)
        printf("%s\t   %d\t   %d\t\n", persona[i].nombre, persona[i].edad, persona[i].dni);
    }
    printf("Nombre\t   Edad\t   DNI \t");
}

void baja(EPersona lista[], int cant)
{
    int i;
    int dni;
    char respuesta;
    int flag=0;
    printf("Ingrese DNI: ");
    scanf("%d", &dni);
    for(i=0; i<cant;i++)
    {
        if(lista[i].estado== 1 && dni == lista[i].dni)
        {
            printf("%s---%d---%d\n",lista[i].nombre, lista[i].edad, lista[i].dni);
            printf("Esta seguro que desea eliminar? s/n\n");
            respuesta = getch();
            if(respuesta=='s')
            {
                lista[i].estado = 0;
            }
            else
            {
                printf("Accion cancelada");
            }

            flag = 1;
            break;
        }

    }
    if(!flag)
    {
        printf("DNI incorrecto");
    }


}


int buscarPorDni(EPersona lista[], int dni)
{
    int i;
    int resultado=-1;

    for(i=0; i<20; i++)
    {
        if(lista[i].dni==dni)
        {
            resultado = i;
            break;
        }
    }
    return resultado;
}


void variablesCero(EPersona lista[], int i)
{

    strcpy(lista[i].nombre, "\0");
    lista[i].dni = 0;
    lista[i].edad = 0;
    lista[i].estado = 0;


}

void inicializarVariables(EPersona lista[])
{
    short int i;

    for(i=0; i<20; i++)
    {

        variablesCero(lista,i);
    }
}

char *getSting()
{
    int x;
    char *ADC=(char*)malloc(sizeof(char)*50);
    char auxNombre[50];
    printf("Ingrese nombre: ");
    fflush(stdin);
    gets(auxNombre);

    strlwr(auxNombre);

    for( x = 0; x < 50; x++)
    {

        auxNombre [x] = toupper(auxNombre[x]);

    }
    strcpy(ADC, auxNombre);
    return ADC;

}

void graficoEdades(EPersona lista[],int cant)
{
    int i,contMenores=0,contHastaTC=0,contMasTC=0,max;
    for(i=0;i<cant;i++)
    {
        if(lista[i].estado != 0 && lista[i].edad < 18)
        {
            contMenores++;
        }
        if(lista[i].estado != 0 && lista[i].edad >= 18 && lista[i].edad <= 35)
        {
            contHastaTC++;
        }
        if(lista[i].estado != 0 && lista[i].edad >35)
        {
            contMasTC++;
        }
    }

    if(contMenores > contHastaTC && contMenores > contMasTC)
    {
        max = contMenores;
    }
    else if(contHastaTC > contMasTC)
        max = contHastaTC;
    else
        max = contMasTC;

    for(i=max;i>0;i--)
    {
       if(i <= contMenores)
       {
           printf("  *");
       }

       if(i <= contHastaTC)
       {
           printf("\t  *");
       }
       else
       {
           printf("\t");
       }

       if(i <= contMasTC)
       {
           printf("\t *");
       }

       printf("\n");
    }
    printf(" <18 \t18-35\t>35\n");

}

