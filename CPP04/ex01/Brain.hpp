#pragma once

# include <iostream>
# include <string>

# define PRINT(__msg) (std::cout << __msg << std::endl)

class Brain {

	public:
		std::string	ideas[100];

		Brain();
		Brain( const Brain &in );
		~Brain();

		Brain	&operator=( const Brain &in );
};
