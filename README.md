# C en 49 líneas

[![Estándar C11](https://img.shields.io/badge/Est%C3%A1ndar-C11-00599C.svg?logo=c&logoColor=white)](https://en.cppreference.com/w/c)
[![Licencia MIT](https://img.shields.io/badge/Licencia-MIT-green.svg)](./LICENSE)

Un curso introductorio y progresivo de programación en C, organizado en ejemplos breves e independientes. Cada archivo `.c` presenta un concepto, lo explica en comentarios y permite observarlo en un programa pequeño. 

El límite de **49 líneas**, incluidos los comentarios, es una decisión didáctica: ayuda a centrar la atención en una idea cada vez. No pretende sustituir un manual completo del lenguaje ni las referencias técnicas.

Los ejemplos de lenguaje se orientan a **C11**. El bloque de concurrencia usa interfaces **POSIX**, que no forman parte del estándar ISO C y están pensadas para sistemas compatibles, como Linux.

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
