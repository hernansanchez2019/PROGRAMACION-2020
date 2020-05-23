/******************************************************************************

Clase 09 Estructuras
1B 2020 1er Cuatri

*******************************************************************************/
#include <stdio.h>
typedef struct
{
    int legajo;
    char nombre[20];
    int primeraNota;
    int segundaNota;
    float promedio;

} eAlumno;

void MostrarAlumno(eAlumno parametroAlumno);
eAlumno CargarAlumno();
int CompararAlumnos(eAlumno primerParametro,eAlumno segundoParametro);

int main()
{
    printf("\n\testructuras");

    eAlumno primerAlumno;
    eAlumno otroAlumno;

    primerAlumno=CargarAlumno();
    MostrarAlumno(primerAlumno);

    // MostrarAlumno(primerAlumno);

    return 0;
}


void MostrarAlumno(eAlumno parametroAlumno)
{

    int suma;
    float promedio;

    printf("\nNOMBRE: %s ",parametroAlumno.nombre);
    printf("\nLEGAJO: %d ",parametroAlumno.legajo);
    printf("\nNOTA 1: %d ",parametroAlumno.primeraNota);
    printf("\nNOTA 2: %d ",parametroAlumno.segundaNota);
    printf("\nPROMEDIO: %f ",promedio);

    suma= parametroAlumno.primeraNota + parametroAlumno.segundaNota;
          promedio= suma/2;
}



eAlumno CargarAlumno()
{
    eAlumno alumnoParaRetornar;

    int suma;
    float promedio;

    printf("\ningrese su nombre :");
    fflush(stdin);
    scanf("%s",&alumnoParaRetornar.nombre);

    printf("\ningrese su legajo :");
    scanf("%d",&alumnoParaRetornar.legajo);

    printf("\ningrese su 1nota :");
    scanf("%d",&alumnoParaRetornar.primeraNota);

    printf("\ningrese su 2nota :");
    scanf("%d",&alumnoParaRetornar.segundaNota);

    suma= alumnoParaRetornar.primeraNota + alumnoParaRetornar.segundaNota;
          promedio= suma/2;


                    return alumnoParaRetornar;
}
int CompararAlumnos(eAlumno primerParametro,eAlumno segundoParametro)
{
    //return primerParametro.legajo==segundoParametro.legajo;
    int retorno=1;
    if(primerParametro.legajo==segundoParametro.legajo)// && primerParametro.promedio==segundoParametro.promedio)
    {
        retorno=0;
    }
    return retorno;

}




