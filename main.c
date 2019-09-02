#include <stdio.h>
#include "hysteresis.h"

int main(int ac, char **av) {
	printf("25 %u\n", hysteresis(25));
	printf("5 %u\n", hysteresis(5));
	printf("25 %u\n", hysteresis(25));
	printf("15 %u\n", hysteresis(15));
	return (0);
}