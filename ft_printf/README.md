*Este proyecto ha sido creado como parte del currículo de 42 por gamercha.*

# ft_printf

##  Descripción

Este proyecto consiste en la implementación de una versión propia de la función `printf` del lenguaje C. El objetivo principal es comprender en profundidad el manejo de argumentos variables, la conversión de tipos de datos y la gestión de la salida estándar.

La función `ft_printf` replica parcialmente el comportamiento de `printf`, soportando múltiples especificadores de formato y devolviendo el número total de caracteres impresos. Este proyecto refuerza conceptos clave como:

* Uso de `va_list`, `va_start`, `va_arg` y `va_end`
* Conversión de números a base hexadecimal
* Estructuración modular del código

---

##  Instrucciones

###  Compilación

Para compilar la librería:

```bash
make
```

Esto generará el archivo:

```
libftprintf.a
```

###  Limpieza

```bash
make clean     # elimina archivos objeto (.o)
make fclean    # elimina objetos y la librería
make re        # recompila todo
```

###  Uso

Incluye el header en tu proyecto:

```c
#include "ft_printf.h"
```

Compila junto a la librería:

```bash
cc main.c libftprintf.a
```

Ejemplo de uso:

```c
ft_printf("Hola %s, número: %d\n", "mundo", 42);
```

---

##  Especificadores implementados

* `%c` → carácter
* `%s` → string
* `%p` → puntero
* `%d` / `%i` → entero con signo
* `%u` → entero sin signo
* `%x` / `%X` → hexadecimal
* `%%` → símbolo %

---

##  Decisiones técnicas

* No se utiliza memoria dinámica (`malloc`) para simplificar la gestión y evitar fugas.
* Conversión de números implementada manualmente mediante buffers en stack.
* Separación por funciones específicas (`ft_printf_*`) para mejorar la modularidad.


---

##  Recursos

### Documentación y referencias

* Manual de `printf`:

  ```bash
  man 3 printf
  ```
* Documentación de argumentos variables:

  ```bash
  man stdarg
  ```

### Uso de inteligencia artificial

Se ha utilizado IA como herramienta de apoyo en:

* Resolución de dudas conceptuales (por ejemplo, funcionamiento de `%p` y manejo de punteros)
* Orientación sobre estructura del proyecto y buenas prácticas

No se ha utilizado IA para generar directamente el código final del proyecto, sino como soporte para el aprendizaje y comprensión.

