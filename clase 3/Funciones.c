//saluda

void saludar() // void no va a retornar nada
{
    printf("bienvenido a las funciones \n"); // ejecuta la funcion
}

//sumas dos numeros y retorna el resultado

int Suma(int primeroParametro, int segundoParametro)//suma dos numeros y retorna el resultado
{
    int respuestaSuma;
    respuestaSuma=primeroParametro +segundoParametro;// lo que va a devolver en pantalla
    return respuestaSuma;
}

// cambia el valor

void cambiarContenidoPorValor(int primerParametro)
{
    printf(" El parametro antes es %d \n",primerParametro);
    primerParametro=9;
    printf("\n El parametro despues es %d",primerParametro);


}
int pedirDatosYoperar()
{
    int DatoUno;
    int DatoDos;
    int suma;

    DatoUno=pedirUnDato();
    DatoDos=pedirUnDato();

    suma=Suma(DatoUno,DatoDos);
    return suma;
}

int pedirUnDato()
{
    int datoIngresado;
    printf("Ingrese un dato : \n");
    scanf("%d",&datoIngresado);
    return datoIngresado;

}
