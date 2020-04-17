
#include "input.h"


int getInt(char mensaje[],char mError[], int min, int max)
{
    int dato;

    printf("%s",mensaje);
    scanf("%d", &dato);

   while(dato<min || dato>max)
   {
       printf("%s", mError);
       scanf("%d", & dato);
   }




    return dato;
}

