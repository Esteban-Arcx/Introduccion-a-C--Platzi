#include <stdio.h>

int main()
{
    /*En C se deben declarar todas las variables antes de su uso*/
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("C\tF\n");/* \t represeta la tabulación*/

    while (fahr <= upper)
    {
        celsius = 5 *(fahr-32)/9;
        printf("%d\t%d\n", fahr, celsius);/* %d Especifica que en esa posición va un tipo de dato entero*/
        fahr = fahr + step;
    }

    return 0;
    
}