#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char nombre[50];
    char apellido[50];
    char mostrar[50];
    int i;

    printf("Ingrese su nombre: ");
    fflush(stdin);
    gets(nombre);

    printf("Ingrese su apellido: ");
    fflush(stdin);
    gets(apellido);

    strlwr(nombre); //PASO NOMBRE A MINUSCULA
    strlwr(apellido); // PASO APELLIDO A MINUSCULA

    nombre[0]=toupper(nombre[0]);

    apellido[0]=toupper(apellido[0]);

    for(i=0; i<50; i++)
    {
        if(nombre[i]==' ')//CUANDO ENCUENTRO UN ESPACIO ENTRA
        {
            nombre[i+1]=toupper(nombre[i+1]);
        }

    }

    strcat(mostrar,apellido);// unis cadenas
    strcat(mostrar,", ");
    strcat(mostrar,nombre);

    puts(mostrar);

    return 0;
}
