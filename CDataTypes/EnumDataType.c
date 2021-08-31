#include <stdio.h>

/* 
Enum(Enumeration) --> Es una especie de lista, Es un tipo de dato 
que no vas a permitir guardar valores constantes.
*/

enum deck
{
    club = 0,
    diamonds = 5,
    hearts = 10,
    spades = 15
}card;

int main()
{
    card = spades;

    printf("Card Power %d\n", card);

        return 0;
    }




