#include "get_next_line.h"

int	main(int argc, char **argv)
{
	int	fd;

	if(argc < 2)
		return(1);
	fd = open(argv[1], O_RDONLY);
	if(!fd)
		return(1);
	printf("%s",get_next_line(fd));
	return(0);
}