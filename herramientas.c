#include <stdio.h>
#include <stdlib.h>

int pedirNumero(char mensaje[])
{
    int numero;
    printf("%s", mensaje);
    scanf("%d", &numero);
    return numero;
}

int suma(int a, int b)
{
    printf("La suma es de: %d \n", a+b);
    return 0;
}

int resta(int a, int b)
{
    printf("La resta es de: %d \n", a-b);
    return 0;
}

float division(int a, int b)
{
    if (b==0)
    {
        printf("ERROR! no se puede dividir por 0\n");
    }
    else
    {
        printf("La division es de: %f \n", (float)a/(float)b);
    }
    return 0;
}

int multiplicacion(int a , int b)
{
   printf("La multiplicacion es de: %d \n", a*b);
   return 0;
}

int factorial(int a)
{
    int b;
    int resultado=1;

    for(b=a; b>1; b--)
    {
        resultado=resultado*b;
    }
    printf("El factor es de: %d \n", resultado);
    return 0;
}
