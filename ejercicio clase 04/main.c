#include <stdio.h>
#include <stdlib.h>


float factorialInt( int A);

int main()
{
    int numero1;

    int resultado;

    resultado= factorialInt(resultado);


    printf("Ingrese un numero : ");
    scanf("%f",&numero1);

    printf("El factorial es : %d",resultado);


    return 0;
}


float factorialInt(  int A)

{
    int resultado;
    int i;

    for (i=(int)A; i>0 ; i--)
    {
        //factoriamos variables

        resultado= i * resultado;
    }


    return resultado;

}
