# Curso de introduccion a C
  <div align="center"><img src="https://programaenlinea.net/wp-content/uploads/2018/03/C-lenguaje-de-programacion-mas-popular.jpeg" width="50%"></div>  

## Tabla de Contenido  <a href="#tabla-de-contenido"></a>

### Introducción al lenguaje C<!-- omit in toc -->

- [¿Qué es el lenguaje C?](#qué-es-el-lenguaje-c)
- [¿Por qué aprender C?](#por-qué-aprender-c)
- [Instalando C en Linux](#instalando-c-en-linux)
- [Compilar programas usando GCC](#compilar-programas-usando-gcc)
- [¿Qué es GCC?](#qué-es-gcc)
- [Estructura de un programa C](#estructura-de-un-programa-c)

### Tipos de Datos en el lenguaje C
- [Tipos de datos](#tipos-de-datos)
- [Enteros](#enteros)
- [Unsigned](#unsigned)
- [Flotantes](#flotantes)
- [Void](#void)
- [Enum](#enum)
- [Char](#char)
- [String](#string)

## ¿Qué es el lenguaje C?<a name="qué-es-el-lenguaje-c"></a>

C es un lenguaje de programación de tipo estructurada creado por Dennis Ritchie durante 1972 y 1973, usa un tipado estático, soporta la recursividad, es un lenguaje compilado que permite tener mucha velocidad en tiempo de ejecución y control de la memoria por lo que es muy utilizado en sistemas operativos, software de aplicación, drivers y principalmente en sistemas embebidos.


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
 /*Preprocessors Comands, Zona donde incluimos nuestras librerias.*/
#include <stdio.h>

int main()
{
    /*
    first hello world in C language
    */
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

Cuando no se necesita los números negativos se utiliza la instrucción unsigned.

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
Números reales o de coma flotante, este tipo de dato no puede ser unsigned.

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
El tipo de dato void especifica que no hay ningún valor disponible, se utiliza en tres diferentes situaciones.

- La función retorna un tipo de dato void.
```C
  void function();
```

- La función tiene argumentos de tipo void, es decir no acepta o no se requieren de parámetros.

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

Enumeration o enum es una especie de lista, es un tipo de dato que nos vas a permitir guardar valores constantes, se utiliza principalmente para asignar nombres a las constantes integrales, haciendo que un programa sea fácil de leer y mantener.

<div align="center"><img src="https://www.geeksforgeeks.org/wp-content/uploads/Enum-In-C.png" width="90%"></div> 

Un programa de ejemplo para demostrar el funcionamiento de enum en C.
```C
#include <stdio.h>

/*
Creation and instance
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

  /*
  Operation
  */
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

El tipo de dato Char nos permite almacenar un solo carácter que debe estar encerrado entre comillas simples. Char está internamente constituido por un rango de valores, igual que cualquier rango de números.
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
Así es como se ve char en funcionamiento

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
El carácter 0 o \0 se conoce como carácter nulo, se encarga de marcar el final de la cadena de caracteres y aunque pertenece a la cadena, no aparece al utilizar funciones como printf.

<div align="right">
  <small><a href="#tabla-de-contenido--">🡡 volver al inicio</a></small>
</div>
