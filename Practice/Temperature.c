#include <stdio.h>

int main()
{
    /*En C se deben declarar todas las variables antes de su uso*/
    double fahr, celsius;
    int lower, upper, step;
    char cen, fhr;

    lower = 0;
    upper = 300;
    step = 20;

    cen = 'C';
    fhr = 'F';

    fahr = lower;
    printf("%2c\t%6c\n", fhr,cen );/* \t represeta la tabulación*/

    while (fahr <= upper)
    {
        celsius = (fahr - 32.0)/ 1.8;

        /*
            - %d Especifica que en esa posición va un tipo de dato entero.
            
            - %f Especifica que en esa posición va un tipo de dato con punto flotante.

            - Los números 4 y 8 son la amplitud es decir que los números de 
            la primera línea se van a imprimir en un campo de cuatro dígitos de 
            ancho y los números de la segunda línea en un campo de ocho dígitos.

            - % .1f específica que el número a imprimir tengo solo un dígito
            después del punto decimal.
        */
        printf("%4.1f\t%8.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

    return 0;
    
}