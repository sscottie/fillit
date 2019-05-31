#include <fcntl.h>
#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int		main(int argc, char **argv)
{
	int 	fd;
	char	*s;
	int		ret;

	fd = open(argv[1], O_RDONLY);
	printf("%d", fd);
	ret = (fd, 2, 1);
	printf("%d", ft_strlen(fd));

	return (0);
}