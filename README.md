# Platzi Programación en C 
<p align="center">
  <a href="https://platzi.com/clases/lenguaje-c/"><img src="https://static.platzi.com/media/achievements/badge-introduccion-c-ab190d58-4558-4acf-970d-81313f9e3ff6.png"></a>
</p>


## Tabla de Contenido  <a href="#tabla-de-contenido"></a>

### Introducción a C

#### Introducción al lenguaje C  <!-- omit in toc -->
- [¿Qué es el lenguaje C?](#qué-es-el-lenguaje-c)
- [¿Por qué aprender C?](#por-qué-aprender-c)
- [Instalando C en Linux](#instalando-c-en-linux)
- [Compilar programas usando GCC](#compilar-programas-usando-gcc)
- [¿Qué es GCC?](#qué-es-gcc)
- [Estructura de un programa C](#estructura-de-un-programa-c)

#### Tipos de datos en el lenguaje C
- [Tipos de datos](#tipos-de-datos)
- [Enteros](#enteros)
- [Unsigned](#unsigned)
- [Flotantes](#flotantes)
- [Void](#void)
- [Enum](#enum)
- [Char](#char)
- [String](#string)

#### Variables en el lenguaje C
- [Declaración de variables](#declaración-de-variables)
- [Extern](#extern)
- [Declaración de constantes](#declaración-de-constantes)



<!-- ### Control de Flujo en C

#### Toma de decisiones


#### Control de Bucles en C


### Uso de las instrucciones break y continue -->

## ¿Qué es el lenguaje C?<a name="qué-es-el-lenguaje-c"></a>

C es un lenguaje de programación de tipo estructurada creado por Dennis Ritchie durante 1972 y 1973, usa un tipado estático, soporta la recursividad, es un lenguaje compilado que permite tener mucha velocidad en tiempo de ejecución y control de la memoria por lo que es muy utilizado en sistemas operativos, software de aplicación, drivers y principalmente en sistemas embebidos.

<div align="right">
  <small><a href="#tabla-de-contenido--">🡡 volver al inicio</a></small>
</div>

## ¿Por qué aprender C?<a name="por-qué-aprender-c"></a>


- Ayuda a entender los fundamentos de teoría de computación, al aprender la lógica de programar en C empezar a trabajar con otros lenguajes será más sencillo.

- Tienes que escribir mucho desde cero, ya que C tiene pocas librerías, esto es una ventaja al empezar a programar, ya que te ayuda a entender como están pasando y como funcionan verdaderamente las cosas.

- Al ser muy rápido en tiempo de ejecución es el más utilizado en programación de circuitos embebidos.

<div align="right">
  <small><a href="#tabla-de-contenido--">🡡 volver al inicio</a></small>
</div>


## Instalando C en Ubuntu(linux)<a name="instalando-c-en-linux"></a>

Actualizar la lista de paquetes
```bash
sudo apt update
```
Instalar gcc
```bash
sudo apt install gcc
```
Verificar si gcc está instalado con éxito o no
```bash
 gcc --version
```

<div align="right">
  <small><a href="#tabla-de-contenido--">🡡 volver al inicio</a></small>
</div>


## Compilar programas usando GCC<a name="compilar-programas-usando-gcc"></a>

Compilar programas
```bash
gcc -o <name_of_executable> <filename.c>
```
Ejecutar el programa
```bash
./<name_of_executable>
```

<div align="right">
  <small><a href="#tabla-de-contenido--">🡡 volver al inicio</a></small>
</div>


## ¿Qué es GCC?<a name="qué-es-gcc"></a>

GCC son las siglas del compilador para C

- GNU
- Compiler
- Collection

Lo que hace es tomar el código escrito en C y generar código binario que tu sistema operativo pueda entender y ejecutar. 

<div align="right">
  <small><a href="#tabla-de-contenido--">🡡 volver al inicio</a></small>
</div>


## Estructura de un programa C<a name="estructura-de-un-programa-c"></a>

```C
 /*
Preprocessors Comands, Zona donde incluimos
nuestras librerias.
*/
#include <stdio.h>

int main()
{
    
    //first hello world in C language
    
    printf("Hello Esteban");
    return 0;
}
```
- `#incude`: Indicador para uso de librería.
- `<stdio.h>`: manejo de entrada y salida en la terminal
- `int main()`: Función principal, en donde la ejecución del programa comienza.
- `printf()`: Función para imprimir en consola.
- `return 0`: Termina la ejecución del programa, es decir de la función `main`
- `< >`: Donde se especifica la librería.
- `()`: Parámetros de función.
- `{}`: Abrir/Cerrar proceso.
- `//`: Comentar una sola línea.
- `/*  */`: comentar varias líneas.
- `;`: Indicador del fin de una sentencia


<div align="right">
  <small><a href="#tabla-de-contenido--">🡡 volver al inicio</a></small>
</div>


## Tipos de datos<a name="tipos-de-datos"></a>
C es un lenguaje de programación tipado, es decir que siempre se debe declarar el tipo de dato que va a almacenar una variable.


### Enteros<a name="enteros"></a>
- `int`: 4 Bytes
```C
  int min, max;
  min = -2147483648;
  max = 2147483647;
```

- `short`: 2 Bytes
```C
  short min, max;
  min = -32768;
  max = 32767;
```

- `long`: 8 Bytes
```C
  long min, max;
  min =  -9223372036854775808;
  max =  9223372036854775807;
```

<div align="right">
  <small><a href="#tabla-de-contenido--">🡡 volver al inicio</a></small>
</div>


### Unsigned<a name="unsigned"></a>

Cuando no se necesita los números negativos se utiliza la instrucción `unsigned`.

- `unsigned int`: 4 Bytes
```C
  unsigned int min, max;
  min = 0;
  max = 4294967295;

```

- ` unsigned short`: 2 Bytes
```C
  unsigned short min, max;
  min = 0;
  max = 65535;
```

- `unsigned long`: 8 Bytes
```C
unsigned long min, max;
min = 0;
max = 18446744073709551615;
```

<div align="right">
  <small><a href="#tabla-de-contenido--">🡡 volver al inicio</a></small>
</div>


### Flotantes<a name="flotantes"></a>
Números reales o de coma flotante, este tipo de dato no puede ser `unsigned`.

- `float`: 4 Bytes
```C
  float min, max;
  min = 1.2E-38;
  max = 3.4E+38;
```

- `double`: 8 Bytes
```C
  double min, max;
  min = 2.3E-308;
  max = 1.7E+308;
```

- `long double`: 10 Bytes  to 
```C
  long double min, max;
  min = 3.4E-4932;
  max = 1.1E+4932; 
```
<div align="right">
  <small><a href="#tabla-de-contenido--">🡡 volver al inicio</a></small>
</div>


### Void<a name="Void"></a>
El tipo de dato `void` especifica que no hay ningún valor disponible, se utiliza en tres diferentes situaciones.

- La función retorna un tipo de dato `void`.
```C
  void function();
```

- La función tiene argumentos de tipo `void`, es decir no acepta o no se requieren de parámetros.

```C
  int random(void);
```

-  El puntero o apuntador que va a la dirección en memoria de un objeto, no le importa el tipo de dato que tenga.
```C
  void * VoidPtr;
```

<div align="right">
  <small><a href="#tabla-de-contenido--">🡡 volver al inicio</a></small>
</div>


### Enum<a name="enum"></a>

Enumeration o `enum` es una especie de lista, es un tipo de dato que nos vas a permitir guardar valores constantes, se utiliza principalmente para asignar nombres a las constantes integrales, haciendo que un programa sea fácil de leer y mantener.

<div align="center"><img src="https://www.geeksforgeeks.org/wp-content/uploads/Enum-In-C.png" width="90%"></div> 

Un programa de ejemplo para demostrar el funcionamiento de `enum` en C.
```C
#include <stdio.h>


//Creation and instance

enum deck
{
    club = 0,
    diamonds = 5,
    hearts = 10,
    spades = 15
}card; 

int main()
{

  
  //Operation

  card = spades;

  printf("Card Power %d\n", card);

  return 0;
}
```

Output:

```console
Card Power 15
```

<div align="right">
  <small><a href="#tabla-de-contenido--">🡡 volver al inicio</a></small>
</div>


### Char<a name="char"></a>

El tipo de dato `Char` nos permite almacenar un solo carácter que debe estar encerrado entre comillas simples. `Char` está internamente constituido por un rango de valores, igual que cualquier rango de números.
- `char`: 1 Byte

```C
  char min, max;
  min = -128;
  max = 127
```
- `unsigned char`: 1 Byte

```C
  unsigned char min, max;
  min = 0;
  max = 255
```
Así es como se ve el tipo de dato`char` en funcionamiento

```C
#include <stdio.h>

int main()
{
    char letter1 = 'H';
    char letter2 = 'E';
    char letter3 = 'L';
    char letter4 = 'L';
    char letter5 = 'O';

    printf("%c%c%c%c%c\n", letter1,letter2,letter3,letter4, letter5);
   
    return 0;
}
```

Output:

```console
HELLO
```
<div align="right">
  <small><a href="#tabla-de-contenido--">🡡 volver al inicio</a></small>
</div>


### String<a name="string"></a>

En C no  existe  un  tipo de dato predefinido que nos permita manipular cadenas  de  caracteres, la forma en la que podemos hacer uso de una cadena de caracteres es usando un arreglo de caracteres unidimensional.

Podemos  utilizar  varias  formas  de inicialización:

- Sin especificar el tamaño de la cadena

```C
  char str[] = "Hello";
  char str[] = {'H', 'e', 'l', 'l', 'o', 0};
  char str[] = {'H', 'e', 'l', 'l', 'o', '\0'};
```

- Especificando el tamaño de la cadena

```C
  char str[6] = "Hello";  
  char str[6] = {'H', 'e', 'l', 'l', 'o', 0}; 
  char str[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
```
El carácter `0`o `\0` se conoce como carácter nulo, se encarga de marcar el final de la cadena de caracteres y aunque pertenece a la cadena, no aparece al utilizar funciones como `printf`.

<div align="right">
  <small><a href="#tabla-de-contenido--">🡡 volver al inicio</a></small>
</div>

### Declaración de variables<a name="declaración-de-variables"></a>

Una variable es un espacio reservado en memoria en el que vamos a poder almacenar información, en C cada variable va a tener un tipo específico de dato (int,char,float...).

Para poder utilizar una variable, primero tiene que ser declarada:
```C
int number;
int player;
int turn;
const char post;
extern int points;
```
Para simplificar un poco, es posible inicializar y declarar más de una variable del mismo tipo en la misma sentencia:

```C
int number = 6, player = 1, turn = 3;
```

Las variables pueden ser de dos tipos según el lugar en que las declaremos: 

- Globales
- Locales

Las variables globales se declaran fuera de la función `main()`, estas pueden ser utilizadas en cualquier parte del programa y se destruye al finalizar este.

Las variables locales se declaran dentro de la función en la que vaya a ser utilizada estas variables solo existe dentro de la función en que se declaran y se destruye al finalizar dicha función.

```C
#include <stdio.h>


//Variable declaration

int global = 893;


int main()
{
  float local = 12.9;

  printf("Variable global: %d \nVariable local: %.1f\n", global, local);

  return 0;
}
```
Output:
```console
Variable global: 893 
Variable local: 12.9
```

<div align="right">
  <small><a href="#tabla-de-contenido--">🡡 volver al inicio</a></small>
</div>


### Extern<a name="extern"></a>

Extern lo utilizamos para el manejo de variables en diferentes archivos.


```C
#include <stdio.h>

/*
Para poder utilizar estas variable después de
haberlas declarado debemos definirlas para indicar
que vamos a hacer uso de ellas en nuestro código.
*/

//Variable declaration 
extern int a, b, c;

int main()
{
  //Variable definition
  int a, b, c;

  //Variable Initialization
  a = 10;
  b = 20;
  c = 30;

  printf("%d\n%d\n%d\n", a, b, c);

  return 0;
}
```


Output:
```console
10
20
30
```

<div align="right">
  <small><a href="#tabla-de-contenido--">🡡 volver al inicio</a></small>
</div>

### Declaración de constantes<a name="declaración-de-constantes"></a>

Una constante es similar a una variable, reserva una cantidad de memoria dependiendo del tipo de dato y le asigna un valor con la diferencia de que el valor no va a  cambiar durante toda la ejecución del programa. Solo podremos acceder a esa posición de memoria a recuperar el valor que contiene, pero no tendremos la posibilidad de modificar dicho valor.

En C las constantes se declaran de 2 formas:

- Utilizando `Cons`:

```C
    #include <stdio.h>

    int main()
    {
        const unsigned int cost = 2500u;
        const double annualExpense = 10845639.976462;
        const char post [20] = "Es de humanos errar";

        printf("\t%s \n\tCost: %d\n\tAnnual Expense: %f\n", post, cost, annualExpense);
        
        return 0;
    }
```
Output:

```console
        Es de humanos errar 
        Cost: 2500
        Annual Expense: 10845639.976462
```

- Utilizando `#Define`:

```C
#include <stdio.h>

#define POINT 1
#define LIMITE 50

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
```
Output:

```console
        lives: 10 
        Power: 6.8 
        Points: 0

        final Points 50
```

La diferencia entre el uso de `const` y el uso de `#define` está en  que mediante `const` se declara una constante que tiene un tratamiento parecido al de una variable (por ejemplo, la constante es de un tipo de dato) mientras que mediante `#define` se indica que escribir el nombre especificado  equivale a escribir el valor, con una correspondencia directa y sin un tratamiento similar al de una variable.

<div align="right">
  <small><a href="#tabla-de-contenido--">🡡 volver al inicio</a></small>
</div>