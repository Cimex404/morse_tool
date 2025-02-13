#include "morse.h"

static void	add_substr(char *str, char *result, int i, int *j)
{
	int		k = 0;
	char	*code = morse_table(str[i]);

	while (code[k])
		result[(*j)++] = code[k++];
}

static void	fill_string(char *str, char *result)
{
	int	i = 0;
	int	j = 0;

	while (str[i])
	{
		add_substr(str, result, i, &j);
		if (str[i + 1] != '\0')
			result[j++] = ' ';
		i ++;
	}
	result[j] = '\0';
}

char	*morse(char *str)
{
	char	*result;

	result = malloc(get_result_len(str) + 1);
	if (result == NULL)
		return (NULL);
	fill_string(str, result);
	return (result);
}