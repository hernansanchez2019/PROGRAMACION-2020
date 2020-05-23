#include <stdio.h>
#include <stdlib.h>

// PUNTEROS

int swap(int*,int*);
int main()
{
   int a=4;
   int b=7;

   swap(&a,&b);

   printf("a=%d , b=%d",a,b);
   return 0;
}


int swap(int* x,int* y)
{
    int z;

    z = *x;
    *x = *y;
    *y = z;
}



//https://www.onlinegdb.com/H1RSLM2qL
//https://www.onlinegdb.com/HkiSam2qL
//https://www.onlinegdb.com/r1CIMN2qL
//https://www.onlinegdb.com/SyNbVN25U


// ESTRUCTURA
//https://www.onlinegdb.com/rJd6DVnqU
