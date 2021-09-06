#include <stdio.h>

#define POINT 1
#define LIMITE 50
// Otra forma de declarar constantes es utilizando #define

/*
La diferencia entre el uso de const y el uso de #define está en 
que mediante const se declara una constante que tiene un tratamiento
parecido al de una variable (por ejemplo, la constante es de un tipo de dato)
mientras que mediante define se indica que escribir el nombre especificado 
equivale a escribir el valor, con una correspondencia directa y sin tratamiento 
análogo al de una variable.
*/



// Preprocessor directives: Define

/*
Una directiva de preprocesador es una instrucción 
que recibe el compilador y le indica que hay ciertas 
acciones a realizar antes de iniciar a compilar el programa. 
Se insertan al principio de cada programa, y se identifican 
por estar precedidas por el carácter # (Hastag)

Una de las más conocidas es la directiva include, que le dice 
al compilador que debe incluir una librería y hacerla parte del código actual.


Otras directivas de preprocesador son #ifdef, #ifndef, #else, #elif y #endif 
las cuales sirven como condiciones para evitar errores, al definir varias 
veces las mismas variables.
*/

int main()
{
    int lives = 10;
    int points = 0;
    float  power = 6.8;
    printf("\tlives: %d \n\tPower: %.1f \n\tPoints: %d\n", lives, power, points);

    while(power > 6.5 && points < LIMITE)
    {
      points += POINT;  
    }

    if(lives == 0)
    {
        printf("Game Over");
    }
    printf("\n\tfinal Points %d\n", points);

    return 0;
}
