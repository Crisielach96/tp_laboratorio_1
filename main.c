#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    int numero1=0;
    int numero2=0;
    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A=%d)\n", numero1);
        printf("2- Ingresar 2do operando (B=%d)\n", numero2);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);



        switch(opcion)
        {
            case 1:
                numero1=pedirNumero("Ingrese el primer numero: ");
                break;
            case 2:
                numero2=pedirNumero("Ingrese el primer numero: ");
                break;
            case 3:
                suma(numero1, numero2);
                break;
            case 4:
                resta(numero1, numero2);
                break;
            case 5:
                division(numero1, numero2);
                break;
            case 6:
                multiplicacion(numero1, numero2);
                break;
            case 7:
                factorial(numero1);
                break;
            case 8:
                suma(numero1, numero2);
                resta(numero1, numero2);
                division(numero1, numero2);
                multiplicacion(numero1, numero2);
                factorial(numero1);
                break;
            case 9:
                seguir = 'n';
                break;
        }
}
return 0;
}

