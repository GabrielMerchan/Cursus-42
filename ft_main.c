#include <limits.h> // Para INT_MAX, INT_MIN, etc.
#include "ft_printf.h"
#include <stdio.h>
int	main(void)
{
	int	ret_ft;
	int	ret_org;
	int	num = 42;
	int	*ptr = &num;

	printf("\n========== TEST 1: CARACTERES Y STRINGS (%%c, %%s) ==========\n");
	
	// 1. Caracter simple
	ft_printf("Mio: %c\n", 'A');
	printf("Org: %c\n", 'A');
	
	// 2. String normal
	ft_printf("Mio: %s\n", "Hola Mundo");
	printf("Org: %s\n", "Hola Mundo");

	// 3. Comprobación de retornos (longitud)
	printf("--- Chequeo de retorno ---\n");
	ret_ft = ft_printf("123");
	printf("\n");
	ret_org = printf("123");
	printf("\n");
	printf("Longitud -> Mio: %d | Org: %d\n", ret_ft, ret_org);


	printf("\n========== TEST 2: NÚMEROS DECIMALES (%%d, %%i) ==========\n");
	
	// 1. Enteros básicos
	ft_printf("Mio: %d, %i\n", 42, -42);
	printf("Org: %d, %i\n", 42, -42);

	// 2. Límites (INT_MAX, INT_MIN)
	ft_printf("Mio: %d, %d\n", INT_MAX, INT_MIN);
	printf("Org: %d, %d\n", INT_MAX, INT_MIN);

	// 3. Unsigned (%%u)
	
	ft_printf("Mio: %u (positivo), %u (negativo casteado)\n", 1234, -5);
	printf("Org: %u (positivo), %u (negativo casteado)\n", 1234, -5);


	printf("\n========== TEST 3: HEXADECIMAL Y PUNTEROS (%%x, %%X) ==========\n");

	// 1. Hexadecimal (minúscula y mayúscula)
	ft_printf("Mio: %x %X\n", 255, 255);
	printf("Org: %x %X\n", 255, 255);

	// 2. Hexadecimal cero
	ft_printf("Mio: %x\n", 0);
	printf("Org: %x\n", 0);

	// 3. Punteros (%%p)
	
	ft_printf("Mio: %p\n", ptr);
	printf("Org: %p\n", ptr);

	// 4. Puntero NULL (Caso borde importante)
	// Nota: El comportamiento de printf con NULL varía según el SO (nil vs 0x0), 
	// tu ft_printf debe imitar lo que haga el printf de tu ordenador.
	ft_printf("Mio: %p\n", NULL);
	printf("Org: %p\n", NULL);
	

	printf("\n========== TEST 4: PORCENTAJE Y MIXTO (%%, mixto) ==========\n");

	// 1. Porcentaje literal
	ft_printf("Mio: 100%%\n");
	printf("Org: 100%%\n");

	// 2. Mix de todo un poco para ver si el va_arg avanza bien
	ret_ft = ft_printf("Mio: El numero %d en hex es %x y la letra es %c\n", 42, 42, 'Z');
	ret_org = printf("Org: El numero %d en hex es %x y la letra es %c\n", 42, 42, 'Z');
	printf("Longitud -> Mio: %d | Org: %d\n", ret_ft, ret_org);

	// Añade más pruebas para %u con valores extremos:
	ft_printf("Mio: %u\n", 0);
	printf("Org: %u\n", 0);
	ft_printf("Mio: %u\n", 4294967295u);
	printf("Org: %u\n", 4294967295u);
	
	printf("\n========== FIN DEL TEST ==========\n");

	return (0);
}
