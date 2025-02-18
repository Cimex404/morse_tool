#include "morse.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	int		i = 1;
	char	*translation;

	while (i < ac)
	{
		translation = morse(av[i]);
		if (translation)
		{
			printf("%s\n", translation);
			free(translation);
		}
		i ++;
	}
	return (0);
}