#include "morse.h"

static char	ft_tolower(char c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

char	*morse_table(char	c)
{
	c = ft_tolower(c);
	switch (c)
	{
		case 'a':	return (".-");
		case 'b':	return ("-...");
		case 'c':	return ("-.-.");
		case 'd':	return ("-..");
		case 'e':	return (".");
		case 'f':	return ("..-.");
		case 'g':	return ("--.");
		case 'h':	return ("....");
		case 'i':	return ("..");
		case 'j':	return (".---");
		case 'k':	return ("-.-");
		case 'l':	return (".-..");
		case 'm':	return ("--");
		case 'n':	return ("-.");
		case 'o':	return ("---");
		case 'p':	return (".--.");
		case 'q':	return ("--.-");
		case 'r':	return (".-.");
		case 's':	return ("...");
		case 't':	return ("-");
		case 'u':	return ("..-");
		case 'v':	return ("...-");
		case 'w':	return (".--");
		case 'x':	return ("-..-");
		case 'y':	return ("-.--");
		case 'z':	return ("--..");
		case '0':	return ("-----");
		case '1':	return (".----");
		case '2':	return ("..---");
		case '3':	return ("...--");
		case '4':	return ("....-");
		case '5':	return (".....");
		case '6':	return ("-....");
		case '7':	return ("--...");
		case '8':	return ("---..");
		case '9':	return ("----.");
		case '.':	return (".-.-.-");
		case ',':	return ("--..--");
		case '?':	return ("..--..");
		case '!':	return ("-.-.--");
		case '-':	return ("-....-");
		case '_':	return ("..--.-");
		case '/':	return ("-..-.");
		case '@':	return (".--.-.");
		case '(':	return ("-.--.");
		case ')':	return ("-.--.-");
		case '\'':	return (".----.");
		case '"':	return (".-..-.");
		case ':':	return ("---...");
		case ';':	return ("-.-.-.");
		case '=':	return ("-...-");
		case '+':	return (".-.-.");
		case '$':	return ("...-..-");
		case '&':	return (".-...");
		case ' ':	return (" ");
		case '\n':	return ("\n");
		default:	return ("");
	}
}

static int	ft_strlen(char *str)
{
	int	i = 0;

	while (str[i])
		i ++;
	return (i);
}

int	get_result_len(char *str)
{
	int	len = 0;
	int	i = 0;

	while (str[i])
	{
		len += ft_strlen(morse_table(str[i])) + 1;
		if (str[i + 1] == '\0')
			len --;
		i ++;
	}
	return (len);
}