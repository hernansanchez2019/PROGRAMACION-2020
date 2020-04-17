#include <stdio.h>
#include <stdlib.h>
#include <string.h> // PARA USAR LAS FUNCIONES DE LAS CADENAS


void ajustarString(char cadena[]);

int main()
{
    char palabra1[20]; // []ES LA CANTIDAD DE LETRAS OSEA 19,LO ULTIMO ES \O.
    char palabra2[20]=" ladra";
    int largo;
    int comp;

    //puts(palabra1); MUESTRA UN STREM, SOLO RECIBE CADENAS.

    printf("Ingrese su nombre y apellido: ");
    //fflush(stdin);
    //scanf("%s",palabra1);NO NECESITA & POR QUE YA ESTA EL VECTOR REPRESENTANDO LA DIRECCION DE MEMORIA

    //gets(palabra1);// PARA WINDOWS Y PODER PONER ESPACIOS ENTRE LAS LETAS

    // PARA LINUX
    fgets(palabra1,20,stdin); //PARA LINUX, PIDE VARIABLE PARA GUARDAR EL DATO, UN ENTERO PARA LA CANTIDAD DE LETRAS, ORIGEN DEL DATO
    ajustarString(palabra1); // LLAMA A LA FUNCION

    /*STRLEN

    largo=strlen(palabra1); // PARA SABER LA CANTIDAD DE LETRAS QUE INGRESO EL USUARIO, STRLEN(SE PASA EL ARRAY STREM CADENA)


    // MOSTRAMOS POR PANTALLA
    printf("Tu nombre es : %s\n",palabra1);*/

    /*PARA COPIAR LOS VALORES DE OTRA CADENA
    strcpy(palabra2,palabra1);//VECTOR RECIBE UNA CADENA DE DESTINO PARA GUARDAR, ORIGEN DESDE DONDE SACA EL DATO QUE QUIERE COPIAR O UNA CONSTANTE "HOLA"
    puts(palabra2);*/


    // PARA COMPARAR CADENAS

    //comp= strcmp(palabra1,"hola"); // LAS DOS CADENAS O CONSTANTES A COMPARAR
    //comp= stricmp(palabra1,"hola"); COMPARA LAS CADENAS IGUALES MINUSCULAS O MAYUSCULAS
    //printf("com: %d",comp);

    /*PASAR TODO A MAYUSCULA O TODO A minuscula

    strupr(palabra1); // ESCRIBE EN minuscula Y DEVUELVE EN MAYUSCULA
    strlwr(palabra1); // ESCRIBE EN MAYUSCULA Y DEVUELVE EN minuscula
    puts(palabra1); MOSTRAMOS POR PANTALLA */


    // PARA CONCATENAR,UNIR,CADENAS

    strcat(palabra1,palabra2);
    puts(palabra1);// MOSTRAMOS POR PANTALLA



    return 0;
}

void ajustarString(char cadena[]) // PARA CONTROLAR EL STREM, Y SACAR LO QUE SOBRA
{

    int largo;

    largo=strlen(cadena); // PARA SABER LA CANTIDAD DE LETRAS QUE INGRESO EL USUARIO, STRLEN(SE PASA EL ARRAY STREM CADENA)
    //printf("Cantidad de letras: %d\n",largo);
    cadena[largo-1]='\0';


}
