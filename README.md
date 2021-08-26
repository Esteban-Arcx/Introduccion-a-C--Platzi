# Curso de introduccion a C
  <div align="center"><img src="https://programaenlinea.net/wp-content/uploads/2018/03/C-lenguaje-de-programacion-mas-popular.jpeg" width="50%"></div>  

## Introducción al lenguaje C<!-- omit in toc -->

- [¿Qué es el lenguaje C?](#¿Qué-es-el-lenguaje-C?)
- [¿Por qué aprender C?](#¿Por-qué-aprender-C?)
- [Instalando C en Linux](#Instalando-C-en-Linux)
- [Compilar programas usando GCC](#Compilar-programas-usando-GCC)

## Tipos de Datos en el lenguaje C
- [Estructura de un programa C](#Estructura-de-un-programa-C)


## ¿Qué es el lenguaje C?<a name="Qué-es-el-lenguaje-C"></a>

C es un lenguaje de programación de tipo estructurada creado por Dennis Ritchie durante 1972 y 1973, usa un tipado estático, soporta la recursividad, es un lenguaje compilado que permite tener mucha velocidad en tiempo de ejecución y control de la memoria por lo que es muy utilizado en sistemas operativos, software de aplicación, drivers y principalmente en sistemas embebidos.


## ¿Por qué aprender C?<a name="¿Por-qué-aprender-C?"></a>

- Ayuda a entender los fundamentos de teoría de computación, al aprender la lógica de programar en C empezar a trabajar con otros lenguajes será más sencillo.

- Tienes que escribir mucho desde cero, ya que C tiene pocas librerías, esto es una ventaja al empezar a programar, ya que te ayuda a entender como están pasando y como funcionan verdaderamente las cosas.

- Al ser muy rápido en tiempo de ejecución es el más utilizado en programación de circuitos embebidos.

## Instalando C en Ubuntu(linux)<a name="Instalando-C-en-Linux"></a>

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

## Compilar programas usando gcc<a name="Compilar-programas-usando-GCC"></a>
Compilar programas
```bash
gcc <filename> -o <name_of_executable>
```
Ejecutar el programa
```bash
./<filename>
```

## Estructura de un programa C<a name="Estructura-de-un-programa-C"></a>


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
- `#incude`: Indicador para uso de libreria.
- `<stdio.h>`: manejo de entrada y salida en la terminal
- `printf()`: Funcion para imprimir en consola.
- `return 0`: Termina la ejecucion del programa, es decir de la funcion `main`
- `int main()`: función principal, en donde la ejecución de programa comienza.
- `< >`: Donde se especifica la libreria.
- `()`: Parametros de función.
- `{}`: Abrir/Cerrar proceso.
- `/*  */`: comentar varias lineas.
- `;`: es el signo de fin de sentencia
