#include <stdio.h>

/* 
Enum(Enumeration) --> Es una especie de lista, Es un tipo de dato 
que no vas a permitir guardar valores constantes 
*/

enum weekDays{
    Sunday, 
    Monday, 
    Tuesday, 
    Wednesday,
    Friday,
    Saturday
};

int main()
{

   enum weekDays today;
   today = Tuesday;
   printf("Day %d", today+1);

    return 0;
}




