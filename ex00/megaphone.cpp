#include <iostream>
#include <cstring>
#include <cmath>

int	main(int ac, char **av)
{
	int	i;
	int	n;

	i = 1;
	if (ac > 1)
	{
		while (av[i])
		{
			n = 0;
			while (av[i][n])
			{
				std::cout << (char)std::toupper(av[i][n]);
				n++;
			}
			if (av[i + 1])
				std::cout << " ";
			i++;
		}
		std::cout << std::endl;
	}
	else
		std:: cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std:: endl;
}