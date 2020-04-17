#include <stdio.h>
#include <stdlib.h>
#include "input.h"

//prototipo

//tipoRetorno  nombreFx (ListaParametros);

//tipoRetorno: int - float - char - void - double

//sumarNumeros

//ListaParametros




int main()
{
    int edad;
    int legajo;
    int nota;

    edad = getInt("Ingrese su edad:","Error, ingrese edad: ", 1, 18);
    legajo = getInt("Ingrese su legajo:", "Error, ingrese legajo: ", 100, 500 );
    nota = getInt("Ingrese su nota: ", "Error, ingrese nota: ",1, 10);

    printf("Su edad es: %d", edad);
    printf("Su legajo es: %d", legajo);
    printf("Su nota es: %d", nota);
    //llamada
    return 0;
}

//implementacion

