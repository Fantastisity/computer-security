#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]) {
	char* cat = "/bin/sh";
	char* command = malloc(strlen(cat) + strlen(argv[1]) + 2);
	sprintf(command, "%s %s", cat, argv[1]);
	system(command);
	return 0;
}