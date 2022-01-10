#include <iostream>

char	*capitalizeString(char *s)
{
	for (size_t i = 0; i < strlen(s); i++)
		s[i] = toupper(s[i]);
	return (s);
}

int	main(int argc, char **argv)
{
	int	i = 1;

	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (argv[i])
		{
			std::cout << capitalizeString(argv[i]);
			i++;
		}
		std::cout << std::endl;
	}
	return (0);
}
