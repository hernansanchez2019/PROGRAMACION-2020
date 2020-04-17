#include <stdio.h>
#include <stdlib.h>

int suma(int num1,int num2);


int main()
{
    int num1;
    int num2;
    int resultado;


    resultado=suma(num1,num2);

    printf("Ingrese un Numero : ");
    scanf("%d",&num1);
    printf("Ingrese un Numero : ");
    scanf("%d",&num2);


    printf("El resultado es : %d ",resultado);

    return 0;
}


int suma(int num1,int num2)
{
    int sumaDeNumeros;
    sumaDeNumeros=num1+num2;
    return sumaDeNumeros;
}
