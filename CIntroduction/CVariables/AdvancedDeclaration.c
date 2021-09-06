#include <stdio.h>

/*
Para utilizar la variable global definida en algún 
otro fichero fuente, debe declararse utilizando la 
palabra clave extern.
*/
extern int points, max, step;

int main()
{
    
    int points = 0, max = 15, step = 3;

    while(points <= max)
    {
        printf("You get %d points\n", points);
        points += step;
    }
    return 0;
}
