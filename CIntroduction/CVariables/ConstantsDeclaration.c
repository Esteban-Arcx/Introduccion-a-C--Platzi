#include <stdio.h>

/*
Una constante es similar a una variable, reserva una cantidad de memoria dependiendo
del tipo de dato y le asigna un valor con la diferencia de que el valor no va a 
cambiar durante toda la ejecución del programa, solo podremos acceder a esa posición de 
memoria a recuperar el valor que contiene, pero no tendremos la posibilidad de modificar 
dicho valor.
*/

int main()
{
    //Para declarar una constante debemos utilizar la palabra cons

    const unsigned int cost = 2500u;// u sufijo que representa unsigned, l representa long
    const double annualExpense = 10845639.976462;
    const char post [20] = "Es de humanos errar";

    printf("\t%s \n\tCost: %d\n\tAnnual Expense: %f\n", post, cost, annualExpense);

    /*
    \t: tabulación
    \n: salto de línea
    %s: String
    %d: Entero
    %f: Flotantes
    %ld: Long
    */
    
    return 0;
}
