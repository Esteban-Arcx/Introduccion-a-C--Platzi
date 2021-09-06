#include <stdio.h>

//Declaración de variables

/*
- Una variable es un espacio reservado en memoria
en el que vamos a poder almacenar información.

- Cada variable en C va a tener un tipo específico de dato(int,char,float...).

- las variables pueden ser declaradas fuera de la función main().

- Una buena práctica es dejar inicializadas nuestras variables.

- Algunas reglas básicas al momento de nombrar variables son:
    1. Debe iniciar con una letra(mayúscula o minúscula) o con un guio bajo.
    2. No debe tener espacios en blanco.
    3. No se puede utilizar las palabras reservadas propias de cada lenguaje.
*/

//Declarar variables
int a, b, c;

float f, g, h;

int main()
{
    //Inicializar variables
    a = 2;
    b = 34;
    c = a + b;
    
    printf("value of sum is: %d", c);
    
    return 0;
}