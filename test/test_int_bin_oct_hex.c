#include "../main.h"

/**
 * print_numbers - tests our func for integer, binary, octal and hexadecimal
 *
 * Return: 0
 */
int main(void)
{
	_printf("10 + 10 is equal to %d.\n", 20);
	printf("10 + 10 is equal to %d.\n", 20);
	_printf("10 in binary is [%b], in octal is [%o] and in hexadecimal is [%x]\n", 5, 5, 5);
	printf("10 in binary is [%b], in octal is [%o] and in hexadecimal is [%x]\n", 5, 5, 5);
	return (0);
}

