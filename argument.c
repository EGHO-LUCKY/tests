#include <stdio.h>

int main(int ac, char **av){
	for (; *av!=NULL; av++)
		printf("%s ", *av);
	printf("\n");

	return (0);
}
