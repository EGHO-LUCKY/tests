#include <stdio.h>
#include <stdlib.h>

int main(void){
	size_t n;
	char *buff = calloc(20, sizeof(char));
	char *end = "exit";

	do {
		printf("$ ");
		getline(&buff, &n, stdin);
		printf("%s", buff);
	} while (*buff != *end);
	free(buff);

	return (0);
}
