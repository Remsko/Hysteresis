#include <stdio.h>
#include "hysteresis.h"

int main(int ac, char **av)
{
	printf("25 => lvl: %u\n", hysteresis(25));
	printf("5 => lvl: %u\n", hysteresis(5));
	printf("25 => lvl: %u\n", hysteresis(25));
	printf("15 => lvl: %u\n", hysteresis(15));
	printf("100 => lvl: %u\n", hysteresis(100));
	printf("100 => lvl: %u\n", hysteresis(100));
	printf("0 => lvl: %u\n", hysteresis(0));
	printf("0 => lvl: %u\n", hysteresis(0));

	printf("5 => lvl: %u\n", hysteresis(5));
	printf("91 => lvl: %u\n", hysteresis(91));
	printf("86 => lvl: %u\n", hysteresis(86));

	return (0);
}
