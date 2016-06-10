#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
	if (argc < 4) {
		fprintf(stderr, "Please, enter your coefficients!\n");
		exit(EXIT_FAILURE);
	}

	int a, b, c;
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	c = atoi(argv[3]);

	if (a == 0) {
		fprintf(stderr, "First coefficient must be positive\n");
		exit(EXIT_FAILURE);
	}

	double discriminant;
	discriminant = sqrt((b * b) - (4 * a * c));

	if (discriminant < 0) {
		printf("This equation has noo roots\n");
		exit(EXIT_SUCCESS);
	} else if (discriminant == 0) {
		double x;
		x = - b / 2 * a;
		printf("There is only one root:\n%f\n", x);
	}

	return EXIT_SUCCESS;
}