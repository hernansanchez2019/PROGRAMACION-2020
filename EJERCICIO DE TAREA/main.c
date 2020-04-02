#include <stdio.h>
#include <stdlib.h>

/*Ejercicio para casa
Ingresar números hasta que el usuario lo decida. Informar:
Cantidad de números pares.
Cantidad de números positivos y negativos.
Promedio de todos los números.
Maximo y minimo.*/



int main()
{

    int numeros;
    int contadorPares=0;
    int contadorNeg=0;
    int contadorPos=0;
    int maximo;
    int minimo;
    char respuesta;
    int acumulador=0;
    int contadorNum=0;
    float promedio;
    int flag=0;

    do
    {
        printf("Ingrese un numero: ");//pedimos numeros al usuario
        scanf("%d",&numeros);

        contadorNum++;//contamos los numeros


        printf("Quiere seguir ingresando numeros? s/n: \n"); //preguntamos al usuario
        fflush(stdin);
        scanf("%c",&respuesta);
        while(respuesta!='s' && respuesta!='n')//si es distinta la respuesta de las dos entra al bucle, si pones || va a entrar por la otra condicion
        {
            printf("Respuesta Incorrecta Ingrese s/n : \n");
            fflush(stdin);
            scanf("%c",&respuesta);
        }


        if(numeros%2==0)// contamos numeros pares
        {
            contadorPares++;
        }

        if (numeros<0)//contamos numeros negativos
        {
            contadorNeg++;
        }
        else
        {
            contadorPos++;//contamos numeros positivos
        }

        acumulador= numeros+acumulador;// para calcular el promedio



        if(numeros>maximo || flag==0)
        {
            maximo=numeros;
        }
        if(numeros<minimo || flag==0)
        {
            minimo=numeros;
            flag=1;
        }



    }
    while(respuesta=='s');// si es 's' vuelve a entrar al bucle


    promedio=(float)acumulador/contadorNum;

    printf("Cantidad de pares: %d \n",contadorPares);
    printf("Cantidad de negativos : %d \n",contadorNeg);
    printf("Cantidad de positivos : %d \n",contadorPos);
    printf("promedio de todos los numeros : %f \n",promedio);
    printf("El numero maximo : %d \n",maximo);
    printf("El numero minimo : %d \n",minimo);



    return 0;
}
