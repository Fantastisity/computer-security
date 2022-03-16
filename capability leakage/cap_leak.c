#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

int main() {
	int fd;
	char* v[2];
	if ((fd = open("test", O_RDWR | O_APPEND)) == -1) {
		puts("failed to open 'test'");
		exit(0);
	}
	printf("fd = %d\n", fd);
	setuid(getuid()); // downgrades root pr. to user pr.
	
	v[0] = "/bin/sh";
	v[1] = 0;
	
	execve(v[0], v, 0);
	return 0;
}
