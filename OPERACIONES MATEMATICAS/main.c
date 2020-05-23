#include <stdio.h>
#include <stdlib.h>

int suma(int num1, int num2);
int resta(int num1, int num2);
int promedio(int num1, int num2);
int multiplicacion(int num1, int num2);
float iva(float numIva);


int main()
{
    int num[4]={1,2,3,4};
    int primos;
    int contadorPrimos=0;
    int numero1=66;
    int numero2=22;
    int numeroIva=125;
    float resultado;
    int i;
    int sumaPromedio;
    int ladoA;
    int ladoB;
    int ladoC;

    resultado= suma(numero1,numero2);
    printf("Suma / %d + %d / ----> %.2f ",numero1,numero2, resultado);

    resultado= resta(numero1,numero2);
    printf("\nResta / %d - %d /----> %.2f ",numero1,numero2, resultado);

    sumaPromedio= suma(numero1,numero2);
    resultado= promedio(numero1,numero2);
    printf("\nPromedio / %d / ----> %.2f ",sumaPromedio, resultado);

    resultado= iva(numeroIva);
    printf("\nIva de %d pesos ----> %.2f ",numeroIva, resultado);

    resultado= multiplicacion(numero1,numero2);
    printf("\nMultiplicacion / %d * %d / ----> %f ",numero1,numero2,resultado);


    printf("\n\n**** Mayor a menor *** ");
    for(i=3;i>-1;i--)
    {
          printf("\n%d",num[i]);
    }


    printf("\n\n******Angulos******");

    printf("\nIngrese lado A: ");
    scanf("%d",&ladoA);
    printf("Ingrese lado B: ");
    scanf("%d",&ladoB);
    printf("Ingrese lado C: ");
    scanf("%d",&ladoC);

    if(ladoA==ladoB && ladoB==ladoC && ladoC==ladoA) // 3 LADOS IGUALES
    {
        printf("\nEs in triangulo Equilatero");
    }
    else if(ladoA==ladoB && ladoB==ladoA && ladoA!=ladoC && ladoB!=ladoC || ladoB==ladoC && ladoC==ladoB && ladoA!=ladoB && ladoA!=ladoC || ladoA==ladoC && ladoC==ladoA && ladoB!=ladoA && ladoB!=ladoC)
    {
        printf("\nEs in triangulo Isosceles"); // 2 LADOS IGUALES Y UNO DISTINTO
    }
    else
    {
        printf("\nEs in triangulo Escaleno"); // TODOS SUS LADOS DINTINTOS
    }




    // EL USUARIO INGRESA NUMEROS PARA SABER SI SON PRIMOS O NO

    printf("\nIngrese un numero para calcular si es primo o no = ");
    scanf("%d",&primos);

    for(i=primos; i > 0 ; i--)
    {
        if(primos%i == 0)
        {
            contadorPrimos++;
        }
    }

    if(contadorPrimos==2)
    {
        printf("\nel numero: %d es primo", primos);
    }
    else
    {
        printf("\nel numero: %d es compuesto",primos);
    }




    return 0;
}
int suma(int num1, int num2)
{
    int resultado;

    resultado= num1 + num2;

    return resultado;

}
int resta(int num1, int num2)
{

    int resultado;

    resultado= num1 - num2;

    return resultado;

}
int promedio(int num1, int num2)
{
    int resultado;
    int suma;

    suma= num1 + num2 ;

    resultado= (float)suma/2;

    return resultado;

}

float iva(float numIva)
{
   float resultado;

   resultado = numIva *= 0.21;

   return resultado;

}
int multiplicacion(int num1, int num2)
{
    int resultado;

    resultado= num1 * num2;

    return resultado;


}





