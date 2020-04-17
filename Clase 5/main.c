#include <stdio.h>
#include <stdlib.h>
//#define CANTIDAD 3

/*int main()
{
    int ArrayDeEdades[CANTIDAD]; // lo que esta[]es la cantidad de valores
    int i; // para marcar la cantidad
    char respuesta;
    char sobreEscribir;
    int ubicacion;

    // carga secuencial

    for(i=0; i<CANTIDAD; i++)
    {
        printf("Ingrese edad a cargar: ");
        scanf("%d",&ArrayDeEdades[i]);// cargo el calor, empezando de 0 a 4.
    }
    for(i=0; i<CANTIDAD; i++)
    {
        printf("Las edades son : %d \n",ArrayDeEdades[i]); // una vez cargados los valores los muestra todo juntos
    }

    //carga aleatoria

    printf("****** Carga Aleatoria *******\n");

    do
    {
        // DE ESTA MANERA LOS DATOS INGRESADOS LOS MODIFICAMOS

        sobreEscribir='s';
        do
        {
            printf("Ingrese ubicacion de 3 disponibles: \n");
            scanf("%d",&ubicacion);  // marcamos la posicion del array q queremos modificar
        }
        while(ubicacion<1 || ubicacion>CANTIDAD);  // validamos, lo que esta en {} es la respuesta error


        if(ArrayDeEdades[ubicacion-1]!=-1) // si es la misma ubicacion la podemos sobreescribir
        {
            printf("Ya tiene edad cargada,¿ Desea sobreescribir?: s/n :");
            fflush(stdin); // LIMPIAMOS EL BUFFER PARA PODER INGRESAR EL DATO LIMPIO SIN BASURA
            scanf("%c",&sobreEscribir);
        }

        if(sobreEscribir=='s') // si aceptamos , volvemos a sobreescribir el dato
        {
            printf("Ingrese edad a cargar: ");
            scanf("%d",&ArrayDeEdades[ubicacion-1]); // cargamos esa posicion

        }

        printf("Desea Continuar ? :\n");
        fflush(stdin);
        scanf("%c",&respuesta); // preguntamos si queremos seguir modificando

    }
    while(respuesta=='s');

    printf("***** mostramos *****\n");

    for(i=0; i<CANTIDAD; i++)
    {
        printf("La edad de la posicion : %d , es : %d \n",i,ArrayDeEdades[i]); // una vez cargados los valores los muestra todo juntos
    }


}*/

//******************* SEGUNDO EJEMPLO ***************

#define CANTIDAD 10

int main()
{
    int listadoDeEdades[CANTIDAD];
    int i;
    char respuesta;


    for(i=0; i<CANTIDAD; i++)
    {
        listadoDeEdades[i]=-1; //INICIALIZA EL ARRAY
    }


    do
    {
        //VERIFICAMOS QUE HAYA LUGAR LIBRE

        for(i=0; i<CANTIDAD; i++)
        {
            if(listadoDeEdades[i]==-1) // si es igual a -1 va a tener el indice libre
            {
                break;
            }
        }
        // CARGAMOS LAS EDADES
        printf("Ingrese una edad %d :",i); // CON EL I MARCO LAS POSICIONES
        scanf("%d",&listadoDeEdades[i]); //[i] es el indice a donde se va a guardar la edad.

        printf("Desea continuar? s/n : ");
        fflush(stdin);
        scanf("%c",&respuesta);
    }
    while(respuesta=='s');

    for(i=0; i<CANTIDAD; i++)
    {
        printf("La edad es : %d : %d\n",i,listadoDeEdades[i]); //  MUESTRA TODO EL LISTADO DE EDADES INGRESADO
    }


    return 0;
}
