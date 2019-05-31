#include "check_map.h"
#include <fcntl.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	char *s;
	int fd;
	int count;

	count = 0;
	fd = open(argv[1], O_RDONLY);
	while (check_map(fd, &s) > 0)
	{
		printf("%s\n", s);
		if (ft_strchr(s, '#'))
			count++;
	}
	printf("\n%d", count);
	return 0;
}