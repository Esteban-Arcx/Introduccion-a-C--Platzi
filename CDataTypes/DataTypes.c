#include <stdio.h>

int main()
{
    /* 
    Recuerda que C es un lenguaje de programación tipado.

    Basic Types:

        (A) Enteros

            int --> 4 Bytes, -2,147,483,648 to 2,147,483,647. 
    */
            int xN, yP;
            xN = -2147483648;
            yP = 2147483647;


    /* 
            short --> 2 Bytes, -32,768 to 32,767.
    */
            short shN, shP;
            shN = -32768;
            shP = 32767;


    /*
            long --> 8 Bytes, -9223372036854775807 to 9223372036854775807.
    */
            long lgN, lgP;
            lgN =  -9223372036854775807;
            lgP =  9223372036854775807;


    /*
            unsigned --> Cuando no se necesita los números negativos se utiliza la 
            instrucción unsigned.

            unsigned int --> 4 Bytes, 0 to 4,294,967,295.
    */
            unsigned int nsgdInt;
            nsgdInt = 4294967295;
            

    /*
            unsigned short --> 2 Bytes 0 to 65,535.
    */
            unsigned short nsgdShort;
            nsgdShort =  65535;


    /*
            unsigned long --> 8 Bytes, 0 to 18446744073709551615.
    */
             unsigned long nsgdLong;
             nsgdLong = 1844674407370955161;


    /*
        (B) flotantes
            Estos tipos de datos no pueden ser unsigned.

            float  --> 4 Bytes, 1.2E-38 to 3.4E+38 (6 decimal places)
    */
            float flN, flP;
            flN = -0.000021;
            flP = 2.592935;


    /*
            double --> 8 Bytes, 2.3E-308 to 1.7E+30815 (15 decimal places)
    */
            double dblN, dblP;
            dblN = -1.395023592835125;
            dblP = 1.489390352184750;


    /*
            long double --> 10 Bytes, 3.4E-4932 to 1.1E+4932 (19 decimal places)
    */
            long double lgdbN, lgdbP;
            lgdbN = -2.4756902547698722696;
            lgdbP = 0.4729576109453623482;


    return 0;
}








