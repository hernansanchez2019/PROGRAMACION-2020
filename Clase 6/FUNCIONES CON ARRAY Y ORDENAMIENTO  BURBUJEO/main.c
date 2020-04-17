#include <stdio.h>
#include <stdlib.h>
#define T 3

// CARGA SECUENCIAL ----> CON FOR
//CARGAR ALEATORIA -----> DO/WHILE
//  INICIALIZAR (-1)

void inicializarNumeros(int numeros[],int tam); // primero va el vector vacio, despues la cantidad de elementos del vector, esta funcion recibe vector
void mostrarNumeros(int numeros[],int tam);  //muestra el contenido del vector
void cargarNumero(int numeros[],int tam);//pedimos numeros
int buscarLibre(int numeros[],int tam);// busca el primer elemento -1 libre
float calcularPromedioDeNumeros(int numeros[],int tam);
void ordenarNumeros(int numeros[],int tam);


int main()
{

    int numero[T];
    int opcion;
    float promedio;

    inicializarNumeros(numero,T); // nombre de la variable"representa la direccion de memoria del vector", sin[]

    do
    {
        printf("1 - Cargar un numero\n");
        printf("2 - Mostrar todos los numeros\n");
        printf("3 - Mostrar promedio de numeros ingresados\n");
        printf("4 - Ordenar de menor a mayor\n");
        printf("10- Salir\n");
        printf("Elija una opcion:");
        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:
            cargarNumero(numero,T);//llamamos a la funcion para cargar
            break;

        case 2:
            mostrarNumeros(numero,T);//llamamos a la funcion para mostrar
            break;

        case 3:
            promedio=calcularPromedioDeNumeros(numero,T);//llamamos a la funcion para calcular el promedio
            printf("El promedio es: %f\n",promedio);
            break;

        case 4:
            ordenarNumeros(numero,T);
            break;
        }

        system("pause");
        system("cls");
    }
    while(opcion!=10);



    return 0;
}

void inicializarNumeros(int numeros[],int tam)
{
    int i;

    for(i=0; i<tam; i++) //recorre el vector
    {
        numeros[i]=-1;
    }
}

void mostrarNumeros(int numeros[],int tam)
{

    int i;

    for(i=0; i<tam; i++) //recorre el vector
    {

        if(numeros[i]!=-1) // recorremos pero antes si es distinto a -1 recien ahi muestro
        {
            printf("%d\n",numeros[i]);//muestra numeros en cada posicion

        }
    }
}

void cargarNumero(int numeros[],int tam) //pedimos numeros
{


    int indice;

    indice=buscarLibre(numeros,tam);
    //(0-9) si hay lugar
    // -1 si no hay lugar

    if(indice!=-1)
    {
        printf("Ingrese un Numero: ");
        scanf("%d",&numeros[indice]); //indice vale un lugar del 0 al 9
    }

    else
    {
        printf("No hay mas espacio\n");
    }



}

int buscarLibre(int numeros[],int tam)//devuelve un entero
{

    int indice=-1; // el -1 representa el indice
    int i;

    // VAMOS CARGANDO NUMEROS EN CADA INDICE QUE VA ENCONTRANDO VACIO

    for(i=0; i<tam; i++)
    {

        if(numeros[i]==-1)
        {
            indice=i;
            break; // cuando se cumple la condicion se queda con ese indice y el break corta ahi
        }

    }

    return indice;

}

float calcularPromedioDeNumeros(int numeros[],int tam)  // promedio , sumas
{

    int i;
    int suma=0; // es acumulador por eso se inicializa en 0
    float promedio;
    int contadorDeNumeros=0;

    for(i=0; i<tam; i++)
    {

        // suma los numeros cargados y no la basura(-1)

        if(numeros[i]!=-1)
        {
            suma=suma + numeros[i]; // suma el contenido del vector, seria 0 + lo que este cargado
            contadorDeNumeros++;
        }
    }

    promedio= (float)suma/contadorDeNumeros;

    return promedio;

}

void ordenarNumeros(int numeros[],int tam)  // ORDENAMIENTO POR BURBUJEO
{
    int i;
    int j;
    int auxInt; // SWAP

    for(i=0; i<tam-1; i++) //HACE UNA ITERACION, ES  -1 PARA QUE NO LLEGUE AL FINAL
    {
        for(j=i+1; j<tam; j++) // ITERA X CANTIDAD DE VECES PARA LA OTRA ITERACION, ES +1 PARA QUE SE VAYA CORRIENDO
        {
            if((numeros[i]!= -1 && numeros[j]!= -1)/* FILTRAR PARA SABER SI SON LOS DOS -1 Y EJECUTAR MAS RAPIDO*/&& numeros[i] > numeros[j])// PARA ORDENAR DE MENOR A MAYOR (>), Y DE MAYOR A MENOR (<)
            {
                auxInt=numeros[i];// SE GUARDA EL NUMERO EN EL AUXILIAR<------------------
                numeros[i]=numeros[j]; // EL NUMERO GUARDADO EN J SE LO PASAMOS A I      |
                numeros[j]=auxInt;// J GUARDA EL NUMERO GUARDADO DEL AUXILIAR<------------

            }


        }

    }






}






