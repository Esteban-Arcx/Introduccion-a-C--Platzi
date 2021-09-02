#include <stdio.h>

int main()
{
    
    //En C se deben declarar todas las variables antes de su uso
    
    int fahr, celsius;
    int lower, upper, step;
    char header [60] = "Equivalencias Grados \n\tCelsius a Fahrenheit\n\n\t °C\t    °F\n";

    lower = 0;
    upper = 300;
    step = 20;

    printf("\t%s\n", header);// \t represeta la tabulación, \n representa un salto de línea

    celsius = lower;
    
    while (celsius<= upper)
    {
        fahr = (celsius * 9/5) + 32;
        /*
            - %d Especifica que en esa posición va un tipo de dato entero.
            
            - %f Especifica que en esa posición va un tipo de dato con punto flotante.

            - Los números 3 y 6 son la amplitud es decir que los números de 
            la primera línea se van a imprimir en un campo de tres dígitos de 
            ancho y los números de la segunda línea en un campo de seis dígitos.

            - % .nf específica que el número a imprimir tengo una n>=0 cantidad de dígitos
            después del punto decimal.
        */
        printf("\t%3d\t%6d\n", celsius, fahr);
        celsius = celsius + step;
    }

    return 0;
    
}