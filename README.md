# C en 49 líneas

[![Estándar C11](https://img.shields.io/badge/Est%C3%A1ndar-C11-00599C.svg?logo=c&logoColor=white)](https://en.cppreference.com/w/c)
[![Licencia MIT](https://img.shields.io/badge/Licencia-MIT-green.svg)](./LICENSE)

Un curso introductorio y progresivo de programación en C, organizado en ejemplos breves e independientes. Cada archivo `.c` presenta un concepto, lo explica en comentarios y permite observarlo en un programa pequeño.

El límite de **49 líneas**, incluidos los comentarios, es una decisión didáctica: ayuda a centrar la atención en una idea cada vez y facilita leer, compilar y modificar el código. No pretende sustituir un manual completo del lenguaje ni las referencias técnicas.

## Estructura del curso

Los ejemplos de lenguaje se orientan a **C11**. El bloque de concurrencia usa interfaces **POSIX**, que no forman parte del estándar ISO C y están pensadas para sistemas compatibles, como Linux.

| Bloque | Contenidos |
| --- | --- |
| [`01 hola mundo`](01%20hola%20mundo/) | Estructura de un programa, comentarios, identificadores, palabras reservadas y `return`. |
| [`02 variables`](02%20variables/) | Declaración e inicialización, tipos, enteros de ancho fijo, booleanos, conversiones, bloques y literales. |
| [`03 operadores`](03%20operadores/) | Operadores, precedencia, asignación compuesta, incremento, comparaciones y operaciones de bits. |
| [`04 condicionales`](04%20condicionales/) | `if`, `if/else`, operador condicional y `switch`. |
| [`05 bucles`](05%20bucles/) | Bucles `while`, `do/while` y `for`, además de `break` y `continue`. |
| [`06 funciones`](06%20funciones/) | Definición, parámetros, prototipos, `void` y ámbito. |
| [`07 modificadores`](07%20modificadores/) | Modificadores de tipos y palabras clave `const`, `static`, `volatile` e `inline`. |
| [`08 punteros`](08%20punteros/) | Direcciones, desreferenciación, paso por referencia, punteros a punteros, `void *` y punteros a funciones. |
| [`09 vectores`](09%20vectores/) | Declaración e iteración, aritmética de punteros, diferencias entre vectores y punteros, y copia. |
| [`10 cadenas`](10%20cadenas/) | Cadenas terminadas en nulo, declaración y funciones como `strlen` y `strcpy`. |
| [`11 memoria`](11%20memoria/) | Regiones de memoria, pila, heap, fugas, punteros colgantes, desbordamiento de pila y fallos de acceso. |
| [`12 compuestos`](12%20compuestos/) | `struct`, `union`, tipos anónimos, tamaño, enumeraciones y `typedef`. |
| [`13 io`](13%20io/) | Entrada y salida estándar, ficheros, lectura de caracteres y líneas, y argumentos de línea de comandos. |
| [`14 cabecera`](14%20cabecera/) | Preprocesador, macros, `#include` y guardas de inclusión. |
| [`15 concurrencia`](15%20concurrencia/) | Hilos POSIX, creación y unión de hilos, cancelación, carreras, mutexes, semáforos, interbloqueo e inanición. |

## Inicio rápido

### Probar en línea

Para empezar sin instalar herramientas, se puede usar [OnlineGDB para C](https://www.onlinegdb.com/online_c_compiler). Selecciona C, pega el contenido de un archivo `.c` y ejecútalo. En *Extra Compiler Flags*, añade:

```text
-std=c11 -Wall -Wextra -pedantic
```

Los ejemplos de concurrencia requieren soporte POSIX y no se ejecutarán en todos los compiladores en línea. Para ellos, usa un entorno Linux.

### Compilar en Linux

En Ubuntu o Debian, instala un compilador C si todavía no está disponible:

```bash
sudo apt update
sudo apt install build-essential
```

Clona el repositorio y compila el primer ejemplo con `cc`:

```bash
git clone https://github.com/asuagar/c-49-lineas.git
cd c-49-lineas
cc -std=c11 -Wall -Wextra -pedantic \
  "01 hola mundo/01_hello_world.c" -o hola
./hola
```

Cada archivo se compila por separado. Para los ejemplos POSIX de concurrencia, añade `-pthread` al comando de compilación y enlazado, por ejemplo:

```bash
cc -std=c11 -Wall -Wextra -pedantic -pthread \
  "15 concurrencia/03_join_exit.c" -o hilos
./hilos
```

## Referencias

- [Cabeceras de la biblioteca estándar de C](https://en.cppreference.com/w/c/header): funciones, tipos y macros agrupados por cabecera.
- [Referencia del lenguaje C](https://en.cppreference.com/w/c): sintaxis y características del lenguaje.

## Licencia

Este material se distribuye bajo la [licencia MIT](./LICENSE).
