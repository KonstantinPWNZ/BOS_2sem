#include <stdio.h>

extern char *environ;

int main(int argc, char *argv[]) {
	char **p;
	int counter = 0;
	for(p = environ; *p != NULL; p++)
		counter++;

	printf("Number of enviroment variables: %d\n",counter);
	printf("Number of command line arguments: %d\n", argc);
	return 0;
}
