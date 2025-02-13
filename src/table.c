#include "morse.h"

char	*morse_table(char	c)
{
	switch (c)
	{
		case 'a':
			return (".-");
		case 'b':
			return ("-...");
		case 'c':
			return ("-.-.");
		case 'd':
			return ("-..");
		case 'e':
			return (".");
		case 'f':
			return ("..-.");
		case 'g':
			return ("--.");
		case 'h':
			return ("....");
		case 'i':
			return ("..");
		case 'j':
			return (".---");
		case 'k':
			return ("-.-");
		case 'l':
			return (".-..");
		case 'm':
			return ("--");
		case 'n':
			return ("-.");
		case 'o':
			return ("---");
		case 'p':
			return (".--.");
		case 'q':
			return ("--.-");
		case 'r':
			return (".-.");
		case 's':
			return ("...");
		case 't':
			return ("-");
		case 'u':
			return ("..-");
		case 'v':
			return ("...-");
		case 'w':
			return (".--");
		case 'x':
			return ("-..-");
		case 'y':
			return ("-.--");
		case 'z':
			return ("--..");
		case 'A':
			return (".-");
		case 'B':
			return ("-...");
		case 'C':
			return ("-.-.");
		case 'D':
			return ("-..");
		case 'E':
			return (".");
		case 'F':
			return ("..-.");
		case 'G':
			return ("--.");
		case 'H':
			return ("....");
		case 'I':
			return ("..");
		case 'J':
			return (".---");
		case 'K':
			return ("-.-");
		case 'L':
			return (".-..");
		case 'M':
			return ("--");
		case 'N':
			return ("-.");
		case 'O':
			return ("---");
		case 'P':
			return (".--.");
		case 'Q':
			return ("--.-");
		case 'R':
			return (".-.");
		case 'S':
			return ("...");
		case 'T':
			return ("-");
		case 'U':
			return ("..-");
		case 'V':
			return ("...-");
		case 'W':
			return (".--");
		case 'X':
			return ("-..-");
		case 'Y':
			return ("-.--");
		case 'Z':
			return ("--..");
		case '0':
			return ("-----");
		case '1':
			return (".----");
		case '2':
			return ("..---");
		case '3':
			return ("...--");
		case '4':
			return ("....-");
		case '5':
			return (".....");
		case '6':
			return ("-....");
		case '7':
			return ("--...");
		case '8':
			return ("---..");
		case '9':
			return ("----.");
		case '.':
			return (".-.-.-");
		case ',':
			return ("--..--");
		case '?':
			return ("..--..");
		case '!':
			return ("-.-.--");
		case '-':
			return ("-....-");
		case '_':
			return ("..--.-");
		case '/':
			return ("-..-.");
		case '@':
			return (".--.-.");
		case '(':
			return ("-.--.");
		case ')':
			return ("-.--.-");
		case '\'':
			return (".----.");
		case '"':
			return (".-..-.");
		case ':':
			return ("---...");
		case ';':
			return ("-.-.-.");
		case '=':
			return ("-...-");
		case '+':
			return (".-.-.");
		case '$':
			return ("...-..-");
		case '&':
			return (".-...");
		case ' ':
			return (" ");
		case '\n':
			return ("\n");
		default:
			return ("");
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