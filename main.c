#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
	if (argc < 4) {
		fprintf(stderr, "Please, enter your coefficients!\n");
		exit(EXIT_FAILURE);
	}
	return EXIT_SUCCESS;
}