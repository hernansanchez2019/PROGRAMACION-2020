#include <stdio.h>
#include <stdlib.h>

int main()
{
    int edad; //numeros enteros
    int anio;
    int edadDos;
    int sumaEdades;
    float altura;//decimal
    char nombre[50];// nombre con 50 letras para escribir

    sumaEdades=edad+edadDos;
    edad=33;
    edadDos=44;
    anio=2020;
    altura=156.99;

    printf("tu edad es %d\n",edad);
    printf("El anio es: %d\n",anio);
    printf("Tu altura es %.2f\n",altura);//tipo entero %d,%f(datos decimales), %s para nombres


    puts("hola 1b\n");//muestra mensaje pero solo cadena de caracteres ( no muestra edad)

    printf("Ingrese su edad :");
    scanf("%d",&edad);//guarda el dato entero
    printf("Tu nueva edad es : %d\n",edad);

    //fflush(stdin);
    //fpurge();
    printf("Ingrese su nombre : ");
    scanf("%s",nombre);

    printf("Su nombre es : %s",nombre);

    return 0;
}
