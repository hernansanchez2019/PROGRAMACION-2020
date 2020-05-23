#include <stdio.h>
#include <string.h>
#define TAMANIO 10
int main()
{


    char clave[TAMANIO]="123";
    char auxCarga[200];
    char claveCopia[TAMANIO]="Ana Maria";
    int aux;
    int largoDeCadena;
    int i;

    printf("\ningrese nombre : ");
    gets(auxCarga);
    largoDeCadena=strlen(auxCarga);
    if(largoDeCadena>TAMANIO-1)
    {
         printf("\nlargo supera el tamaño maximo");

    }else
    {
        printf("esta perfecto");
        strcpy(clave,auxCarga);
    }
     largoDeCadena=strlen(clave);

    for(i=0;i<largoDeCadena;i++)
    {
        if(clave[i]<0 || clave[i]>9)
        {
            printf("no es numerico");
        }
    }

    for(i=0;i<largoDeCadena;i++)
    {
        if(clave[i]>'a'&& clave[i]<'z' || clave[i]>'A'&& clave[i]<'Z')
        {
            printf("es una letra");
        }
    }

    //1 el largoDeCadena
    //2 que los 3 primeros sean letras
    //3 que los 3 ultimos sean numero
    //"aaa666"


    //cuit 20-20200200-3
    //"aa666bb"

    /*
    largoDeCadena=strlen(clave);
    printf("\nel largo es %d", largoDeCadena);

    largoDeCadena=strlen(claveCopia);
    printf("\nel largo es %d", largoDeCadena);
    // todos
    for(i=0;i<15;i++)
    {

        printf("\nindice %d caracter : %c",i,claveCopia[i]);
    }
    // espacios vacios
    for(i=0;i<10;i++)
    {
        if(claveCopia[i]==' ')
        printf("\nindice %d caracter vacio : %c",i,claveCopia[i]);
    }

    // muestra el \0
    for(i=0;i<10;i++)
    {
        if(claveCopia[i]=='\0')
        printf("\nindice %d caracter barra cero : %c",i,claveCopia[i]);
    }

    */


    /*

    printf("\nclave : %s",clave);
    printf("\nclave copia %s",claveCopia);

    //claveCopia=clave;//no se puede
    //destino=origen;
   strcpy(claveCopia,clave);
    printf("\nclave : %s",clave);
    printf("\nclave copia %s",claveCopia);
    */
    // if(clave==claveCopia)//compara direcciones de memoria
    // if(clave[0]==claveCopia[0])//compara solo el primer caracter
    // if(clave[]==claveCopia[])//ni anda
    /*if(strcmp(clave,claveCopia)==0)
    {
        printf("son iguales");
    }else
    {
        printf("son distintas");
    }*/

    //65+(-97)= -32

    //97-65= 32

    // 65-65 =0
    /*
    aux=strcasecmp(clave,claveCopia);
    //aux=strncmp(clave,claveCopia,1);
    printf("\n retorno %d",aux);
    */







    /*
    char nombre[15];
    char apellido[25];
    char palabra[10]="holahol";
    char palabraDos[10]={'m','u',' ','d','o','o','\0'};
    char palabraTres[100]="cadenacadena";
    int i;

    printf("\nla palabra es  : %s",palabra);
    printf("\nla palabraDos es  : %s",palabraDos);
    printf("\nla palabraTres es  : %s",palabraTres);
    printf("\ningrese su nombre ");
    scanf("%s",nombre);
    printf("\nsu nombre 's' es : %s",nombre);

    printf("\ningrese su apellido ");
    __fpurge(stdin);
    gets(apellido);
    printf("\nsu apellido 's' es : %s",apellido);
    for(i=0;i<25;i++)
    {
        printf("\nindice %d caracter : %c",i,apellido[i]);
    }
    */
    /*for(i=0;i<20;i++)
    {
        printf("\nindice %d caracter : %c",i,palabraDos[i]);
    }
    */

    /*
    printf("\ningrese su nombre ");
    scanf("%s",nombre);
    printf("\nsu nombre 's' es : %s",nombre);
    //mal
    printf("\nsu nombre 'c' es : %c",nombre);
    printf("\nsu nombre 'd' es : %d",nombre);
    // es utilizable
    printf("\nsu nombre 'c' es : %c",nombre[0]);
    */

    return 0;
}

