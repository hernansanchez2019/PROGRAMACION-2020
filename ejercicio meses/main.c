#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mes;

    printf("Ingrese el numero de mes: ");
    scanf("%d",&mes);

    switch(mes)
    {
        case 1: printf("La estacion es verano");
        break;
        case 2:printf("La estacion es verano");
        break;
        case 3:printf("La estacion es verano");
        break;
        case 4:printf("La estacion es otonio");
        break;
        case 5:printf("La estacion es otonio");
        break;
        case 6:printf("La estacion es otonio");
        break;
        case 7:printf("La estacion es invierno");
        break;
        case 8:printf("La estacion es invierno");
        break;
        case 9:printf("La estacion es invierno");
        break;
        case 10:printf("La estacion es primavera");
        break;
        case 11:printf("La estacion es primavera");
        break;
        case 12:printf("La estacion es primavera");
        break;

        default:printf("No es un mes valido");
    }

    return 0;
}
