#include <stdio.h>
#define T 10
#define LIBRE 0
#define OCUPADO 1

int buscarLibre(int estado[], int tam, int valorEstado);
/*
*brief
param
return -1 si no encontro espacio disponible
        0 si pudo cargar un ALUMNO
*/
int cargarAlumno(int legajo[], int nota1[], int nota2[], float promedio[], char nombre[][25], int estado[], int tam, int valorEstadoLibre, int valorEstadoOcupado);
int eliminarAlumno(int legajo[], int nota1[], int nota2[], float promedio[], char nombre[][25], int estado[], int tam, int valorEstadoLibre, int valorEstadoOcupado);
int modificarAlumno(int legajo[], int nota1[], int nota2[], float promedio[], char nombre[][25], int estado[], int tam, int valorEstadoLibre, int valorEstadoOcupado);

void mostrarAlumnos(int legajo[], int nota1[], int nota2[], float promedio[], char nombre[][25], int estado[], int tam, int valorEstadoOcupado);

void inicializarEstado(int estado[], int tam, int valorEstado);
float calcularPromedio(int nota1, int nota2);
int main()
{
    int legajo[T];
    int nota1[T];
    int nota2[T];
    float promedio[T];
    char nombre[T][25];
    int estado[T];//Usar una funcion para inicializar el estado
    int retornoFuncion;
    inicializarEstado(estado,T,LIBRE);

    char opcion;
    do
    {
        printf("a. ALTA ALUMNO\nb. BAJA ALUMNO\nm. MODIFICAR ALUMNO\nl. LISTAR ALUMNOS\ns. Salir\nElija una opcion: ");
      //  __fpurge(stdin);
        scanf("%c", &opcion);

        switch(opcion)
        {
            case 'a':
               retornoFuncion = cargarAlumno(legajo, nota1, nota2, promedio, nombre, estado, T, LIBRE, OCUPADO);
               if(retornoFuncion!=-1)
               {
                   printf("Alumno ingresado con exito!!\n");
               }
               else
               {
                   printf("No hay espacio disponible!!\n");
               }

            break;
            case 'b':
                retornoFuncion = eliminarAlumno(legajo, nota1, nota2, promedio, nombre, estado, T, LIBRE, OCUPADO);
                /*hacer algo con el retorno*/

            break;
            case 'm':
                retornoFuncion = modificarAlumno(legajo, nota1, nota2, promedio, nombre, estado, T, LIBRE, OCUPADO);
                /*hacer algo con el retorno*/
            break;
            case 'l':
                mostrarAlumnos(legajo,nota1,nota2,promedio,nombre,estado,T,OCUPADO);
            break;

        }
    }while(opcion!='s');




    return 0;
}
void inicializarEstado(int estado[], int tam, int valorEstado)
{
    int i;
    for(i=0; i<tam; i++)
    {
        estado[i]=valorEstado;
    }
}

int buscarLibre(int estado[], int tam, int valorEstado)
{
  int indice = -1;
  int i;

  for(i=0; i<tam; i++)
  {
    if(estado[i] == valorEstado)
    {
        indice = i;
        break;
    }
  }

  return indice;

}
int cargarAlumno(int legajo[], int nota1[], int nota2[], float promedio[], char nombre[][25], int estado[], int tam, int valorEstadoLibre, int valorEstadoOcupado)
{
    //FUNCION DE ALTA DE ALUMNO
    //convertir esta funcion a un retorno en entero
    int indice;
    int cargo = -1;

    indice = buscarLibre(estado,tam, valorEstadoLibre);

    if(indice!=-1)
    {
        //Cargar los datos

        printf("Ingrese legajo: ");
        scanf("%d", &legajo[indice]);

        printf("Ingrese nota 1: ");
        scanf("%d", &nota1[indice]);

        printf("Ingrese nota 2: ");
        scanf("%d", &nota2[indice]);

        printf("Ingrese nombre: ");
       // __fpurge(stdin);
        fgets(nombre[indice], 25, stdin);

        nombre[indice][strlen(nombre[indice])-1]='\0';


        promedio[indice]=calcularPromedio(nota1[indice], nota2[indice]);

        estado[indice] =  valorEstadoOcupado;


        cargo = 0;
    }
    return cargo;

}
/*

return si pudo dar de baja.
si no pudo porque el usuario ingreso un legajo que no existe
si no pudo porque el usuario cancelo la operacion.

*/
int eliminarAlumno(int legajo[], int nota1[], int nota2[], float promedio[], char nombre[][25], int estado[], int tam, int valorEstadoLibre, int valorEstadoOcupado)
{
    int auxInt;
    int i;

    printf("Ingrese el legajo a eliminar: ");
    scanf("%d", &auxInt);
    for(i=0; i<tam;i++)
    {
        if(auxInt == legajo[i])//encontre el legajo
        {
            estado[i]=valorEstadoLibre;
            break;
        }
    }


}
/*

return si pudo dar modificar.
si no pudo porque el usuario ingreso un legajo que no existe
si no pudo porque el usuario cancelo la operacion.

*/
int modificarAlumno(int legajo[], int nota1[], int nota2[], float promedio[], char nombre[][25], int estado[], int tam, int valorEstadoLibre, int valorEstadoOcupado)
{
    int auxInt;
    int i;

    printf("Ingrese el legajo a modificar: ");
    scanf("%d", &auxInt);

    for(i=0; i<tam;i++)
    {
        if(auxInt == legajo[i])//encontre el legajo
        {

            /*Podrian preguntarle al usuario que dato modificar, yo aca lo hago solo con nota 1*/
            printf("Ingrese la nueva nota 1");
            scanf("%d", &nota1[i]);


            promedio[i] = calcularPromedio(nota1[i], nota2[i]);

            break;
        }
    }


}

void mostrarAlumnos(int legajo[], int nota1[], int nota2[], float promedio[], char nombre[][25], int estado[], int tam, int valorEstadoOcupado)
{
    int i;
    for(i=0; i< tam; i++)
    {
        if(estado[i] == valorEstadoOcupado)
        {
            printf("%d %s %d %d %.2f\n", legajo[i],nombre[i], nota1[i], nota2[i], promedio[i]);
        }
    }
}

float calcularPromedio(int nota1, int nota2)
{
    int sumaNotas;
    sumaNotas = nota1 + nota2;
    return (float)sumaNotas/2;
}


