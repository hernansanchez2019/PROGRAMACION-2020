#include <stdio.h>
#include <stdlib.h>

/*void saludar(); // funcion prototipo, no devuelve nada
int suma();// funcion prototipo , devuelve un entero


int main()
{
 int respuesta;
 saludar();// llama a la funcion , solo en el main se repite la funcion
 respuesta=suma();// llama a la funcion suma , solo en el main se repite la funcion
    printf("La suma es : %d\n",respuesta);

    return 0;// finalmente
}

void saludar() // void no va a retornar nada
{
       printf("bienvenido a las funciones\n"); // ejecuta la funcion
}
int suma()
{
    return 2+3;  // lo que va a devolver en pantalla
}*/

//-------2 EJEMPLO --------------------------------------------



/*void saludar(); // funcion prototipo, no devuelve nada
int suma(int primeroParametro, int segundoParametro);// funcion prototipo , devuelve un entero


int main()
{
    int respuesta;
    int edadUno;
    int edadDos;

    edadUno=33;
    edadDos=22;
    saludar();// llama a la funcion , solo en el main se repite la funcion
    respuesta=suma(3,7);// llama a la funcion suma , solo en el main se repite la funcion
    printf("La suma es ( de literales : %d\n",respuesta);
    respuesta=suma(edadUno,edadDos);
    printf("La suma es ( de variables : %d\n",respuesta);

    return 0;// finalmente
}

void saludar() // void no va a retornar nada
{
    printf("bienvenido a las funciones\n"); // ejecuta la funcion
}
int suma(int primeroParametro, int segundoParametro)//suma dos numeros y retorna el resultado
{
    int sumaRetorno;
    sumaRetorno=primeroParametro +segundoParametro;// lo que va a devolver en pantalla
    return sumaRetorno;
}*/

//------ ejemplo 3 ----------------------

 #include "Funciones.h"


int main()
{
    int respuesta;
    int edadUno;
    int edadDos;
    int resultadoDeLasuma();

    resultadoDeLasuma=pedirDatosYoperar();

    edadUno=33;
    cambiarContenidoPorValor(edadUno);
    printf(" La suma es : %d\n",resultadoDeLasuma);

    pedirDatosYoperar();
    saludar();// llama a la funcion , solo en el main se repite la funcion



    edadDos=22;

    respuesta=Suma(3,7);// llama a la funcion suma , solo en el main se repite la funcion
    printf("La suma es ( de literales ): %d\n",respuesta);
    respuesta=Suma(edadUno,edadDos);
    printf("La suma es ( de variables) : %d\n",respuesta);

    return 0;// finalmente
}







