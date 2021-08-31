#include <stdio.h>

int main()
{
    /* 
    El tipo de dato Char nos permite almacenar caracteres pero,
    esta internamente constituido por un rango de valores, igual que
    cualquier rango de numeros.

    char --> 1 Byte, -128 to 127 
    unsigned char --> 1 Byte, 0 to 255
    */

    char letter1 = 'H';
    char letter2 = 'E';
    char letter3 = 'L';
    char letter4 = 'L';
    char letter5 = 'O';

    printf("%c%c%c%c%c\n", letter1,letter2,letter3,letter4, letter5);
   
    return 0;
}

