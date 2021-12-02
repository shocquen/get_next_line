#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int	main(int argc, char **argv)
{
	int	fd;

	if (argc < 2)
		fd = open("text.txt", O_RDONLY);
	else
		fd = open(argv[1], O_RDONLY);
	printf("%s", get_next_line(fd));
	exit(1);
}
