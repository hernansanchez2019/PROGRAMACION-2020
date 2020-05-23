
#include <stdio.h>
#include <stdlib.h>
/*typedef struct
{
    int legajo;
    char division;

}eAlumno;

int main()
{
    /*eAlumno listaAlumnos[2] ={{100, 'B'},{200, 'C'}};
    eAlumno* pLista;
    int i;


    pLista = listaAlumnos;

    for(i=0; i<2; i++)
    {
        printf("%d -- %c\n", (*(pLista+i)).legajo, (*(pLista+i)).division);
    }



    /*eAlumno miAlumno = {100, 'B'};
    eAlumno* pAlumno;

    pAlumno = &miAlumno;

    printf("%d - %c", (*pAlumno).legajo, (*pAlumno).division);*/


    /*eAlumno miAlumno = {100, 'B'};
    eAlumno* pAlumno;

    pAlumno = &miAlumno;

    printf("%d - %c", pAlumno->legajo, pAlumno->division);


    eAlumno listaAlumnos[2] ={{100, 'B'},{200, 'C'}};
    eAlumno* pLista;
    int i;


    pLista = listaAlumnos;

    for(i=0; i<2; i++)
    {
        printf("%d -- %c\n", (pLista+i)->legajo, (pLista+i)->division);
    }


    return 0;
}*/
                //************ MOMORIA DINAMICA *******
/*int main()
{


    int* punteroEntero;

    punteroEntero = (int*) malloc(sizeof(int));

    if(punteroEntero!=NULL)
    {
      printf("Ingrese un numero: ");
      scanf("%d", punteroEntero);

      printf("El numero es: %d", *punteroEntero);
    }

    return 0;
}*/


/*                    //************ MOMORIA DINAMICA *******
int main()
{

    int* punteroEntero;
    int* aux;
    int* otra;
    int i;


    // punteroEntero = (int*) calloc(1,sizeof(int));




    punteroEntero = (int*) malloc(sizeof(int)*5);
    otra = (int*) malloc(sizeof(int));

    *otra = 5000;

    free(otra);
    otra = NULL;
    if(punteroEntero!=NULL)
    {
        for(i=0; i<5; i++)
        {
            printf("Ingrese un numero: ");
            scanf("%d", punteroEntero+i);
        }

        for(i=0; i<5; i++)
        {
            printf("%d\n", *(punteroEntero+i));
        }

        aux =(int*) realloc(punteroEntero, 10);
        if(aux!=NULL)
        {
            punteroEntero = aux;
            printf("Redimensiono a 10\n\n");
            for(i=5; i<10; i++)
            {
                printf("Ingrese un numero: ");
                scanf("%d", punteroEntero+i);
            }
            for(i=0; i<10; i++)
            {
                printf("%d\n", *(punteroEntero+i));
            }



            aux = (int*) realloc(punteroEntero, sizeof(int)*3);
            if(aux!=NULL)
            {
                printf("Redimensiono a 3\n\n");
                punteroEntero = aux;
                free(aux);

                for(i=0; i<10; i++)
                {
                    printf("%d\n", *(punteroEntero+i));
                }
            }



        }

    }
        return 0;
    }
*/

typedef struct
{
    int legajo;
    char division;
    int nota;
} eAlumno;

//Constructores
eAlumno* DameUnAlumno();//Constructor por defecto
eAlumno* DameUnAlumnoParametrizado(int,char,int);


void mostrarAlumno(eAlumno*);

int main()
{

    eAlumno* miAlumno;
    miAlumno = DameUnAlumnoParametrizado(100,'B',7);

    if(miAlumno!=NULL)
    {
        mostrarAlumno(miAlumno);
    }


    return 0;
}

eAlumno* DameUnAlumno()
{
    eAlumno* alumno;

    alumno = (eAlumno*) calloc(sizeof(eAlumno),1);

    /*if(alumno!=NULL)
    {
        alumno->legajo = 0;
        alumno->division = '';
        alumno->nota = 0
    }*/

    return alumno;
}
eAlumno* DameUnAlumnoParametrizado(int legajo,char division,int nota)
{

    eAlumno* alumno;
    alumno = DameUnAlumno();
    if(alumno!=NULL)
    {
        alumno->legajo = legajo;
        alumno->division = division;
        alumno->nota = nota;

    }
    return alumno;
}

void mostrarAlumno(eAlumno* unAlumno)
{
    if(unAlumno!=NULL)
    {
        printf("%d - %c - %d\n", unAlumno->legajo, unAlumno->division, unAlumno->nota);
    }

}










